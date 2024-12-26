#include <iostream>
using namespace std;

// 입력
void input(int arr[5]) {

	for (int i = 0; i < 5; i++) {
		cout << "숫자 " << (i + 1) << "을 입력하세요.";
		cin >> arr[i];
	}
}


// 합계
int calculateSum(int arr[5]) {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}
	return sum;
}


// 평균
double calculateAverage(int sum, int size) {
	return (sum * 1.0) / size;
}

// main
int main() {
	int arr[5];
	input(arr);

	int sum = calculateSum(arr);
	double average = calculateAverage(sum, 5);

	//결과
	cout << "합계 : " << sum << endl;
	cout << "평균 : " << average << endl;

	return 0;
}
