#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a),_b_=(b); i<_b_;i++)
#define REF(i,a,b) for(int i=(a),_b_=(b); i>_b_;i--)
#define IT(i,v) for(typeof((v).begin()) i=(v).begin(); i!=(v).end();++i)
#define ALL(v) v.begin(), v.end()
#define MS(v) memset(v,0,sizeof(v))
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator +=(vector<T>&v, T x){v.push_back(x);return x;}

int countSubArray(vector<int>a, int n, int k)
{
	int i,j=0;
	vector<LL> psum(n,0);
	for(int i=0;i<n;i++)
	{
		psum[i]=((i==0)?0:psum[i-1]+a[i]);
	}
	for(int i=0;i<n;i++)
	{
		int l=lower_bound(psum.begin())
	}
}

void solve(){
	int n,t;
	cin>>n>>t;
	int v[n];
	for(int i=0;i<n;i++)
		cin>>v[i];
	cout<<countSubArray(v,n,t);
	
}

int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}



