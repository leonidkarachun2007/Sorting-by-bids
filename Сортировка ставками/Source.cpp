#include <iostream>
//#include <stdlib.h>
#include <time.h>

using namespace std;


//void insertSort(int a[], long size) {
//    int x;
//    long i, j;
//
//    for (i = 0; i < size; i++) {  // ���� ��������, i - ����� �������
//        x = a[i];
//
//        // ����� ����� �������� � ������� ������������������ 
//        for (j = i - 1; j >= 0 && a[j] > x; j--)
//            a[j + 1] = a[j];    // �������� ������� �������, ���� �� �����
//
//        // ����� �������, �������� �������
//        a[j + 1] = x;
//    }
//}
//
//int main() {
//    srand(time(NULL));
//    const long SIZE = 10;
//    int ar[SIZE];
//
//    // �� ����������
//    for (int i = 0; i < SIZE; i++) {
//        ar[i] = rand() % 30;
//        cout << ar[i] << "\t";
//    }
//    cout << "\n\n";
//    insertSort(ar, SIZE);
//
//    // ����� ����������
//    for (int i = 0; i < SIZE; i++) {
//        cout << ar[i] << "\t";
//    }
//    cout << "\n\n";
//}



int main()
{
    srand(time(NULL));
    //������� 3.
    // ������������ ������ ����� ������ �������������, 
    // ������ ������� ���������� � ������, ����������  
    // ��������� �������� ������������� (�������� � ����� ���� ������).

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