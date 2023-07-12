#include <iostream>
#include <ctime>
using namespace std;

class BrunchFinances {
public:
    int stavka = 50;
    int zp = 35;
    int yslygi = 15;
    int full_summa;
};

class NewBranch : public BrunchFinances {
private:
    string name_on_class;
public:
    NewBranch() {};
    NewBranch(string _name) {
        name_on_class = _name;
    }


    void print_name() {
        cout << "����� ���������� � ������� �������: " << name_on_class << endl;
    }

    ~NewBranch() {}
};




int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));

    string name;
    cout << "������� ��������: ";
    cin >> name;
    NewBranch nb(name);
    nb.print_name();


    int revenue = rand() % 250 + 250;
    cout << "�������: " << revenue << endl;
    int arenda = 50 + (revenue - 270) * 0.07;
    cout << "������: " << arenda << endl;


    BrunchFinances bf;
    cout << "��������: " << bf.zp << endl;
    cout << "����� �����������: " << bf.yslygi << endl;
    bf.full_summa = bf.zp + bf.yslygi + arenda;
    cout << "����� �����: " << bf.full_summa << endl << endl;
    cout << "������ �������: " << revenue - (bf.full_summa) << endl;
}

