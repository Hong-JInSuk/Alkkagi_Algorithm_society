#include <iostream>

using namespace std;

int N, fidx, re = 0;
int c[50] = { 0, };

int main() {
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> c[i];
	}

	if (N == 1) {  // N==1�̸� �ż��� �ʿ� ����.
		cout << 0;
		return 0;
	}

	int maxn = -1;

	while (1) {
		for (int i = 1; i < N; i++) {  // 0��° �ε������� �ټ����� ǥ�� �����Ƿ� 1���� max���� ã�´�.
			if (maxn <= c[i]) {
				maxn = c[i];
				fidx = i;  // max���� index
			}
		}

		if (maxn >= c[0]) {
			c[fidx]--;
			maxn = -1;  // ���� ǥ���� �ø� �� �ٽ� ó������ max���� ã�ƾ� �ϹǷ�
			c[0]++;
			re++;
		}
		else
			break;
		
	}


	cout << re << endl;

	return 0;
}