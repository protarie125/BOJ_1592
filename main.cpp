#include <iostream>
#include <vector>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m, l; cin >> n >> m >> l;
	auto c = vi(n, 0);
	auto ans = int{ 0 };
	auto next = int{ 0 };
	while (true) {
		c[next] += 1;
		if (m == c[next]) {
			break;
		}

		if (0 == c[next] % 2) {
			next -= l;
			if (next < 0) {
				next += n;
			}
		}
		else {
			next += l;
			if (n <= next) {
				next -= n;
			}
		}

		++ans;
	}

	cout << ans;

	return 0;
}