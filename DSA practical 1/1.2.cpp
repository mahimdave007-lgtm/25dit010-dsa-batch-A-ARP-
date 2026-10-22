#include <iostream>
using namespace std;

int main() {
    int n, i, j, count;

    cout << "Enter number of borrow records: ";
    cin >> n;

    int books[n];

    cout << "Enter book IDs:\n";
    for (i = 0; i < n; i++) {
        cin >> books[i];
    }

    cout << "Books borrowed more than once are:\n";

    for (i = 0; i < n; i++) {
        count = 1;

        for (j = 0; j < i; j++) {
            if (books[i] == books[j]) {
                break;
            }
        }

        if (j != i)
            continue;

        for (j = i + 1; j < n; j++) {
            if (books[i] == books[j]) {
                count++;
            }
        }


        if (count > 1) {
            cout << books[i] << " ";
        }
    }

    return 0;
}
