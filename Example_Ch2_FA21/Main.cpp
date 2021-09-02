#include <iostream>

using namespace std;

// Function Prototype
void ExampleFunction();

int Add(int a, int b);

int main()
{
	cout << "In main!\n" << endl;

	// Function Call
	ExampleFunction();

	cout << Add(2, 3) << endl << endl;

	cout << "Back in main!\n\n";

	return 0;
}

// Function Definition
void ExampleFunction()
{
	cout << "In function!\n\n";
}

int Add(int a, int b)
{
	return a + b;
}