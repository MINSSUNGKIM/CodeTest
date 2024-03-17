#include<iostream>
#include<algorithm>


int main() {

	int N, M, K;

	std::cin >> N;
	std::cin >> M;
	std::cin >> K;


	int* marr = new int[N];

	for (int i = 0; i < N; ++i)
	{
		std::cin >> marr[i];
	}


	std::sort(marr, marr + N);//오름차정렬

	int sum;
	sum = (marr[N-1] * K + marr[N-2]) * (M/(K+1)) + marr[N - 1] * (M %(K + 1));

	std::cout << sum << std::endl;


	delete[] marr;


	return 0;
}
