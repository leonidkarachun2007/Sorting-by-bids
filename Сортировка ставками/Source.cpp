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


// 1 задание 

//int main() {
//    setlocale(0, "ru");
//
//    double profit[6]; 
//    double total = 0;  
//
//    cout << "¬ведите прибыль фирмы за 6 мес€цев:\n";
//
//    for (int i = 0; i < 6; i++) {
//        cout << "ћес€ц " << i + 1 << ": ";
//        cin >> profit[i];   
//        total += profit[i];  
//    }
//
//    cout << "\nќбща€ прибыль за 6 мес€цев: " << total << endl;
//
//}

// 2 задание

//int main() {
//    setlocale(0, "ru");
//    srand(time(NULL)); 
//
//    const int n = 10;
//    int arr[n];
//
//    cout << "»сходный массив:\n";
//    for (int i = 0; i < n; i++) {
//        arr[i] = rand() % 100; 
//        cout << arr[i] << " ";
//    }
//
//    cout << "\nћассив в обратном пор€дке:\n";
//    for (int i = n - 1; i >= 0; i--) {
//        cout << arr[i] << " ";
//    }
//
//
//
//}

//
//int main()
//{
//    srand(time(NULL));
//    //задание 3.
//    // пользователь вводит длину сторон п€тиугольника, 
//    // кажда€ сторона заноситьс€ в массив, необходимо  
//    // вычислить периметр п€тиугольника (периметр Ч сумма всех сторон).
//
//    const int size = 5;
//    int arr[size];
//    int p = 0;
//
//    for (int i = 0; i < size; i++)
//    {
//        cout << "enter -> " << i + 1 << " -> ";
//        cin >> arr[i];
//        p += arr[i]; // 
//    }
//    for (int i = 0; i < size; i++)
//    {
//        cout << arr[i] << "\t";
//    }
//    cout << endl;
//    cout << "p = " << p << endl;
//
//
//}