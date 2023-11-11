#include <iostream>
#include "../../../utils/generateHeader.h"
#include "../../../utils/name.h"

using namespace std;

void selectionSort(int[], int);

int main()
{
    generateHeader("Selection Sort Program");

    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    generateName("2(b)");
    return 0;
}

void selectionSort(int arr[], int size)
{
    int minIndex, temp;
    for (int i = 0; i < size - 1; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}