/*
Program Roman Numeral Converter
Writer a program that asks the user to enter a number within the range of 1 through 10.
use switch statement to display the Roman numeral version of that number
input validation: Do not accept a number less than 1 or greater than 10
Last modified 8/6/2021
*/
#include <iostream>
using namespace std;

int main()
{
	int numberToConvert; //hold the number to convert to roman

	//get the number to convert 
	cout << "Enter a number within the range of 1 to 10 to display it's numeral Roman version of that number ";
	cin >> numberToConvert;

	//if statement compare if the number is least than 1 or greater than 10 
	if (numberToConvert >= 1 && numberToConvert <= 10)
	{
		
		switch (numberToConvert)
		{
		case 1: cout << numberToConvert << " = I ";

			break;
		case 2: cout << numberToConvert << " = II";
			break;
		case 3: cout << numberToConvert << " = III";
			break;
		case 4: cout << numberToConvert << " = IV";
			break;
		case 5: cout << numberToConvert << " = V";
			break;
		case 6: cout << numberToConvert << " = VI";
			break;
		case 7: cout << numberToConvert << " = VII";
			break;
		case 8: cout << numberToConvert << " = VIII";
			break;
		case 9: cout << numberToConvert << " = IX";
			break;
		case 10: cout << numberToConvert << " = X";
			break;
		}
	}
	// else ask for the new number
	else
	{
		cout << "Enter a new number between 1 and 10";
			cin >> numberToConvert;
	}

	return 0;
	system("pause");
}