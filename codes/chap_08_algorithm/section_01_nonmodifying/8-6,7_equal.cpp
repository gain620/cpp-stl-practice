#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Pred(int a, int b)
{
    return abs(a-b) < 5;
}

int main(int argc, char const *argv[])
{
	vector<int> v1;

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);

	vector<int> v2;
	v2.push_back(10);
	v2.push_back(20);
	v2.push_back(30);
	v2.push_back(40);
	v2.push_back(60);

	vector<int> v3;
	v3.push_back(11);
	v3.push_back(22);
	v3.push_back(33);

	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
	{
		cout<< v1[i] <<" ";
	}

	cout << endl;

	for (vector<int>::size_type i = 0; i < v2.size(); ++i)
	{
		cout<< v2[i] <<" ";
	}

	cout << endl;

	// compare range [v1.begin(), v1.end()) and [v2.begin(),v1.end()-v1.begin())
	if (equal(v1.begin(), v1.end(), v2.begin()))
	{
		cout << "Both sequences are the same!!!" << endl;
	}

	//
	if (equal(v1.begin(), v1.end(), v2.begin(), Pred))
	{
		cout << "Both sequences are the same!!!" << endl;
	}

	return 0;
}