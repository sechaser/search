#include <iostream>

#define N 11

using namespace std;

int binarySearch(int a[], int n, int key)
{
    int low = 0, high = (n-1);
    int mid = (high - low + 1)/2;

    while((mid >= 0 ) && (mid < n))
    {
        std::cout<<"mid = "<<mid<<", a[mid] = "<<a[mid]<<std::endl;

        if(a[mid] < key)
        {
            low = mid + 1;
            mid =  low + (high - low + 1)/2;
        }
        else if(a[mid] > key)
        {
            high = mid - 1;
            mid  = low + (high - low + 1)/2;
        }
        else
            return mid;
    }

    return n;
}

int main()
{
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int pos = binarySearch(a, N, 10);

    std::cout<<pos<<std::endl;

    return 0;
}

