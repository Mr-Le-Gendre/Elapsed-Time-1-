// Elapsed Time(1).cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int seconds;
    cout << "Enter the elapsed time for an event in seconds: ";
    cin >> seconds;

    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int remaining_seconds = seconds % 60;

    cout << "The elapsed time is: ";
    if (hours < 10) {
        cout << "0";
    }
    cout << hours << ":";
    if (minutes < 10) {
        cout << "0";
    }
    cout << minutes << ":";
    if (remaining_seconds < 10) {
        cout << "0";
    }
    cout << remaining_seconds << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
