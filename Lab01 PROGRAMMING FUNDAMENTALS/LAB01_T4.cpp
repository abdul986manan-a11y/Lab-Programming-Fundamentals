// Error: expected ':' before return
// AI: AI told ':' is missing at the end of cout line
// Understanding: Every statement need a : at end
//Fixed:added ':' and fixed end as 'endl'
// verifying: I verified correct
// Reason: output is now according to expectation

#include <iostream>
using namespace std;

int main()
{
	cout << "Lab 01 complete!" << endl;
	cout << "Next Lab: Variables and Input" << endl;
	return 0;
}