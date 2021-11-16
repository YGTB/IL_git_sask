#include <iostream>

using namespace std;

int sask(int x, int y);

int main()
{
    int a, b;
    cout<<"ievadi 2 skaitlus"<<endl;
    cin>>a;
    cin>>b;
    cout<< "skaitlu summa ir "<<sask(a, b);
}

int sask(int d, int e) {
    int f;

    f = d + e;
    return f;
}
