#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	int a[3] = { 10,20,30 }, b[3];//создаём массив a[] из 3 элементов и заполняем его значениями,создаём пустой массив b[]
	reverse_copy(a, a + 3, b);//копируем значения из массива  а[] в массив b[] в обратном порядке
	//функция reverse_copy(начало,конец,куда) копирует значения одного контейнера в другой в обратном порядке
	//a[]: 10 20 30
	//b[]: 30 20 10

	copy(b, b + 3, ostream_iterator<int>(cout, " "));//выводим полученный массив на экран
	//copy(начало,конец,операции)
	//ostream_iterator<тип>(cout, "текст") — это итератор вывода. Он применяется для вывода элементов.
	//В "текст" можно ввести текст,который будет выводиться между элементами
	
	/*copy(b, b + 3, ostream_iterator<int>(cout, " ")) это то же самое ,что и следующий цикл 
	for (int i = 0; i < 3; i++) 
	{
		cout << b[i] << ' ';
	}*/
	cout << endl;
	return 0;
}

