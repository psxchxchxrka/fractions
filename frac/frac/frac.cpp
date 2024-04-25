// frac.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

/// <summary>
/// num - числитель
/// denum - знаменатель
/// </summary>
class Fraction {
private:
    int num;
    int denum;
public:
    Fraction(int n1, int n2) {
        num = n1;
        denum = n2;
        reduction();
    }
    Fraction() {
        num = 1;
        denum = 1;
    }
    void print() {
        cout << num << "/" << denum << endl;
    }
    void reduction() {
        int a = 1;
        while (a < num || a < denum) {
            if (num % a == 0 && denum % a == 0) {
                denum = denum / a;
                num = num / a;
                
            }
            a += 1;
        }

    }

    Fraction operator * (Fraction b) {
        return Fraction(num * b.num, denum * b.denum);
    }

    Fraction operator / (Fraction b) {
        return Fraction(num * b.denum, denum * b.num);
    }

    Fraction operator + (Fraction b) {
        return Fraction(num * b.denum + denum * b.num, denum * b.denum);
    }
    
    Fraction operator - (Fraction b) {
        return Fraction(num * b.denum - denum * b.num, denum * b.denum);
    }

    Fraction operator ++ () {
        return Fraction(num+denum, denum);
    }

    Fraction operator -- () {
        return Fraction(num - denum, denum);
    }

    Fraction operator *= (Fraction b) {
        return Fraction(num = num * b.num, denum = denum * b.denum);
    }

    Fraction operator += (Fraction b) {
        return Fraction(num = num * b.denum + denum * b.num, denum = denum * b.denum);
    }

    Fraction operator -= (Fraction b) {
        return Fraction(num = num * b.denum - denum * b.num, denum = denum * b.denum);
    }

    Fraction operator /= (Fraction b) {
        return Fraction(num = num * b.denum,denum = denum * b.num);
    }
};
int main()
{
    //Fraction frac = Fraction(10000, 12000);
    //frac.print();
    Fraction a = Fraction(3,5);
    Fraction b = Fraction(3,5);
    Fraction c = a * b;
    Fraction d = a / b;
    Fraction e = a + b;
    Fraction f = a - b;
    Fraction x = a *= b;
    Fraction w = a += b;
    Fraction v = a -= b;
    Fraction y = a /= b;
    //1
    c.print();
    //2
    d.print();
    //3
    e.print();
    //4
    f.print();
    //5
    x.print();
    //6
    w.print();
    //7
    v.print();
    //8
    y.print();

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
