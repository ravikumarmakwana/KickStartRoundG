#include<iostream>
using namespace std;
main()
{
    int T,q=1;
    cin>>T;
    while(T>0)
    {
        int N,M,p=0;
        cin>>N>>M;
        int no[N];
        for(int i=0;i<N;i++)
            cin>>no[i];
        int C=100,sum,ans=-1,a;
        while(C>0)
        {
            sum=0;
            for(int i=0;i<N;i++)
            {
                a=no[i]^C;
                sum=sum+a;

            }
            if(sum<=M)
            {
                if(p==0)
                {
                    p=sum;
                    ans=C;
                }
                if(p<sum && ans<C)
                {
                    p=sum;
                    ans=C;
                }
            }
            C--;
        }
        cout<<"\nCase #"<<q<<": "<<ans<<endl;
        q++;
        T--;
    }
    return 0;
}
