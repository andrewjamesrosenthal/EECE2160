#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


using namespace std;
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void random_array(int arr[], int size){
    srand(time(0));
    for (int i = 0; i<size; i++){
        arr[i] = rand() % 100;
    }
}

void Sort_array(int arr[], int size){
    for(int i = 0; i<size-1; i++){
        for(int j = 0; j<size-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int size;
    size = 10;
    int arr[size];
    random_array(arr, size);
    print_array(arr, size);
    Sort_array(arr, size);
    print_array(arr, size);
    return 0;
}
