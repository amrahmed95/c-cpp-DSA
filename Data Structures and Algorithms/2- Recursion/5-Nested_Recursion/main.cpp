#include <iostream>
#include <stdio.h>

using namespace std;

int fun(int n)
{
    if (n > 100)
        return n - 10;
    return fun(fun(n+11));
}


int main()
{
    int r;
    r = fun(95);

    printf("r = %d",r); // 91

    return 0;
}
