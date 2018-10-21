/**
Description: This function will count how many "A"'s there are in a given string.
Filename: main.cpp
Author: Angel Castaneda
Date: 10/18/18
**/

#include<iostream>
#include<cstring>

using namespace std;

string get_string(string prompt);        //function declaration
int char_count(string,char);

int main()
{
    string str = get_string("Enter a string: ");     //string variable

    char chr = 'a';  //the A's in the string will be used

    cout << "A shows up " << char_count(str,chr) << " times." << endl;  //functiion call and displaying how many "a"s are in the given string 
    return 0;
}

string get_string(string prompt) //Prompt the user for the string that will be used for the next string
{
    string input;
    cout << prompt;
    cin >> input;
    return (input);
}

int char_count(string s,char c)  //Count the number of "A"s in the given string and return the number
{
    int count = 0;
 
    for(int i = 0; i < s.size(); i++)
    { 
        if(s.at(i) == c)
        {    
            count++;
        }
        else
        {
            count == count;
        }
    } 

    return (count);
}
