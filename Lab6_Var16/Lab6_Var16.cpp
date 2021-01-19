#include <iostream>
using namespace std;

bool isPrime(int);

int main()
{
    int n;
    cin >> n;
    for (int i = n; i <= 2*n - 2; i++)
    {
        if (isPrime(i) && isPrime(i + 2)) cout << i << " " << i + 2 << endl;
    }
    return 0;
}

bool isPrime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}
