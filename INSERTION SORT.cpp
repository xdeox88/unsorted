#include <iostream>

using namespace std;

void selection_sort(int arr[], int arrsize)
{
    for (int position = 0; position < arrsize - 1; position++)
        for (int k = position + 1; k < arrsize; k++)
    {
        if (arr[k] < arr[position])
            {
                int tmp = arr[k];
                arr[k] = arr[position];
                arr[position] = tmp;
            }
    }
}

void display_array(int arr[], int arrsize)
{
    for (int j = 0; j < arrsize; j++)
        cout << arr[j] << " ";
}

const int arraysize = 5;

int main()
{
    int intarray[arraysize] = {5, 1, 3, 8, 2};
    display_array(intarray, arraysize);

    cout << endl;
    selection_sort(intarray, arraysize);
    display_array(intarray, arraysize);

    return 0;
}





