#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<math.h>
#include<list>
//#include<utility.h>
#define ull unsigned long long
#define pb push_back
#define ul unsigned long
#define show(x) ;//cout<<#x<<':'<<x<<endl;

using namespace std;
//taken from gfg
void printNcR(int n, int r) 
{ 

    long long p = 1, k = 1; 

    if (n - r < r) 
        r = n - r; 
  
    if (r != 0) { 
        while (r) { 
            p *= n; 
            k *= r; 

            long long m = __gcd(p, k); 

            p /= m; 
            k /= m; 
  
            n--; 
            r--; 
        } 

    } 
  
    else
        p = 1; 
  
    cout << p << endl; 
} 

int main(int argc, const char** argv) {
    //cin.tie(0);
    //cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int temp;cin>>temp;v.push_back(temp);
        }
        std::sort(v.begin(),v.end());
        int d=v[k];
        show(d)
        int beg=0;
        for(;beg<n && v[beg]!=d;beg++);
        // //int beg=find(v.begin,v.end,d)-v.begin();
        int end=beg;
        for(;v[end]==d && end<n;end++);
        show(beg);
        show(end);
        show(k);
        printNcR(end-beg,k-beg);
    }
}
