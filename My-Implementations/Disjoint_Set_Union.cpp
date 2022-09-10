#include<vector>
#include<iostream>
#include <algorithm>
using namespace std;

/*-----------------------------------------------------^-----------------------------------------------------*/

struct Disjoint_Set_Union {
    vector<int> parent, child;
    void init(int n) {
        parent.resize(n + 1);
        child.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            child[i] = 1;
        }
    }
    void make_root(int x) {
        parent[x] = x;
    }
    int find_root(int x) {
        return parent[x] == x ? x : parent[x] = find_root(parent[x]);
    }
    void unite(int u, int v) {
        int root_u = find_root(u);
        int root_v = find_root(v);
        if (root_u != root_v) {
            if (child[root_u] < child[root_v]) {
                swap(root_u, root_v);
            }
            parent[root_v] = parent[root_u];
            child[root_u] += child[root_v];
        }
    }
}DSU[2];

/*-----------------------------------------------------^-----------------------------------------------------*/


int main() {
    int n = 10;
    DSU[0].init(n);

    int m = 20;
    DSU[1].init(m);
}