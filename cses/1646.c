#include <stdio.h>
#include <stdlib.h>
#define ll long long

void solve() {
	int n, q;
	scanf("%d", &n);
    scanf("%d", &q);
    ll *prefix_sum = (ll) calloc(n, sizeof(ll));
	ll a, b, temp;
	for (int i = 0; i < n; i++) {
		scanf("%lld", &temp);
		if (i == 0)
			prefix_sum[i] = temp;
		else
			prefix_sum[i] = prefix_sum[i - 1] + temp;
	}
	for (int i = 0; i < q; i++) {
		scanf("%lld", &a);
        scanf("%lld", &b);
        printf("%lld\n", prefix_sum[b - 1 ]- ((a == 1) ? 0 : prefix_sum[a - 2]));
	}
}

int main() {
    solve();
    return 0;
}