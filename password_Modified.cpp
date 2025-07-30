#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char correct_pass[] = "OpenSesame";
    char input_pass[20];
    int attempts = 0;

    while (attempts < 5) {
        cout << "Please enter your password: ";
        cin >> input_pass;

        if (strcmp(correct_pass, input_pass) == 0) {
            cout << "Access Granted!" << endl;
            return 0;
        } else {
            cout << "Incorrect password." << endl;
            attempts++;
        }
    }

    cout << "Too many failed attempts. Try again later." << endl;
    return 0;
}
