#include <iostream>

using namespace std;

/**
 * @brief Prints integers from 1 to 100 to the console.
 * @return int Returns 0 to indicate successful execution.
 */
int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }

    return 0;
}