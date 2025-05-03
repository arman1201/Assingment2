#include <iostream>
using namespace std;

void display(int a, int b) {
    cout << "Two integers: " << a << ", " << b << endl;
}

void display(int a) {
    cout << "Single integer: " << a << endl;
}

int main() {
    display(3);
    display(3, 4);
    return 0;
}
