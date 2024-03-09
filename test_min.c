#include <stdio.h>
#include <assert.h>

// Function to find the minimum value in an array
int min(int arr[], int size) {
    int min_val = arr[0]; // Initialize min_val to the first element of the array
    
    // Iterate through the array starting from the second element
    for (int i = 1; i < size; i++) {
        // Update min_val if the current element is smaller
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    
    return min_val; // Return the minimum value
}

int main(void) {
    // Test cases
    int x[] = {9, 5, 6, 10, 2, -3, 4};
    assert(min(x, 7) == -3); // Assertion to check if min function returns the correct minimum value
    
    int y[] = {5};
    assert(min(y, 1) == 5); // Assertion to check if min function returns the correct minimum value for a single-element array
    
    printf("Min: passed\n"); // Print confirmation message if all assertions pass
}
