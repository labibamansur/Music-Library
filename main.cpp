#include "Album.h" 
#include "AlbumCollection.h" 
#include <set>
#include <iostream> 
#include<iomanip>
using namespace std;

//from testcase 2
AlbumCollection db;
void InsertAlbums(){ 
 db.InsertAlbum("The Beatles", "Sgt Pepper's Lonely Hearts Club Band", 1967); 
db.InsertAlbum("Jay-Z", "The Blueprint", 2001);
 db.InsertAlbum("The White Stripes", "Elephant", 2003);
 db.InsertAlbum("Dua Lipa", "Future Nostalgia", 2020);
 db.InsertAlbum("Taylor Swift", "Red (Taylor's Version)", 2021); 
db.InsertAlbum("The Beatles", "Yellow Submarine", 1969);
 db.InsertAlbum("The Plagiarist", "Future Nostalgia", 2021);
}

//from case 3
AlbumCollection db;
void InsertAlbums(){ 
 db.InsertAlbum("The Beatles", "Sgt Pepper's Lonely Hearts Club Band", 1967); 
db.InsertAlbum("Jay-Z", "The Blueprint", 2001);
 db.InsertAlbum("The White Stripes", "Elephant", 2003);
 db.InsertAlbum("Dua Lipa", "Future Nostalgia", 2020);
 db.InsertAlbum("Taylor Swift", "Red (Taylor's Version)", 2021); 
db.InsertAlbum("The Beatles", "Yellow Submarine", 1969);
 db.InsertAlbum("The Plagiarist", "Future Nostalgia", 2021);
}


//case 1
int main(){

Album album1 ("The Beatles", "Sgt Pepper's Lonely Hearts Club Band", 1967);
Album album2 ("Jay-Z", "The Blueprint", 2001);
cout << "album1 == album2 ? " << (album1 == album2) << endl; 
cout << "album1 < album2 ? " << (album1 < album2) << endl; cout 
<< "album1 > album2 ? " << (album2 < album1) << endl;

//case 2
InsertAlbums(); 
db.Print();
cout << "---" << endl;
cout << "Delete all albums by artist 'The Beatles'." << endl; 
db.DeleteAlbumsByArtist("The Beatles"); db.Print();

//case 3
InsertAlbums(); 
db.PrintByYear(2021);
}