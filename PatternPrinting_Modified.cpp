#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many rows do you want for the pattern? ";
    cin >> n;

    // Example: Triangle Pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Additional simple pattern
    cout << "\nNumber pyramid:\n";
    int count = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << count++ << " ";
        }
        cout << endl;
    }

    return 0;
}
