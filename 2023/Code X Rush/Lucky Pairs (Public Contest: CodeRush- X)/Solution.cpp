#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int a,b,c;
    cin>>a>>b>>c;

    if( ( (a+b)>0 && (a+b)%2==0 ) || ( (a+c)>0 && (a+c)%2==0 ) || ( (b+c)>0 && (b+c)%2==0 ) ){
        cout<<"Yes";
    }
    else
    cout << "No";

    return 0;
}
