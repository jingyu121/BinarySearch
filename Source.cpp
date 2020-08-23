#include <algorithm>
#include <iostream>
#include <vector>
using namespace  std;

int main() {
	vector <int> v;
	const int SIZE = 10;
	const int RANGE = 20;
	int rseed = 5;
	srand(rseed);

	for (int i = 0; i < SIZE; i++) {
		v.push_back(rand() % RANGE);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout <<" "<<i<<"] "<<v.at(i) << endl;
	}

	int numToFind = 0;
	cin >> numToFind;


	int high = v.size() - 1;
	int low = 0;
	int mid = (high - low) / 2;

	while (low <= high) {
		if (v.at(mid) == numToFind) {
			break;
		}
		else if (v.at(mid) < numToFind) {
			low = mid + 1;
			mid = low+(high - low) / 2;
		}
		else {
			high = mid - 1;
		mid = low+(high - low) / 2;
	}
	}

	if (high < low) {
		cout << numToFind << "nit found" << endl;
	}
	else {
		cout << "" << endl;
	}
	system("pause");
}