// Conditional Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include<iostream>                  //head
using namespace std;
//function decelatation below with two parameters
void addition()                                 // function declaration of addition 
{
    int val1, val2;
    cout << "Enter your desired number: \n";
    cin >> val1 >> val2;
    if (val1 <= 0 || val2 <= 0)             //verify the numbers enter by the user is positive or negative.
    {
        cout << "Above value is invalid, add a posive or valid value only" << endl;
    }
    else
    {
        cout << "The addition of " << val1 << " and " << val2 << " is: " << val1 << "+" << val2 << "=" << val1 + val2 << endl;
    }
}
void subtraction()                           // function declaration of subtraction
{
    int val1, val2;
    cout << "Enter your desired number: \n";
    cin >> val1 >> val2;                //verify the numbers enter by the user is positive or negative.
    if (val1 <= 0 || val2 <= 0)
    {
        cout << "Above value is negetive or zero, add a posive value only" << endl;
    }
    else
    {
        cout << "The subtraction of " << val1 << " and " << val2 << " is: " << val1 << "-" << val2 << "=" << val1 - val2 << endl;
    }
}
void multiplaction()                               // function declaration of multliplctaion 
{
    int val1, val2;
    cout << "Enter your desired number: \n";
    cin >> val1 >> val2;
    if (val1 <= 0 || val2 <= 0)             //verify the numbers enter by the user is positive or negative.
    {
        cout << "Above value is negetive or zero, add a posive value only" << endl;
    }
    else
    {
        cout << "The multiplication of " << val1 << " and " << val2 << " is: " << val1 << "*" << val2 << "=" << val1 * val2 << endl;
    }
}
void division()                                      // function declaration of division
{
    int val1, val2;
    cout << "Enter your desired number: \n";
    cin >> val1 >> val2;
    if (val1 <= 0 || val2 <= 0)             //verify the numbers enter by the user is positive or negative.
    {
        cout << "Above value is negetive or zero, add a posive value only" << endl;
    }
    else
    {
        cout << "The division of " << val1 << " and " << val2 << " is: " << val1 << "/" << val2 << "=" << val1 / val2 << endl;
    }
}

//a loop to ask the user the operation he / she want to perform using the following choice
int main()                          // main body starts here
{
    int method;
    bool exit = false;
    char select;

    while (!exit)
    {
        do
        {
            cout <<                             /*after the choice  you need to ask the user to enter the two number
                                                  needed for the operation i.e. val1 and val2*/
                "\n Press 1 for Addition"
                "\n Press 2 for Subtraction"
                "\n Press 3 for Multiplication"
                "\n Press 4 for Division"
                "\n \n Choose from the above: ";

            cin >> method;
            switch (method)
            {
            case 1:
                addition();             //function calling addition
                break;
            case 2:
                subtraction();          //function calling subtraction
                break;
            case 3:
                multiplaction();        //function calling multliplication
                break;
            case 4:
                division();             //function calling division
                break;
            default:
            {
                cout << "Enter correct choice, choose between 1-4 ";        //if user chooses wrong option
            }
            }
        }         while (method == 0);                //exit and re-execution
        {
            cout << "\n Press any key to continue or Press F to end\n";         //to ask the user if he want to continue or not.
            cin >> select;

            if (select == 'F' || select == 'f')
                exit = true;
        }

    }
}