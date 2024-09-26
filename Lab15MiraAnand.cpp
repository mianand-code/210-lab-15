// COMSC-210 | Lab 15 | Mira Anand
// Module 5, Lesson: OOP Introduction/Review, Assignment: Movie Class
// Coded using Visual Studio Code for Mac

#include <fstream> // to be able to read data from an external .txt file
#include <iostream>
#include <string>
#include <vector> // // to use STD::vector
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
    // RETURNS:
    void setTitle(string t)     { movieTitle = t; }
    void setYear(int y)         { yearReleased = y; }
};

int main()
{
    return 0;
}