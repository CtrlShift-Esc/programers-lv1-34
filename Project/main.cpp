#include <string>
#include <vector>
#include <iostream>

using namespace std;

int getMin(const int& a, const int& b)
{
	return a > b ? b : a;
}

int getMax(const int& a, const int& b)
{
	return a > b ? a : b;
}

int solution(vector<vector<int>> sizes) {
	int w = 0, h = 0;
	for (auto rect : sizes)
	{
		int max = getMax(rect[0], rect[1]);
		int min = getMin(rect[0], rect[1]);
		if (w < max)
			w = max;
		if (h < min)
			h = min;
	}
	cout << "w : " << w << " h : " << h;
	int answer = w * h;
	return answer;
}

void main()
{
	//test
	//auto ret = solution({{60, 50}, {30, 70}, {60, 30}, {80, 40}});
}