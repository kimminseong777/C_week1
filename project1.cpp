#include<iostream>
using namespace std;

int main() {
	cout << "당신의 이름은 무엇입니까? ";
	char name[11]; //영문10, 한글5
	cin.getline(name, 11); //최대 10개 문자 입력 가능
	cout << "반갑습니다." << name << "님\n";

	cout << "apple의 가격은 얼마입니까? ";
	int price; //apple의 가격변수 
	cin >> price; //가격 입력
	
	cout << "banana의 가격은 얼마입니까? ";
	int price1; //banana의 가격변수 
	cin >> price1; // 가격 입력

	cout << "orange의 가격은 얼마입니까? ";
	int price2; //orange의 가격변수 
	cin >> price2; //가격 입력

	cout << "apple은 몇 개 있습니까? ";
	int num; //apple의 개수
	cin >> num; //개수 입력

	cout << "banana은 몇 개 있습니까? ";
	int num1; //banana의 개수
	cin >> num1; //개수 입력

	cout << "orange은 몇 개 있습니까? ";
	int num2; //orange의 개수
	cin >> num2; //개수 입력

	int result; // 총 금액
	result = (price * num) + (price1 * num1) + (price2 * num2) - 500; // 과일가격*개수 값 - 할인 500
	cout << "총" << result << "입니다.";

	return 0;
}