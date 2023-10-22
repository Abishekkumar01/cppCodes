#include <iostream>

void altSwap(int arr[], int size) {
    for(int i = 0; i < size; i+=2) {
        if (i + 1 < size) {
            int temp = 0;
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}

void printArr(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    int size = 10; 
    int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    altSwap(arr, size);
    printArr(arr, size);
    return 0;
}