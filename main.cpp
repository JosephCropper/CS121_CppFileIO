#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
	ifstream fin("data.csv");
	string line;
	vector<string> vec;

	while (getline(fin, line)) {
		stringstream ss(line);

		while (ss.good()) {
			string substring;
			getline(ss, substring, ',');
			vec.push_back(substring);
		}
		int num1 = (vec[0].at(0) - '0');
		num1 += (vec[1].at(1) - '0');
		for (int i = 0; i < num1; i++) {
			cout << vec[2];
		}
		cout << "\n";
		vec.clear();
	}

	return 0;
}
