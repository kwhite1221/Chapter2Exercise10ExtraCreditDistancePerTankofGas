// This program calculates the miles per gallon a car gets. 

# include <iostream>
using namespace std;

int main()
{
	double gallons = 15;
	double miles = 375;
	double mpg;

	//Calculate the miles per gallon.
	mpg = miles / gallons;

	// Display the result.
	cout << "The car gets " << mpg << " miles per gallon." << endl;

	return 0;
}