#include <iostream>
#include<math.h>
#define val 45010
typedef long long int ll;
using namespace std;

int main()
{
    int t;
    cin>>t;
    bool prime[val];
    long int i, j=0;
    ll ans=1;
    
    for(i=0; i<val; i++)    
        prime[i] = true;

    for(i=2; i<sqrt(val); i++)    
        {
        if(prime[i])
            {
            for(j=i*i; j<val; j+=i)
                prime[j] = false;
            }
        }
    while(t--)
        {
        int count[val]={0}, k;
        ll n;
        j=0;
        ans=1;
        cin>>n;
        for(i=2; i<=n; i++)
            {
            if(prime[i] == true)
                {
                k=1;
                while(n/(pow(i, k)) > 0)
                    {
                    count[j] += n/(pow(i, k));
                    ++k;
                    }
                // cout<<i<<" ";
                ++j;
                }
            }
        // cout<<"\n";
        for(i=0; i<j; i++)
            {
            ans = (ans * (count[i] + 1)) % 1000000007;
            }
        cout<<ans%1000000007<<endl;
        }
    return 0;
}

