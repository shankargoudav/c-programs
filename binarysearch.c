#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;

        // Check if key is present at mid
        if (arr[mid] == key)
            return mid;

        // If key is greater, ignore left half
        if (arr[mid] < key)
            low = mid + 1;

        // If key is smaller, ignore right half
        else
            high = mid - 1;
    }

    // Key not found
    return -1;
}

void main() {
    // Example sorted array
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Key element to search
    int key ;
    printf("enter key element to be searched:");
    scanf("%d",&key);

    // Perform binary search
    int result = binarySearch(arr, size, key);

    if (result != -1)
        printf("Element %d found at index %d\n", key, result);
    else
        printf("Element %d not found\n", key);

    
}
