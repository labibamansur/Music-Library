#include "Album.h" 
#include <iostream> 
using namespace std;

//initialisation
Album::Album(string newArtist, string newTitle, int newYear){
artist=newArtist;
title=newTitle;
year=newYear;
displayAs=(artist+", "+title+" ("+(to_string(year))+")");

}

//getting the artist name
string Album::GetArtist() const{
    return artist;

}
//getting the title
string Album::GetTitle() const{
    return title;
}

//getting the year
int Album::GetYear() const{
    return year;
}

//the function is true when the compared data matches 
//using AND operator to return the whole list
bool Album::operator==(const Album &itemToCompare) const{
    return (artist==itemToCompare.artist) && (title==itemToCompare.title) && (year==itemToCompare.year);
}

//This fucntion sort outs the list
//true --> when ,album<itemToCompare
//artists< -true
//artists> --false
//artists== checks the title
//title <---true
//title >--- false
//title == --checks with the year
//year<--true
//else-- false
bool Album::operator<(const Album &itemToCompare) const{
    if(artist!=itemToCompare.artist){
        return artist<itemToCompare.artist;
    }

    else  if(title!=itemToCompare.title){
        return title<itemToCompare.title;
    }

    else{
        return year<itemToCompare.year;
    }
}

//makes sure the output is a string
Album::operator const char *() const{

    return displayAs.c_str();
};
