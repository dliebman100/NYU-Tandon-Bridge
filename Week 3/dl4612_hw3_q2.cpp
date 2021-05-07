/*
Write	a	program	that:
//Asks	the	user	for	their	name.
//Asks	the	user	to	input	their	graduation	year.
//Asks	the	user	to	input	the	current	year.

Assume	the	student	is	in	a	four-year	undergraduate	program.	Display	the	current	status	the	student	is	in.
Possible	status include:
//not	in	college	yet
//freshman,	sophomore
//junior
//senior
//graduated.

Note:
//If graduation	year == current	year,	status	is	‘Graduated’;
//If graduation	year is	four	years	after	current	year,	status	is	‘Freshman’,	etc.

Your	program	should	interact	with	the	user	exactly as	it	shows	in	the	following	example:
Please	enter	your	name: Jessica
Please	enter	your	graduation	year: 2019
Please	enter	current	year: 2015
Jessica,	you	are	a	Freshman
*/

#include <iostream>
using namespace std;

int main() {
	string firstName;
	int gradYear, currentYear, yearDifference;


	cout << "Please enter your name: ";
	cin >> firstName;

	cout << "Please enter your graduation year: ";
	cin >> gradYear;

	cout << "Please enter your current year: ";
	cin >> currentYear;

	yearDifference = gradYear - currentYear;

	if (yearDifference == 0)
	{
		cout << firstName << " , you graduated!";
	}
	else if (yearDifference == 1) {
		cout << firstName << ", you are a Senior.";
	}
	else if (yearDifference == 2) {
		cout << firstName << ", you are a Junior.";
	}
	else if (yearDifference == 3) {
		cout << firstName << ", you are a Sophomore.";
	}
	else if (yearDifference == 4) {
		cout << firstName << ", you are a Freshman.";
	}
	else {
		cout << firstName << ", you are not in college yet.";
	}

	return 0;
}