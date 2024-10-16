#include <bits/stdc++.h>
using namespace std;
int v[100001], n;
ifstream f("date.in");
ofstream g("date.out");
int p,nf,x,c,ct,ind,maxx,nrp,t=1,nrc,crt,i;
int main()
{
    f>>n>>x;
    while(v[ind]<n)
    {
        v[ind++]=v[ind-1]+(ind+1)(ind+2)/2;
        if(x<=v[ind]&&x>v[ind-1])
            p=ind;
        if(v[ind]>n)
            ind-=1;
        if(p>ind)
            p=0;
        nf=n-v[ind];
        g<<" "<<ind<<" "<<nf<<" ";
    }
    f>>c;
    f>>crt;
    while(v[t]<crt)
        t++;
    for(i=2;i<=c;i++)
    {
        if(crt==v[t])
            nrc=1;
        else
        {
            if(crt<v[t])
                nrc=1;
            else
            {
                t++;
                nrc=0;
            }
        }
        if(nrc>maxx)
        {
            maxx=nrc;
            nrp=t;
        }
        f>>crt;
    }
    g<<nrp;
    return 0;
}
