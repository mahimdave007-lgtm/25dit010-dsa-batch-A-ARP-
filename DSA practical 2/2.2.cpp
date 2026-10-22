#include<iostream>
using namespace std;

int findbook(int arr[], int low, int high, int target)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int n;

    cout << "Enter the no. of Elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;

    cout << "Enter the target: ";
    cin >> target;

    cout << "Your target is at index: "
         << findbook(arr, 0, n - 1, target);

    return 0;
}
