#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

ll n;
vl A;
ll x;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;

  A = vl(n);
  for (auto&& a : A) {
    cin >> a;
  }
  sort(A.begin(), A.end());

  cin >> x;

  auto ans = ll{0};
  auto p = 0;
  auto q = n - 1;
  while (p < q) {
    const auto s = A[p] + A[q];
    if (s == x) {
      ++ans;
      ++p;
      --q;
    } else if (s < x) {
      ++p;
    } else {
      --q;
    }
  }

  cout << ans;

  return 0;
}