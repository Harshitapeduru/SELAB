/** 
* @file
* @author Jan Doe 
* @version 1.0 
* 
* @section LICENSE 
* 
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License as
* published by the Free Software Foundation; either version 2 of
* the License, or (at your option) any later version.
*
* @section DESCRIPTION
* 
* The time class represents a moment of time. 
*/ 
//this is a cpp file
#include <iostream>
using namespace std;

/**
 * @brief Calculates the factorial of a given non-negative integer.
 * 
 * @param n The non-negative integer for which factorial is to be calculated.
 * @return unsigned long long The factorial of the given number.
 */
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

/**
 * @brief Main function to demonstrate the factorial calculation.
 * 
 * @return int Program exit status.
 */
int main() {
    int number;
    cout << "Enter a non-negative integer to calculate its factorial: ";
    cin >> number;

    if (number < 0) {
        cerr << "Error: Please enter a non-negative integer." << endl;
        return 1;
    }

    unsigned long long result = factorial(number);
    //output
    cout << "Factorial of " << number << " is: " << result << endl;

    return 0;
}
