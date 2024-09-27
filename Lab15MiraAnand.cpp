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
    // void setTitle(string t), void setYear(int y), void setScreenwriter(string s) function header
    // DESCRIPTION: these functions will "set" the title, year, and screenwriter data for each Movie object
    // ARGUMENTS: string t, int y, & string s. Represents the title, year, and screenwriter for each movie
    // RETURNS: nothing, void functions
    void setTitle(string t)             { movieTitle = t; }
    void setYear(int y)                 { yearReleased = y; }
    void setScreenwriter (string s)     { screenwriterName = s; }
    // creating all getters together, to keep it organized
    // string getTitle() const, int getYear() const, string getScreenwriter() const function header
    // DESCRIPTION: these functions will "get" the title, year, and screenwriter data for each Movie object after they are "set"
    // ARGUMENTS: no arguments/parameters
    // RETURNS: string movieTitle, int yearReleased, string screenwriterName. Returns title, year, and screenwriter data for each movie
    // adding a trailing const to each, since getters do not change an object's data
    string getTitle() const         { return movieTitle; }
    int getYear() const             { return yearReleased; }
    string getScreenwriter() const  { return screenwriterName; }

    // creating a member print() method to print the object's data
    // void print() function header
    // DESCRIPTION: this function simply outputs the data for each Movie object
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
    // creation of an STD::vector container to hold multiple Movie objects
    vector<Movie> movieVector;

    // declaration of temporary variables for our temporary Movie object
    string title; // to hold a temp movie title name
    int year; // to hold a temp release year
    string screenwriter; // to hold a temp screenwriter name

    // declaration and initialization of a string variable that holds the name of the input file to read data from
    string inputFile = "movieInfo.txt";
    // creation of an ifsteam (input file) object
    ifstream fin;
    // open the input file
    fin.open(inputFile);

    // the if condition checks if the input file opened correctly
    if (fin.good())
    {
        // while loop will continue until there are no more movie titles to be read from the file
        while (getline(fin, title)) // reading of movie title data from file
        {
            fin >> year; // reading of release year data from file
            fin.ignore();
            getline(fin, screenwriter); // reading of screenwriter name data from file

            // creation of a temporary Movie object
            Movie temp;
            temp.setTitle(title); // calling the setTitle() public member function, setting the title for the temp Movie object
            temp.setYear(year); // calling the setYear() public member function, setting the year for the temp Movie object
            temp.setScreenwriter(screenwriter); // calling the setScreenwriter() public member function, setting the screenwriter for the temp Movie object

            // appending temporary Movie object to STD::vector container
            // using push_back() so that data can be pushed into the vector, meaning the user can have as many movie records in the file as they would like
            movieVector.push_back(temp);
        }

        // close the input file
        fin.close();
    }
    // if the input file did not open correctly, execute "else"
    else
    {
        cout << "ERROR: Could not open input file. Please make sure the file exists in the correct location and try running the program again." << endl;
        cout << "Program will now exit..." << endl;
        return 1; // return an error state
    }

    // output contents of the vector
    // using a C++ 11 range loop and "auto" keyword to output contents of the vector
    for (auto movie : movieVector)
    {
        // printing contents by calling the print() public member function
        // we could also print the contents by calling the getters, if we did not have a print() public member function
        movie.print();
    }
    
    return 0;
}