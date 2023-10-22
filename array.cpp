#include<iostream>


void printArr(int arr[], int size){
    for(int i = 0; i <= size; i++){
        std::cout << arr[i];
    }

}

int main() {
    int size = 0; 
    std::cout << "Enter the Size: ";
    std::cin >> size;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    printArr(arr, 10);

    
    


}