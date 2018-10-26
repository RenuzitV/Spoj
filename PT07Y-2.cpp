#include <iostream>
#include <cstdio>

using namespace std;

bool f[10001];
int dem;

int main(){
    freopen("work.inp", "r", stdin);
    int n, m;
    bool kt = true;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; ++i){
        int u, v;
        scanf("%d%d", &u, &v);
        if (f[u] && f[v]) {
            kt = false;
            break;
        }
        dem += !f[u] + !f[v];
        f[u] = f[v] = true;
    }
    if (kt && dem == n) printf("YES");
    else printf("NO");
    return 0;
}
