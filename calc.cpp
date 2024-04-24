#include <iostream>
#include <cmath>
using namespace std;

int x, y, sum;
string choose = "";
int i = 0;

void add() {
    cout << "Insert num 1:";
    cin >> x;
    cout << "Insert num 2:";
    cin >> y;
    sum = x + y;
}
void subtract() {
    cout << "Insert num 1:";
    cin >> x;
    cout << "Insert num 2:";
    cin >> y;
    sum = x - y;
}

int main() {
    while (i < i+1) {
        cout << "Hello, welcome to the Calculator!\n";
        cout << "Please choose your mode:";
        cin >> choose;
        if (choose == "1") {
            add();
            cout << "Sum is:" << sum << "\n";
        }
        if (choose == "2") {
            subtract();
            cout << "Sum is:" << sum << "\n";
        }
        if (choose == "q") {
            break;
        }
        return 0;
    }
}