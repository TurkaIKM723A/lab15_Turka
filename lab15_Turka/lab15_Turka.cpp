#include <iostream>

using namespace std;

void selectionSort(int arr[], int n) {

    for (int i = 0; i < n - 1; ++i) {

        int min_index = i;

        for (int j = i + 1; j < n; ++j) {

            if (arr[j] < arr[min_index]) {

                min_index = j;
            }
        }

        int temp = arr[i];

        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main() {
 
    setlocale(LC_CTYPE, "ukr");

    int a[20] = { 4, 10, 2, 17, 8, 6, 11, 3, 14, 19, 12, 7, 9, 5, 1, 20, 13, 16, 18, 15 };

    int n = sizeof(a) / sizeof(a[0]);

    int b[20]; 
    int b_size = 0; 

    for (int i = 0; i < n; ++i) {

        if (a[i] % 2 == 0) {

            b[b_size++] = a[i];
        }
    }

    selectionSort(b, b_size);

    cout << "Вiдсортований масив b: ";

    for (int i = 0; i < b_size; ++i) {

        cout << b[i] << " ";

    }
    cout << '\n';

    return 0;
}


