/*
Program Minimum / Maximum 
Write a program that asks the user to enter two numbers.
The program should use the conditional operator to determine which number 
is the smaller and which is the larger
Last modified 8/6/2021
*/

#include <iostream>
using namespace std;

int main()
{
	//hold the numbers 
	int firstNumber, secondNumber; 
	
	//get the numbers to compare
	cout << "Enter two digits to compare " << endl ;
	cin >> firstNumber >> secondNumber;

	//compared and display two numbers
	if (firstNumber < secondNumber)
	{
		cout << firstNumber << " is least than " << secondNumber;
	}
	else
		cout << firstNumber << " is greater than " << secondNumber; 
	return 0;
	system("pause");

}