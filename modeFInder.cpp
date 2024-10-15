// C++ program to illustrate how to find the mode in a
// sorted vector
#include <iostream>
using namespace std;

int main()
{
    // Initialize an array with integer values
    int myArray[] = { 1, 2, 3, 3, 5, 5, 5, 5, 6, 7 };
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Initialize variables to track mode
    int mode = -1;
    int curr_count = 1;
    int max_count = 1;

    // Iterate through the array to find the mode
    for (int i = 1; i < size; ++i) {
        if (myArray[i] == myArray[i - 1]) {
            ++curr_count;
        }
        else {
            // Check if the current count is greater than
            // the maximum count found so far
            if (curr_count > max_count) {
                max_count = curr_count;
                mode = myArray[i - 1]; // Update the mode
            }
            curr_count = 1; // Reset current count for the
                            // new element
        }
    }

    // Check if the last element forms the mode
    if (curr_count > max_count) {
        mode = myArray[size - 1];
    }

    // Print the mode or a message if no mode is found
    if (mode != -1) {
        cout << "Mode is: " << mode << endl;
    }
    else {
        cout << "No mode found." << endl;
    }

    return 0;
}
