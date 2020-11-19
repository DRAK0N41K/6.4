#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;


void arrRERERE(int n, int counter = 0, int index = 0, int summ = 0) {
    srand((unsigned)time(NULL));
    int* a = new int[n];
    cout << endl;
    for (int j = 0;j < n;j++)
    {


        a[j] = rand();

    }
    for (int i = 0;i < n;++i) {
        cout << " " << a[i];
    }
    cout << endl;
    for (int j = 0;j < n;j++)
    {
        if (a[j] == 0)
        {
            counter++;
        }
    }

    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (min > a[i])
        {
            min = a[i]; // запам'ятати min
            index = i; // запам'ятати позицію min елементу
        }
    }
    for (int j = index;j < n;j++)
    {

        summ += a[j];

    }
    int temp;
    for (int i = 1;i < n;++i)
    {
        for (int j = 0;j < (n - i);++j)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    }
    for (int i = 0;i < n;++i) {
        cout << " " << a[i];
    }
    cout << endl;
    cout << "min " << min;
    cout << endl;
    cout << "summ " << summ;
    cout << endl;
    cout << "kilkist nuliv " << counter;
}
int main() {
    arrRERERE(8);
}