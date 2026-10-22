#include<iostream>
#include <string>
using namespace std;

int findIndex(string name[], int n, string part, int i)
{
    if (i == n)
    {
        return -1;
    }

    if (name[i] == part)
    {
        return i;
    }

    return findIndex(name, n, part, i + 1);
}

int main()
{
    int n;

    cout << "Enter the size: ";
    cin >> n;

    string name[n];

    cout << "Enter the plate numbers:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> name[i];
    }

    string part;

    cout << "Enter the target plate number: ";
    cin >> part;

    int result = findIndex(name, n, part, 0);

    cout << "Found at index: " << result << endl;

    return 0;
}
