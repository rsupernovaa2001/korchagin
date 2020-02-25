#include <iostream>
using namespace std;
int N=100;
int LinearSearch(int value, int mas[100])
{
    int i;
    for (i=0;i<=N-1;i++)
        if (mas[i]==value)
            return i;
    return -1;
}
int main(void) {
    int a[N];
    int i,x,I;
    srand(100);
    for (i = 0; i <= N - 1; i++)
        a[i] = rand() % 501;
    cout << "Vvedite chislo" << endl;
    cin >> x;
    cout << "Ves' massiv :" << endl;
    for (i = 0; i <= N - 1; i++)
        cout << a[i] << " ";
    cout << endl;
    I = LinearSearch(x, a);
    cout << "LinearSearch = " << I << endl;
    return 0;
}
