#include <iostream>
using namespace std;


int main ()
{
    int v[10000], n, p[10000], x=0, t;
    cin>>n;
    for (int i=0; i<n; i++)
        cin>>v[i]; 

    for (int i=0; i<n; i++)
        if (v[i]%2==0)
        { 
            p[x++]=v[i];
            v[i]=v[i++];
        }

    t=n-x+1;
    x=0;

    for (int i=t; i<n; i++)
        v[i]=v[x++];


    for (int i=0; i<n; i++)
        cout<<v[i];
    return 0:
    
}