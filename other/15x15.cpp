#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
#define repn(i, n) for (int i = 1; i <= n; ++i)
#define repr(e, x) for (auto& e : x)
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pa;
typedef tuple<int, int, int> tr;
typedef tuple<int, int, int, int> t4;
double const PI = 3.141592653589793;
int const INF = 1001001001;
ll const LINF = 1001001001001001001;
// ll const MOD = 998244353;
// ll const MOD = 1000000007;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    int N=16;

    cout<<endl<<endl<<endl;

    cout<<" ";
    repn(i,N-1){
        printf("  %X", i);
    }
    cout<<endl;
    repn(i,N-1){
        printf("%X", i);
        repn(j,N-1){
            int ret = i + j;
            if(ret < 0X10) printf("  %X", ret);
            else printf(" %02X", ret);
        }
        cout<<endl;
    }

    cout<<endl<<endl<<endl;

    cout<<" ";
    repn(i,N-1){
        printf("  %X", i);
    }
    cout<<endl;
    repn(i,N-1){
        printf("%X", i);
        repn(j,N-1){
            int ret = i * j;
            if(ret < 0X10) printf("  %X", ret);
            else printf(" %02X", ret);
        }
        cout<<endl;
    }
    
    return 0;
}