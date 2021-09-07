/* Name
*  Class
*  Lab
*  Customer info demo
*/

#include <iostream>

using namespace std;

// inputs customer info
void Input();
// output customer info to screen
void Output();

// first name
string fName;
// last name
string lName;

int main()
{
	Input();
	Output();

	return 0;
}

void Input()
{
	cout << "What is your first name: ";
	cin >> fName;

	cout << "\nWhat is your last name: ";
	cin >> lName;
}

void Output()
{
	cout << "\n" << fName << " " << lName;
}