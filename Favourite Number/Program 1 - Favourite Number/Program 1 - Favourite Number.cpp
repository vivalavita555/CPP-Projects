#include <iostream>

int main() {
	int favouriteNumber;
	std::cout << "What is your favourite number between 1 and 100?: ";
	std::cin >> favouriteNumber;
	std::cout << "Amazing!! " << favouriteNumber << " is my favourite number too!" << std::endl;
	return 0;
}