/* 
Project Name: Chapter 2 Exercise 10 Distance Per Tank of Gas
File Name: Chapter2Exercise10ExtraCreditDistancePerTankofGas.cpp
Programmer: Kristen White
Date 9/17/25
Requirements: Calculate the number of miles per gallon the car gets.
*/
// This program calculates the miles per gallon a car gets. 

# include <iostream> // We will always need this library for writing
// to the console and reading from the keyboard

using namespace std; // We use this to simplify commands

int main()
{
	double gallons, miles, mpg;
	
	// Get the number of gallons from the user. 
	cout << "Enter how many gallons the car holds: ";
	cin >> gallons;

	// Get the number of miles driven.
	cout << "Enter how many miles were driven: ";
	cin >> miles;

	//Calculate the miles per gallon.
	mpg = miles / gallons;

	// Display the result.
	cout << "The car gets " << mpg << " miles per gallon." << endl;
	//It is best to have a return statement if the module is defined as returning a value.
	return 0;
}