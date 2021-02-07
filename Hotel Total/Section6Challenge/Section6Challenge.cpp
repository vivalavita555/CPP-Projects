// Section6Challenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    const int small_room{ 25 };
    const int large_room{ 35 };
    const float sales_tax{ 0.06 };
    const int est_validity{ 30 };

    int number_of_s_rooms{ 0 };
    int number_of_l_rooms{ 0 };

    cout << "Please enter the number of small rooms you want cleaned: " << endl;
    cin >> number_of_s_rooms;
    cout << "Please enter the number of large rooms you want cleaned: " << endl;
    cin >> number_of_l_rooms;

    int subtotal = ((number_of_s_rooms * small_room)+(number_of_l_rooms * large_room));
    float tax = subtotal * sales_tax;
    float total = subtotal + tax;
    
    cout << "Estimate for carpet cleaning service" << endl <<
        "Number of small rooms: " << number_of_s_rooms << endl <<
        "Number of large rooms: " << number_of_l_rooms << endl <<
        "Price per small room: " << small_room << endl <<
        "Price per large room: " << large_room << endl <<
        "Cost: $" << subtotal << endl <<
        "Tax: $" << tax << endl <<
        "=======================================" << endl <<
        "Total estimate: $" << total << endl <<
        "This estimate is valid for " << est_validity << " days" << endl;
    
}

