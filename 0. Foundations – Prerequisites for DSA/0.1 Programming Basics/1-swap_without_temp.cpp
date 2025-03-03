#include <iostream>

using namespace std;

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