#include <iostream>

using namespace std;

const int N = 10;

void order(int* num1, int* num2)
{
    if (*num1 > *num2)
    {
        int tmp = *num1;
        *num1 = *num2;
        *num2 = tmp;
    }
}

void bubblesort(int* pointertoarray, int arraysize)
{
    for (int j = 0; j < arraysize - 1; j++)
        for (int k = j + 1; k < arraysize; k++)
        order(pointertoarray + j, pointertoarray + k);
}

void display_array(int* pointertoarray)
{
    for (int j = 0; j < N; j++)
        cout << *(pointertoarray + j) << " ";
}

int main()
{

    int unsorted_array[N] = {4, 35, 55, 123, 15, 16, 6, 14, 7, 1};

    display_array(unsorted_array);

    bubblesort(unsorted_array, N);
    cout << endl;
    display_array(unsorted_array);

    return 0;
}





