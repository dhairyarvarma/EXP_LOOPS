#include<iostream>
using namespace std;

int main() {
    int number, reversed = 0;
    cout << "Enter an integer: ";
    cin >> number;

    while (number != 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }

    cout << "Reversed number is: " << reversed << endl;
    return 0;
}
