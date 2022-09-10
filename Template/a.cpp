/**
 * @author Sagor
 */

#define SAGOR

#include <map>
#include <set>
#include <cmath>
#include <queue>
#include <stack>
#include <vector>
#include <iomanip>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
#define gap                        ' '
#define EPS                        1e-9
#define P_INF                      1e9+17
#define N_INF                     -1e9-17
#define MOD                        1000000007
#define PI                         2*acos(0.0)
#define All(x)                     x.begin(),x.end()
#define Mem(Name, type)            memset(Name, type, sizeof(Name))
#define TIMESTAMP(msg)             cout << "[" msg "] Time = " << clock() * 1.0 / CLOCKS_PER_SEC << endl


template<typename T>
T GCD(T a, T b) { return a ? GCD(b % a, a) : b; }

template<typename T>
T LCM(T a, T b) { return (a * b) / GCD(a, b); }

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    for (auto ob : v) os << ob << " ";
    return os;
}

template <typename T, typename S>
ostream& operator<<(ostream& os, const map<T, S>& v) {
    for (auto ob : v) os << ob.first << " : " << ob.second << endl;
    return os;
}

/*-----------------------------------------------------^-----------------------------------------------------*/

void Problem() {
    // Your code goes here !!
    string s;
    cin >> s;
    cout << s << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifdef SAGOR 
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif

    int n = 1;
    //    cin >> n;            // For Multiple testcases...
    for (int i = 0; i < n; ++i) {
        Problem();
    }

#ifdef SAGOR
    TIMESTAMP("End:");
#endif
    return 0;
}
