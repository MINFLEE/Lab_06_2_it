// Lab_06_2_it

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void CreateArrayWithRandomElements(int* a, int numberOfElements, int Low, int High);
void PrintArray(int* a, const int numberOfElements);
double CalculateAverageOfEvenIndices(int* a, int numberOfElements);

int main()
{
    srand((unsigned)time(NULL));

    const int n = 24;
    int a[n];

    int Low = -17;
    int High = 53;
    CreateArrayWithRandomElements(a, n, Low, High);
    cout << "Array with Random elements:" << endl;
    PrintArray(a, n);
    cout << endl;

    double average = CalculateAverageOfEvenIndices(a, n);
    if (average != -1)
        cout << "Average: " << average << endl;
    else
        cout << "No even elements found in the array." << endl;

    return 0;
}

void CreateArrayWithRandomElements(int* a, int numberOfElements, int Low, int High) 
{
    for (int i = 0; i < numberOfElements; i++) 
    {
        a[i] = Low + rand() % (High - Low + 1);
    }
}

void PrintArray(int* a, const int numberOfElements) 
{
    for (int i = 0; i < numberOfElements; i++) 
    {
        cout << "a[" << setw(1) << i << "] = " << setw(1) << a[i] << "; ";
        if ((i + 1) % 9 == 0) 
        {
            cout << endl;
        }
    }
    cout << endl;
}

double CalculateAverageOfEvenIndices(int* a, int numberOfElements) 
{
    int sum = 0;
    int count = 0;

    for (int i = 0; i < numberOfElements; i++) 
    {
        if (a[i] % 2 == 0) 
        {
            sum += i;
            count++;
        }
    }

    if (count > 0)
        return static_cast<double>(sum) / count;
    else
        return -1;
}