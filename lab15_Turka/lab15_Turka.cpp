#include <iostream>

using namespace std;

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

    for (int i = 0; i < b_size - 1; ++i) {

        for (int j = 0; j < b_size - i - 1; ++j) {

            if (b[j] > b[j + 1]) {

                int temp = b[j];

                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }

    cout << "Вiдсортований масив b: ";
    for (int i = 0; i < b_size; ++i) {

        cout << b[i] << " ";
    }

    cout << '\n';

    return 0;
}

