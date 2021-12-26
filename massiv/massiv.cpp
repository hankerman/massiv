#include <iostream>
using namespace std;

int main()
{
    const int size = 10;
    int arr[size], arr1[size / 2] = { 1,3,5,7,9 }, arr2[size / 2] = {2,4,6,8,10};
    for (int i = 0; i < size; i += 2) {
        arr[i] = arr1[i / 2];
        arr[i + 1] = arr2[i / 2];
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
