/*
Program Magic Dates
The date june 10,1960 is special because when we write it in the following format, the month times the day equals the year
6/10/60
write a program that asks the user to enter a month (in numeric form) a day, and a two-digit year.
The program should then determine whether the month times the day is equal to the year. if so, 
it should display a message saying the date is magic.
otherwise, it should display a message saying the date is not magic.
Last modified 8/6/2021
*/

#include <iostream>
using namespace std;

int main()
{
	int day, month, year;  // hold the variables

	// get the values
	cout << "Enter a month in numeric form";
	cin >> month;
	cout << "Enter the day";
	cin >> day;
	cout << "enter the year in a form of two digit";
	cin >> year;

	//while 
	while (month >= 12 && month <= 1)
	{
		cout << "Please enter a month between 1 and 0"; 
		cin >> month;
	}

	while (day >= 31 && day <= 1)
	{
		cout << "Please enter a day between 1 and 31";
		cin >> day;
	}
	while (year >= 99 && year <= 10)
	{
		cout << "Please enter a year between 10 and 99";
		cin >> year;
	}

	int magicDate = month * day;

	if (magicDate == year)
	{
		cout << "The day is magic";
		cout << magicDate;
	}
	else
	{
		cout <<"The day is not magic";
		cout << magicDate;
	}
	return 0;
	system("pause");
}