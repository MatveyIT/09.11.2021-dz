#include <iostream>
using namespace std;
int main() {
	/*For4. ���� ������������ ����� � ���� 1 �� ������. ������� ��������� 1,
2, . . . , 10 �� ������.
    int c;
    cin >> c;
    for (int i = 1; i <= 10; i++)
        cout << i << " kg = " << c * i << endl;
        */
    /*For7. ���� ��� ����� ����� A � B (A < B). ����� ����� ���� ����� �����
�� A �� B ������������.
    int a, b, sum = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
        sum += i;
    cout << "sum = " << sum;
    */
    /*For8. ���� ��� ����� ����� A � B (A < B). ����� ������������ ���� �����
����� �� A �� B ������������.
    int a, b, pr = 1;
    cin >> a >> b;
    for (int i = a; i <= b; i++) 
        pr *= i;
    cout << pr;
    */
    /*For9. ���� ��� ����� ����� A � B (A < B). ����� ����� ��������� ���� �����
����� �� A �� B ������������.*/
    int a, b, kv = 0, i;
    cin >> a >> b;
    for (i = a; i <= b; ++i)
        kv += i * i;
    cout << "kv: " << kv;
	return 0;
}