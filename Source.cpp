#include <iostream>
using namespace std;
int main() {
	/*For4. Дано вещественное число — цена 1 кг конфет. Вывести стоимость 1,
2, . . . , 10 кг конфет.
    int c;
    cin >> c;
    for (int i = 1; i <= 10; i++)
        cout << i << " kg = " << c * i << endl;
        */
    /*For7. Даны два целых числа A и B (A < B). Найти сумму всех целых чисел
от A до B включительно.
    int a, b, sum = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
        sum += i;
    cout << "sum = " << sum;
    */
    /*For8. Даны два целых числа A и B (A < B). Найти произведение всех целых
чисел от A до B включительно.
    int a, b, pr = 1;
    cin >> a >> b;
    for (int i = a; i <= b; i++) 
        pr *= i;
    cout << pr;
    */
    /*For9. Даны два целых числа A и B (A < B). Найти сумму квадратов всех целых
чисел от A до B включительно.*/
    int a, b, kv = 0, i;
    cin >> a >> b;
    for (i = a; i <= b; ++i)
        kv += i * i;
    cout << "kv: " << kv;
	return 0;
}