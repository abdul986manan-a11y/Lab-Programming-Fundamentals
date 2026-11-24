#include <iostream>
using namespace std; //BUG 1: colon was missed after std

int main()
{
	cout << "Welcome to the Lab!" << endl; //BUG 2: colon missed after endl
	cout << "Today we learn \"C++\"." << endl; //BUG 3: 'c' letter in cout was capital
	cout << "Files are in C:\\Lab01" << endl; //BUG 4: added one \ to print '\Lab01'
	cout << "Bye!" << endl; //BUG 4: added "after Bye!
	return 0;
}