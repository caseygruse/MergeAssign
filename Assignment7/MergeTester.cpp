#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;

void mergeLists(list<string>, list<string>);

int main() {
	//Test 1
	list<string> one = { "abba", "acdc", "UB40" };
	list<string> two = { "dbs", "emf", "zz top" };

	
	//result: {"abba", acdc", "dbs", "emf", "UB40", "zz top"}

	//Test 2:
	list<string> one2 = { "abba", "acdc", "UB40"};
	list<string> two2 = {"zz top"};

	//result: {"abba", acdc", "UB40", "zz top"}

	//Test 3:
	list<string> one3 = { "abba", "acdc", "UB40"};
	list < string> two3 = {};

	//result: {"abba", acdc", "UB40"}

	//Test 4: 

	list<string> one4 = { "dbs", "emf", "zz top" };
	list<string> two4 = { "abba", "acdc", "UB40"};

	//result: {"abba", acdc", "dbs", "emf", "UB40", "zz top"}

	system("pause");
	return 0;
}


void mergeLists(list<string> one, list<string> two) {
	// make new vector size of both lists combined.
	vector<string> v(one.size() + two.size());
	sort(one.begin(), one.end());
	sort(two.begin(), two.end());
	merge(one.front, one.back, two.front, two.back, v.begin());


	for (int i = 0; i < v.size(); ++i) {
		cout << v[i];
	}
}