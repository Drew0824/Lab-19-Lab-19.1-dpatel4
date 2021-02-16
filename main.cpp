#include <iostream>
#include <iomanip>
using namespace std;

//	********************************************************
//	printDescription
//	task:	  This function prints a program description
//	data in:  none
//	data out: no actual parameter altered
//	*******************************************************
void printDescription() 
{
	cout << "************************************************" << endl << endl;
	cout << "This program takes two numbers (payRate & hours)" << endl;
	cout << "and multiplies them to get gross pay " << endl;
	cout << "it then calculates net pay by subtracting 15%" << endl;
	cout << "************************************************" << endl << endl;
}

//	***************************************************************
//	computePaycheck
//	task:	  This function takes rate and time and multiples them to
//	          get gross pay and then finds net pay by subtracting 15%.
//	data in:  pay rate and time in hours worked
//	data out: the gross and net pay
//	****************************************************************
void computePaycheck(double rate, int time, double& gross, double& net)
{
  gross = rate * time;

	// Fill in the code to find the net pay
}

int main() {
  double payRate;
	double grossPay;
	double netPay;
	int hours;

	cout << setprecision(2) << fixed;
	cout << "Welcome to the Pay Roll Program" << endl;

	printDescription();		// Call to Description function 

	cout << "Please input the pay per hour" << endl;
	cin >> payRate;

	cout << endl << "Please input the number of hours worked" << endl;
	cin >> hours;

	cout << endl;

	computePaycheck(payRate, hours, grossPay, netPay);

  cout << "The gross pay is $" << grossPay << endl;

	// Fill in the code to output net pay

}