#include <iostream>

using namespace std;

// Demonstrates swapping two integer variables without using a temporary variable
int main() {
    int a = 5;
    int b = 10;

    cout << "before swap:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "after swap:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}