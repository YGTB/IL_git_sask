#include <iostream>

using namespace std;

int sask(int x, int y, int z);

int main()
{
    int a, b, c;
    cout<<"ievadi 3 skaitlus"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<< "skaitlu summa ir "<<sask(a, b, c);
}

int sask(int d, int e, int g) {
    int f;

    f = d + e + g;
    return f;
}
