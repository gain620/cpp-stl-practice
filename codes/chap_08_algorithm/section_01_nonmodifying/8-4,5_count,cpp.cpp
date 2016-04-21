#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Pred(int n)
{
    return 25 < n;
}

int main(int argc, char const *argv[])
{
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(30);
	v.push_back(50);
	v.push_back(10);
	v.push_back(30);

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] <<" ";
	}

	cout << endl;

	// count 30 from range [v.begin(), v.end())
	int cnt = count(v.begin(), v.end(), 30);
	cout << "number of 30: " << cnt << endl;

	// count numbers bigger than 25 from range [v.begin(), v.end())
	cnt = count_if(v.begin(), v.end(), Pred);
	cout << "num: " << cnt << endl;

	return 0;
}