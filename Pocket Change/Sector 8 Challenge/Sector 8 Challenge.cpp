#include <iostream>
using namespace std;

int main()
{
	int change_in_cents = 123;
	int new_change = change_in_cents;
	int dollars = 0;
	int quarters = 0;
	int dimes = 0;
	int nickles = 0;
	int pennies = 0;

	if (change_in_cents >= 100) {
		dollars = (new_change / 100);
		new_change -= (100 * dollars);
	}
	if (change_in_cents >= 25) {
		quarters = (new_change / 25);
		new_change -= (25 * quarters);
	}
	if (change_in_cents >= 10) {
		dimes = (new_change / 10);
		new_change -= (10 * dimes);
	}
	if (change_in_cents >= 1) {
		pennies = new_change;
		new_change -= (pennies);
	}
	cout << dollars << endl << quarters << endl << dimes << endl << nickles << endl << pennies << endl;

}

