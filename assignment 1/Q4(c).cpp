#include <iostream>
using namespace std;

int main() {
    int r, c;
    int A[10][10], T[10][10];

    cout << "Enter number of rows and columns: ";
    cin >> r >> c;
     cout << "Enter elements of matrix:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> A[i][j];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            T[j][i] = A[i][j];

    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            cout << T[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}