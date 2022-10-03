#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define vi vector<int>
#define ANS(ans) cout << (ans? "YES":"NO")
#define all(x) (x).begin(),(x).end()
#define allr(x) (x).rbegin(),(x).rend()
#define fill(vec,n) for(int i=0;i<n;i++) cin>>vec[i]
#define fill_ll(vec,n) for(long long i=0;i<n;i++) cin>>vec[i]
#define f(i,a,b) for(int i=a;i<b;i++)
#define lp(i,b) f(i,0,b)
#define rf(i,b,a) for(int i=b;i>=a;i--)
#define rlp(i,b) rf(i,b,0)
#define fll(i,a,b) for(long long i=a;i<b;i++)
#define pr(i,j) cout<<i<<" "<<j
#define pr3(i,j,k) pr(i,j)<<" "<<k
#define vasort(v) sort(all(v))
#define vdsort(v) sort(allr(v))
#define sz(v) ((int)((v).size()))
#define clr(v,d) memset(v,d,sizeof(v))
#define fastread() std::ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL)
#pragma warning(disable:4996)
typedef long long ll;
const double PI = acos(-1.0);
int dx[8] = { 1,0,-1,0,-1,1,-1,1 };
int dy[8] = { 0,1,0,-1,-1,1,1,-1 };
template<typename T>T gcd(T x, T y) { if (y == 0)return x; else return gcd(y, x % y); }



int main()
{
	fastread();
    int i, j, k;
    int n, m, q;
    int x, y;

    map<int, ll> X, Y;
    map<pair<int,int>, ll> mp;

    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> x >> y;

        X[x]++;
        Y[y]++;

        mp[{x, y}]++;
    }

    ll ans = 0;

    auto itr = X.begin();
    while (itr != X.end())
    {
        ans += (itr->second * (itr->second - 1)) / 2;
        itr++;
    }

    itr = Y.begin();
    while (itr != Y.end())
    {
        ans += (itr->second * (itr->second - 1)) / 2;
        itr++;
    }

    auto itr2 = mp.begin();
    while (itr2 != mp.end())
    {
        ans -= (itr2->second * (itr2->second - 1)) / 2;
        itr2++;
    }
    cout << ans;
}
