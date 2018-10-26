#include <iostream>
#include <cstdio>

using namespace std;

int par[100000];

int root(int v){
    return par[v] == v ? v : par[v] = root(par[v]);
}

bool hop(int u, int v){
    if ((u = root(u)) == (v = root(v))) return false;
    par[v] = u;
    return true;
}

int main(){
    freopen("work.inp", "r", stdin);
    int n, m;
    bool kt = true;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i)
        par[i] = i;
    for (int i = 0; i < m; ++i){
        int u, v;
        scanf("%d%d", &u, &v);
        if (!hop(u, v)) {
            kt = false;
            break;
        }
    }
    if (kt) printf("YES");
    else printf("NO");
    return 0;
}
