#include <iostream>
using namespace std;

// Function prototype
void sort(int &x, int &y, int &z);

int main() {
    int a, b, c;

    // Input three integers
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    // Call the sort function
    sort(a, b, c);

    // Output the sorted results
    cout << "The sorted integers are: " << a << ", " << b << ", " << c << endl;

    return 0;
}

// Function to sort three integers by reference
void sort(int &x, int &y, int &z) {
    int temp;

    // Sort x, y, and z in ascending order
    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }
    if (x > z) {
        temp = x;
        x = z;
        z = temp;
    }
    if (y > z) {
        temp = y;
        y = z;
        z = temp;
    }
}

