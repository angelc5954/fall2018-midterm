/**
Description:
Filename: main.cpp
Author: Angel Castaneda
Date: 10/18/18
**/

#include<iostream>
#include<cstring>

using namespace std;

string get_string(string prompt);
int char_count(string,char);

int main()
{
    string str = get_string("Enter a string: ");

    char chr = 'a'; 

    cout << "A shows up " << char_count(str,chr) << " times." << endl;
    return 0;
}

string get_string(string prompt)
{
    string input;
    cout << prompt;
    cin >> input;
    return (input);
}

int char_count(string s,char c)
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
