#include <iostream>

#define N 10

using namespace std;

int sequentialSearch(int a[], int n, int target)
{
    for(int i = 0; i < n; ++ i)
    {
        if(a[i] == target)
            return i;
    }

    return n;
}

int main()
{
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int pos = sequentialSearch(a, N, 11);
    std::cout<<pos<<std::endl;

    return 0;
}

