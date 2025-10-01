#include <iostream>
//#include <stdlib.h>
#include <time.h>

using namespace std;


//void insertSort(int a[], long size) {
//    int x;
//    long i, j;
//
//    for (i = 0; i < size; i++) {  // цикл проходов, i - номер прохода
//        x = a[i];
//
//        // поиск места элемента в готовой последовательности 
//        for (j = i - 1; j >= 0 && a[j] > x; j--)
//            a[j + 1] = a[j];    // сдвигаем элемент направо, пока не дошли
//
//        // место найдено, вставить элемент
//        a[j + 1] = x;
//    }
//}
//
//int main() {
//    srand(time(NULL));
//    const long SIZE = 10;
//    int ar[SIZE];
//
//    // до сортировки
//    for (int i = 0; i < SIZE; i++) {
//        ar[i] = rand() % 30;
//        cout << ar[i] << "\t";
//    }
//    cout << "\n\n";
//    insertSort(ar, SIZE);
//
//    // после сортировки
//    for (int i = 0; i < SIZE; i++) {
//        cout << ar[i] << "\t";
//    }
//    cout << "\n\n";
//}



int main()
{
    srand(time(NULL));
    //Задание 3.
    // Пользователь вводит длину сторон пятиугольника, 
    // каждая сторона заноситься в массив, необходимо  
    // вычислить периметр пятиугольника (периметр — сумма всех сторон).

    const int SIZE = 5;
    int arr[SIZE];
    int P = 0;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter -> " << i + 1 << " -> ";
        cin >> arr[i];
        P += arr[i]; // 
    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    cout << "P = " << P << endl;


}