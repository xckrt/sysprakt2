// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    /*int array[5];
    int temp;
    for (int i = 0; i < 5; i++)
    {
        cout << "Введите " << i + 1 << " элемент ";
        cin >> array[i];

    }
    cout << "Введенный массив\n";
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        if (i + 1 < 5)
        {
            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                temp = 0;

            }
        }
    }
    cout << "Отсортированный массив\n";
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }*/

    //2
//    int array1[2][2];
//    int array2[2][2];
//    cout << "Массив 1\n";
//    for (int i = 0; i < 2; i++)
//    {
//        for (int y = 0; y < 2; y++)
//        {
//            cout << "\nВведите элемент " << i + 1 << " " << y + 1 << endl;
//            cin >> array1[i][y];
//        }
//    }
//    cout << "Массив 2\n";
//    for (int i = 0; i < 2; i++)
//    {
//        for (int y = 0; y < 2; y++)
//        {
//            cout << "\nВведите элемент " << i + 1 << " " << y + 1 << endl;
//            cin >> array2[i][y];
//        }
//    }
//    for (int i = 0; i < 2; i++)
//    {
//        for (int y = 0; y < 2; y++)
//        {
//            array1[i][y] += array2[i][y];
//        }
//    }
//    cout << "Финальный массив";
//    for (int i = 0; i < 2; i++)
//    {
//        cout << endl;
//        for (int y = 0; y < 2; y++)
//        {
//            cout << "\nЭлемент массива " << i + 1 << " " << y + 1 << endl;
//            cout << array1[i][y];
//        }
//    }
    //3
    /*struct student
    {
        char name[5];
        double grades[5];
        

    };
    struct student Student = { {'A', 'n', 't', 'o', 'n'}, {3.0, 5.0, 4.5, 2.7, 5.8} };
    double sum = 0;
    double result;
    double sr;
    for (int i = 0; i < 5; i++)
    {
        sum += Student.grades[i];
    }
    result = sum / 5;
    cout << "Средняя оценка - " << result;*/
    //4

    class Employee
    {
    private:
            char name[5];
            float salary;
    public:
        void setsalary(float salary)
        {
            this->salary = salary;
        }
        void up() {
            float percentage;
            cout << "Введите процент - ";
            cin >> percentage;
            if (percentage > 1.01)
            {
                percentage /= 100.0;
            }
            this -> salary = salary + salary * percentage;
            cout << "Увеличенная зарплата - " << this->salary;

        }
    };
    Employee Anton;
    Anton.setsalary(58765.235);
    Anton.up();
    
}



