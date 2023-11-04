//***************Documentation section**************//
/*
  @author:Hadeer Omar Saleh
  @address: codesoft_SimpleCalculator
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

char operators;
unsigned int first_number;
unsigned int second_number;


int main()
{
    cout << "Enter the first number:\n" << endl;
    cin  >> first_number;
    cout << "Enter the operator (+,-,*,/)\n"<< endl;
    cin  >> operators;
    cout << "Enter the second number:\n" <<endl;
    cin  >> second_number;

    switch (operators)
    {
        case '+' :
            cout << "Result = \n" << (first_number + second_number) <<endl;
        break;
        case '-' :
            cout << "Result = \n" << (first_number - second_number) << endl;
            break;
        case '*' :
            cout << "Result = \n" << (first_number * second_number) << endl;
            break;
        case '/' :
            cout << "Result = \n" << (first_number / second_number) << endl;
            break;
        default:
            cout<< "Invalid operator!!";
            break;
    }

    return 0;
}

