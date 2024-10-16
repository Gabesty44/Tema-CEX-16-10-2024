#include <bits/stdc++.h>
using namespace std;
ifstream f("tripar.in");
ofstream g("tripar.out");
int p,n,m,i;
long long v[15],x;
int main()
{
    fin>>p>>n>>m;
    v[0]=1;
    for(i=1;i<=n;i++)
        v[i]=v[i-1]2;
    if(p==1)
    {
        for(i=1;i<=N;i++)
        {
            fin>>x;
            x=v[M];
            g<<(xx)<<" ";
        }
    }
    else{
        for(i=1;i<=N;i++)
        {
            fin>>x;
            x=v[M];
            g<<(3((x-1)*x)/2)<<" ";
        }
    }
    return 0;
}
