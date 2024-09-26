// COMSC-210 | Lab 15 | Mira Anand
// Module 5, Lesson: OOP Introduction/Review, Assignment: Movie Class
// Coded using Visual Studio Code for Mac

#include <fstream> // to be able to read data from an external .txt file
#include <iostream>
#include <string>
#include <vector> // // to use STD::vector, choosing <vector> class vector as my container for this lab
using namespace std;

// creation of Movie class
class Movie
{
    // private member variables
    private:
        string movieTitle;
        int yearReleased;
        string screenwriterName;
    // public member functions
    // using inline functions for setters and getters, since functions are 1 line
    public:
    // creating all setters together, to keep it organized
    // function header
    // DESCRIPTION:
    // ARGUMENTS:
    // RETURNS: nothing, void functions
    void setTitle(string t)             { movieTitle = t; }
    void setYear(int y)                 { yearReleased = y; }
    void setScreenwriter (string s)     { screenwriterName = s; }
    // creating all getters together, to keep it organized
    // function header
    // DESCRIPTION:
    // ARGUMENTS:
    // RETURNS:
    // adding a trailing const to each, since getters do not change an object's data
    string getTitle() const         { return movieTitle; }
    int getYear() const             { return yearReleased; }
    string getScreenwriter() const  { return screenwriterName; }

    // creating a member print() method to print the object's data
    // void print() function header
    // DESCRIPTION: this function neatly outputs the data for each Movie object
    // ARGUMENTS: no arguments/parameters
    // RETURNS: nothing, void function
    void print()
    {
        cout << "Movie title: " << movieTitle << endl;
        cout << "Year released: " << yearReleased << endl;
        cout << "Screenwriter name: " << screenwriterName << endl;
        cout << endl;
    }
};

int main()
{
    // creation of an STD::vector container 
    vector<Movie> movieVector;

    // declaration of temporary variables
    string t; // to hold a temp movie title name
    int y; // to hold a temp release year
    string s; // to hold a temp screenwriter name

    // declaration and initialization of a string variable that holds the name of the input file to read data from
    string inputFile = "movieInfo.txt";
    // creation of an ifsteam (input file) object
    ifstream fin;
    // open the input file
    fin.open(inputFile);
    
    return 0;
}