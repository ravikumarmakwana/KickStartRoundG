#include<iostream>
using namespace std;
main()
{
    int T;
    cin>>T;
    int n=1;
    while(T>0)
    {
        int N,M,Q,c=0,p;
        cin>>N>>M>>Q;
        int Mpage[M];
        for(int i=0;i<M;i++)
            cin>>Mpage[i];
        int noOfReader[Q];
        for(int i=0;i<Q;i++)
            cin>>noOfReader[i];
        for(int i=0;i<Q;i++)
        {
            p=noOfReader[i];
            while(p<=N)
            {
                int m=0;
                for(int j=0;j<M;j++)
                {
                    if(p==Mpage[j])
                    {
                        m=0;
                        break;
                    }
                    else
                        m=1;
                }
                if(m==1)
                {
                    c++;
                }
                p=p+noOfReader[i];
            }
        }
        cout<<"Case #"<<n<<": "<<c<<endl;
        n++;
        T--;
    }
    return 0;
}
