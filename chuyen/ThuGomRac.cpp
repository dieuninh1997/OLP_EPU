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

void solve(){
	int n;
	LL t;
	cin>>n>>t;
	vector<int> v;
	FOR(i,0,n)
		cin>>v[i];
	int dem=0;
	FOR(i,0,n)
	{
		int s=0;
		FOR(j,i,n)
		{
			s+=v[j];
			if(s<=t)
				dem++;	
		}
	}
	cout<<dem<<endl;
}

int main(){
	#ifdef NINH
	//	freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}



