
#include <iostream>
using namespace std;

int main()
{
	char op;
	float num1, num2;
	char choice;

	do
	{
	// allows to enter operator
	cout << "Choose an operator (+, -, *, /): ";
	cin >> op;

	// allows to enter the operands
	cout << "Enter the first number: ";
	cin >> num1;

	cout << "Enter the second number: ";
	cin >> num2;

	switch (op)
	{
	// addition
	case '+':
		cout << num1 + num2;
		break;

	// subtraction
	case '-':
		cout << num1 - num2;
		break;

	// multiplication
	case '*':
		cout << num1 * num2;
		break;

	// division
	case '/':
		if (num2 == 0)
		{
			cout << "Error: Division by zero" << endl;
		}

		else
		{
			cout << num1 / num2;
		}

		break;

	// if operators is not mentioned above
	default:
		cout << "Error! invalid operator";
	}

	cout << "\n Do you want to perform another calculation? (y/n): ";
	cin >> choice;

	} while (tolower(choice) == 'y');

	cout << "Goodbye!" << endl;

	return 0;
}
