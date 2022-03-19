/*         ====Bismillahir Rahmanir Rahim=====

                    ===ImRan Hossen===

    ==Bangladesh University Of Business And Technology==

*/

#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <iterator>
#include <utility>
#include <ctime>
using namespace std;


template< class T > T _abs(T n) { return (n < 0 ? -n : n); }
template< class T > T _max(T a, T b) { return (!(a < b) ? a : b); }
template< class T > T _min(T a, T b) { return (a < b ? a : b); }
template< class T > T sq(T x) { return x * x; }
template <typename T> T Pow(T B,T P){ if(P==0) return 1; if(P&1) return B*Pow(B,P-1);  else return sq(Pow(B,P/2));}
template <typename T> T Gcd(T a,T b){if(a<0)return Gcd(-a,b);if(b<0)return Gcd(a,-b);return (b==0)?a:Gcd(b,a%b);}
template <typename T> T Lcm(T a,T b) {if(a<0)return Lcm(-a,b);if(b<0)return Lcm(a,-b);return a*(b/Gcd(a,b));}
template <typename T> T Exgcd(T a,T b,T &x,T &y) {if(a<0){T d=Exgcd(-a,b,x,y);x=-x;return d;}   if(b<0){T d=Exgcd(a,-b,x,y);y=-y;return d;}   if(b==0){x=1;y=0;return a;}else{T d=Exgcd(b,a%b,x,y);T t=x;x=y;y=t-(a/b)*y;return d;}}
template <typename T> T BigMod (T b,T p,T m){if (p == 0) return 1;if (p%2 == 0){T s = BigMod(b,p/2,m);return ((s%m)*(s%m))%m;}return ((b%m)*(BigMod(b,p-1,m)%m))%m;}
template <typename T> T ModInvPrime (T b,T m){return BigMod(b,m-2,m);}
template <typename T> T ModInvNotPrime(T a , T m) {T x , y ;Exgcd(a , m , x , y) ;x %= m ;if(x < 0) x += m ;return x ;}
template <typename T> typename std::vector<T>::iterator Insert_sorted (std :: vector<T> & vec, T const& item) {return vec.insert (std::upper_bound( vec.begin(), vec.end(), item ), item);}


#define pocount     __builtin_popcountll
#define pf          printf
#define PB          push_back
#define MP          make_pair
#define fi          first
#define se          second
#define MOD         1000000007
#define si(a)       scanf("%d",&a)
#define sii(a,b)    scanf(" %d %d",&a,&b)
#define siii(a,b,c) scanf(" %d %d %d", &a, &b, &c)
#define sl(a)       scanf(" %lld",&a)
#define sll(a,b)    scanf("%lld %lld", &a,&b)
#define slll(a,b,c) scanf(" %lld %lld %lld", &a, &b, &c)
#define ss(s)        scanf("%s",s)
#define RESET(a, b) memset(a, b, sizeof(a))

#define all(v)      v.begin(),v.end()
#define rall(v)     v.rbegin(),v.rend()
#define SORT(v)     sort(all(v))
#define REVERSE(v)  reverse(all(v))
#define PERMUTE     next_permutation
#define TC(t)       while (t--)

#define FOR(a, b, c)    for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c)   for (int(a) = (b); (a) <= (c); ++(a))
#define REP(i, n)       FOR(i, 0, n)
#define REPN(i, n)      FORN(i, 1, n)
#define SET(p)          memset(p, -1, sizeof(p))
#define CLR(p)          memset(p, 0, sizeof(p))
#define MEM(p, v)       memset(p, v, sizeof(p))
#define SZ(c)           (int)c.size()

#ifdef TESTING
#define DEBUG fprintf(stderr, "====TESTING====\n")
#define VALUE(x) cerr << "The value of " << #x << " is " << x << endl
#define debug(...) fprintf(stderr, __VA_ARGS__)
#else
#define DEBUG
#define VALUE(x)
#define debug(...)
#endif


#define FasterIO    ios_base::sync_with_stdio(false); cin.tie(NULL);

const double pi = acos(-1.0);

typedef long long int ll;
typedef unsigned long long int ull;
typedef unsigned int ui;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;

double EPS = 1e-9;
int INF = 1000000005;
long long INFF = 1000000000000000005LL;

int dirx[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };
int diry[8] = { 0, 1, -1, 0, -1, 1, -1, 1 };

class TimeTracker {
    clock_t start, end;
public:
    TimeTracker() {
        start = clock();
    }
    ~TimeTracker() {
        end = clock();
        fprintf(stderr, "%.3lf s\n", (double)(end - start) / CLOCKS_PER_SEC);
    }
};



int main()
{
    //FasterIO

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ///TimeTracker a;






    return 0;
}










//Don't Get panic
//Take it easy
//what about n=1 or n=2 and corner case and also critical case
//If failed in system test read the problem again
//Bug is part of code

