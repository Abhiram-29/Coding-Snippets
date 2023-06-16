#include<bits/stdc++.h>
using namespace std;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define dbg(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define dbg(x...)
#endif

#define ll long long
#define ull unsigned long long
#define lld long double
#define f(n) for(long long i = 0;i < n ; i++)
#define a(n) for(auto i : n)
#define rep(s,e,inc) for(ll i = s; i < e; i+= inc)
#define mod 1000000007
#define yes cout<<"YES\n"
#define no cout <<"NO\n"
#define ln '\n'
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair

ll expo(ll a, ll b){
    ll res = 1;
    while(b >0){
        if(b&1) res = (res*a)%mod;
        a = (a*a)%mod;
        b = b >>1;
    }
    return res;
}

void solve(){
    
}

int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
