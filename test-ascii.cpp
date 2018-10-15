/*

Author: Farhan Pushan
Course: CSCI-136
Instructor: Maryashashahashahsahhsahshahsaha
Assignment: Lab6AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

Here, briefly, at least in one or a few sentences
describe what the program doesn't do.

This program doesn't solve world hunger but it can print out the characters
in a user input line by line and it's ASCII value beside it.


I'm learning. 

*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    string user_input;
    cout << "Input: ";
    //cin  >> user_input;
    getline(cin, user_input);
    
    
    
    int length = user_input.length();
    
    for (int i = 0; i <= (length-1); i++)
    {
    
    
    cout << user_input[i] << " " << (int) user_input[i]  << endl;
    
    }
    return 0;
}
