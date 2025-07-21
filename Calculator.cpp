#include <iostream>
using namespace std;

int sum(int a , int b)
{
	return (a + b);
}

int diff(int a , int b)
{
	return (a - b);
}

int product(int a , int b)
{
	return (a * b);
}

int quotient(int a , int b)
{
	return (a / b);
}

int main()
{
	int num1, num2;
	
	cout << "     ====CALCULATOR====     " << endl;
	
	int index;
	
	cout << "Choose one option below: " << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "Choose option: ";
	cin >> index;
	cout << "---------------------------------------------------------------------------" << endl << endl;
	
	switch(index)
	{
		case 1:
			cout << "Enter First Number: ";
			cin >> num1;
			
			cout << "Enter Second Number: ";
			cin >> num2;
			
			cout << "The sum is: " << sum(num1 , num2) << endl;
			
			break;
			
			case 2:
			cout << "Enter First Number: ";
			cin >> num1;
			
			cout << "Enter Second Number: ";
			cin >> num2;
			
			cout << "The difference is: " << diff(num1 , num2) << endl;
			
			break;
			
			case 3:
			cout << "Enter First Number: ";
			cin >> num1;
			
			cout << "Enter Second Number: ";
			cin >> num2;
			
				cout << "The Product is: " << product(num1 , num2) << endl;
				
				break;
				
			case 4:
			cout << "Enter First Number: ";
			cin >> num1;
			
			cout << "Enter Second Number: ";
			cin >> num2;
			
			cout << "The Quotient is: " << quotient(num1 , num2) << endl;
			
			break;
			
			default:
				return 0;
	}
	
	
}
