#include <iostream>
using namespace std;

// �Է�
void input(int arr[5]) {

	for (int i = 0; i < 5; i++) {
		cout << "���� " << (i + 1) << "�� �Է��ϼ���.";
		cin >> arr[i];
	}
}


// �հ�
int calculateSum(int arr[5]) {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}
	return sum;
}


// ���
double calculateAverage(int sum, int size) {
	return (sum * 1.0) / size;
}

// main
int main() {
	int arr[5];
	input(arr);

	int sum = calculateSum(arr);
	double average = calculateAverage(sum, 5);

	//���
	cout << "�հ� : " << sum << endl;
	cout << "��� : " << average << endl;

	return 0;
}
