
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
 
 
int num[10];
 
int main()
{
	fastread();
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < n; i++) {
		if (s[i] == '0' || s[i] == '1')continue;
		else if (s[i] == '2')num[2]++;
		else if (s[i] == '3')num[3]++;
		else if (s[i] == '4')num[3]++, num[2] += 2;
		else if (s[i] == '5')num[5]++;
		else if (s[i] == '6')num[5]++, num[3]++;
		else if (s[i] == '7')num[7]++;
		else if (s[i] == '8')num[7]++, num[2] += 3;
		else if (s[i] == '9')num[7]++, num[2]++, num[3] += 2;
	}
	for (int i = 9; i >= 0; i--) {
		for (int j = 0; j < num[i]; j++) {
			cout << i;
		}
	}
	
}