#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,w=0;
    cin>>n;
    int a[n];
    int one[n],two[n],three[n];
    int one_index[n], two_index[n], three_index[n];
    int sum1,sum2,sum3;
    int i,t;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ///check 1
    t=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            one[t]=a[i];
            one_index[t]=i;
            t++;
        }
    }
    sum1=t;

    ///check 2
    t=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==2)
        {
            two[t]=a[i];
            two_index[t]=i;
            t++;
        }
    }
    sum2=t;

    ///check 3
    t=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==3)
        {
            three[t]=a[i];
            three_index[t]=i;
            t++;
        }
    }
    sum3=t;

    for(i=1;;i++)
    {
        if(i<=sum1 && i<=sum2 &&i<=sum3)
        {
            w=i;
        }
        else{break;}
    }
    cout<<w<<"\n";
    if(w>0){
    /// PRINT
    for(i=0;i<w;i++)
    {
        cout<<one_index[i]+1<<" "<<two_index[i]+1<<" "<<three_index[i]+1<<"\n";
    }
    }


    return 0;
}
