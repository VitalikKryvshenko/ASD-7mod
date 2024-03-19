#include <iostream>
#include <algorithm>
#include <windows.h>

using namespace std;


void heapify(int arr[], int n, int i) {
    int largest = i;    
    int left = 2 * i + 1;    
    int right = 2 * i + 2;    

    if (left < n && arr[left] > arr[largest])
        largest = left;

  
    if (right < n && arr[right] > arr[largest])
        largest = right;

   
    if (largest != i) {
        swap(arr[i], arr[largest]);

        
        heapify(arr, n, largest);
    }
}


void heapSort(int arr[], int n) {
   
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

   
    for (int i = n - 1; i > 0; i--) {
        
        swap(arr[0], arr[i]);

       
        heapify(arr, i, 0);
    }
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int matrix[5][5];

   
    cout << "¬вед≥ть елементи матриц≥ 5x5:" << endl;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> matrix[i][j];
        }
    }

    
    for (int i = 0; i < 5; ++i) {
        heapSort(matrix[i], 5);
    }

    
    cout << "¬≥дсортована матриц€:" << endl;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
