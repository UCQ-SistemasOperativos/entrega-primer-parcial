//
// Created by Hugo De la Rosa on 10/10/23.
//
// C++ program to create calculator using
// switch statement
#include <iostream>
using namespace std;

// Driver code
int main()
{
    char op;
    float num1, num2;

    // It allows user to enter operator
    // i.e. +, -, *, /
    cin >> op;

    // It allow user to enter the operands
    cin >> num1 >> num2;

    // Switch statement begins
    switch (op) {

        default:
            cout << "Error! operator is not correct";
    }
    // switch statement ends

    return 0;
}
