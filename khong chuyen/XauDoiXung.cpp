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
//sd manacher
//tim xau doi xung dai nhat (do dai le, chan)

int _manacher(const string &s)
{
	string a;
	for(int i=0;i<s.length();i++)
		a+='.',a+=s[i];
	a+='.';
	int n=a.size();
	vector<int>f(n);
	int r=0,c=0;//ban kinh, tam
	for(int i=0;i<n;i++)
	{
		f[i]=(i<r?min(r-i,f[c-(i-c)]):0);
		while(a[i-f[i]-1]==a[i+f[i]+1])
			f[i]++;
		if(i+f[i]>r)
		{
			r=i+f[i];
			c=i;
		}
	}
	return *max_element(ALL(f));
}

void solve(){
	string s;
	cin>>s;
	int len=_manacher(s);
//	cout<<"len="<<len<<endl;
	int q;
	cin>>q;
	while(q--)
	{
		int l;
		cin>>l;
		if(l<=len && (len-l)%2==0)
			cout<<1;
		else cout<<0;
		cout<<endl;
	}
}

int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}



