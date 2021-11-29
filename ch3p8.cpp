/*
    Write a program to test an integer value to determine if it is odd or even.
    As always, make sure your output is clear and complete. In other words, don’t just output yes or no. 
    Your output should stand alone, like "The value 4 is an even number.""
*/

#include "std_lib_facilities.h"

int main(){
    int input;

    cout << "Even or Odd Program\n\n";

    cout << "Enter a number to test: ";
    cin >> input;

    cout << "The value "; 

    if(input % 2 == 0){
        cout << input << " is an even number.";
    }
    else{
        cout << input << " is an odd number.";
    }
    
    return 0;
}