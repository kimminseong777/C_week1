#include<iostream>
using namespace std;

int main() {
	cout << "����� �̸��� �����Դϱ�? ";
	char name[11]; //����10, �ѱ�5
	cin.getline(name, 11); //�ִ� 10�� ���� �Է� ����
	cout << "�ݰ����ϴ�." << name << "��\n";

	cout << "apple�� ������ ���Դϱ�? ";
	int price; //apple�� ���ݺ��� 
	cin >> price; //���� �Է�
	
	cout << "banana�� ������ ���Դϱ�? ";
	int price1; //banana�� ���ݺ��� 
	cin >> price1; // ���� �Է�

	cout << "orange�� ������ ���Դϱ�? ";
	int price2; //orange�� ���ݺ��� 
	cin >> price2; //���� �Է�

	cout << "apple�� �� �� �ֽ��ϱ�? ";
	int num; //apple�� ����
	cin >> num; //���� �Է�

	cout << "banana�� �� �� �ֽ��ϱ�? ";
	int num1; //banana�� ����
	cin >> num1; //���� �Է�

	cout << "orange�� �� �� �ֽ��ϱ�? ";
	int num2; //orange�� ����
	cin >> num2; //���� �Է�

	int result; // �� �ݾ�
	result = (price * num) + (price1 * num1) + (price2 * num2) - 500; // ���ϰ���*���� �� - ���� 500
	cout << "��" << result << "�Դϴ�.";

	return 0;
}