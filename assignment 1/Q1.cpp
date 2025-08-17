#include <iostream>
using namespace std;

int arr[100];
int n;
 void create(){
 cout << "How many elements you want to enter? ";
    cin >> n;
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}
void display() {
    if (n == 0) {
        cout << "Array is empty.\n";
        return;
    }
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
void insert() {
    if (n == 100) {
        cout << "Array is full";
        return;
    }
    int pos, val;
    cout << "Enter position to insert (1 to " << n + 1 << "): ";
    cin >> pos;
    if (pos < 1 || pos > n + 1) {
        cout << "Invalid position";
        return;
    }
    cout << "Enter value to insert: ";
    cin >> val;

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = val;
    n++;
    cout << "Element inserted";
}
void deleteElement() {
    if (n == 0) {
        cout << "Array is empty. Nothing to delete.";
        return;
    }
    int pos;
    cout << "Enter position to delete (1 to " << n << "): ";
    cin >> pos;
    if (pos < 1 || pos > n) {
        cout << "Invalid position!\n";
        return;
    }
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    cout << "Element deleted";
}
void linearSearch() {
    if (n == 0) {
        cout << "Array is empty.\n";
        return;
    }
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at position " << i + 1 << ".\n";
            return;
        }
    }
}
int main() {
    int choice;
    do {
        cout << "MENU\n";
        cout << "1. Create\n2. Display\n3. Insert\n4. Delete\n5. Linear Search\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: create(); break;
            case 2: display(); break;
            case 3: insert(); break;
            case 4: deleteElement(); break;
            case 5: linearSearch(); break;
            case 6: cout << "Exiting\n"; break;
            default: cout << "Invalid choice\n";
        }
    }
     while (choice != 6);

    return 0;
}