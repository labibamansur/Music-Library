#include "AlbumCollection.h"
#include <iomanip>
#include <set>
#include <string>
using namespace std;

// set-- sets the whole album collection
// should not store the alum multiple times
// if it stores multiple times--> it wont work; bc we dont have the classes for
// this

// inserts an album for the attributes
void AlbumCollection::InsertAlbum(string artist, string title, int year) {
  Album newAlbum(artist, title, year);
  setAlbums.insert(newAlbum);
}

// prints the list
void AlbumCollection::Print() {
  for (const auto &Album : setAlbums) {
    // cout<<album.GetArtist()<<","<<album.GetTitle()<<"("<<album.GetYear()<<")"<<endl;
    cout << Album << endl;
  }
}

// when someone is searching a piece of the string, it matches/searches from the
// albums (ie. Spotify Seaerch List??)
void AlbumCollection::PrintByTitleSubstring(string titleSubstring) {
  for (auto &Album : setAlbums) {
    while (ContainsTitle(titleSubstring)) {
      cout << Album.GetArtist() << ", " << Album.GetTitle() << " ("
           << Album.GetYear() << ")" << endl;
    }
  }
}

// search the name of the artist for a specific artist
void AlbumCollection::PrintByArtist(string artist) {
  for (auto element : setAlbums) {
    if (element.GetArtist() == artist) {
      // cout<<album.GetArtist()<<","<<album.GetTitle()<<"("<<album.GetYear()<<")"<<endl;
      cout << element << endl;
    }
  }
}

// search the name of the year  for a specifi year
void AlbumCollection::PrintByYear(int year) {
  for (auto element : setAlbums) {
    if (element.GetYear() == year) {
      // cout<<album.GetArtist()<<","<<album.GetTitle()<<"("<<album.GetYear()<<")"<<endl;
      cout << element << endl;
    }
  }
}

// returns triue if the title exists
bool AlbumCollection::ContainsTitle(string title) {
  for (auto element : setAlbums) {
    if (element.GetTitle() == title) {
      // cout<<Album.GetArtist()<<","<<Album.GetTitle()<<"("<<Album.GetYear()<<")"<<endl;
      // cout << element << endl;
      return true;
    }
  }
  // else{
  return false;
  //}
}

// returns triue if the artist exists
bool AlbumCollection::ContainsArtist(string artist) {
  for (auto element : setAlbums) {
    if (element.GetArtist() == artist) {
      // cout<<album.GetArtist()<<","<<album.GetTitle()<<"("<<album.GetYear()<<")"<<endl;
      //cout << element << endl;
      return true;
    }
  }
  // else{
  return false;
  //}
}

// returns triue if the year exists
bool AlbumCollection::ContainsYear(int year) {
  for (auto element : setAlbums) {
    if (element.GetYear() == year) {
      // cout<<Album.GetArtist()<<","<<Album.GetTitle()<<"("<<Album.GetYear()<<")"<<endl;
      cout << element << endl;
      return true;
    }
  }
  // else{
  return false;
  //}
}

// removes the FIRST album where title = <title> from the collection
// if no such album is found, prints "No album found!" (without the quotes) to
// standard output.
void AlbumCollection::DeleteAlbumByTitle(string titleToSearch) {
  bool check_title = false;
   std::set<Album> Temp1;
  for (auto Album : setAlbums) {
    if (Album.GetTitle() == titleToSearch) {
      check_title = true;
      Temp1.insert(Album);
      //setAlbums.erase(Album);
      
    }
     
    
  }

  for (auto Album : Temp1){
     setAlbums.erase(Album);
   }

  if (!check_title) {
    cout << "No album found!" << endl;
 
  }
}

// removes ALL albums from collection where artist = <artist>
// if no such album is found, prints "No album found!" (without the quotes) to
// standard output.
void AlbumCollection::DeleteAlbumsByArtist(string artistToSearch) {
  bool check_artist = false;
  std::set<Album> Temp;
  for (const auto &Album : setAlbums) {
    if (Album.GetArtist() == artistToSearch) {
      check_artist = true;

      Temp.insert(Album);
      //setAlbums.erase(Album);
    }

  }

  for (const auto &Album : Temp) {
    setAlbums.erase(Album);
  }

  if (!check_artist) {
    cout << "No album found!" << endl;

  }
}

// total number of the albums
int AlbumCollection::GetNumberAlbums() { return setAlbums.size(); }
