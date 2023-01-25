#include "FoldingHairDryer.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    IShop* mvideo[5];

    mvideo[0] = new Speaker(50, 100);
    mvideo[1] = new Ebook(50, 16);
    mvideo[2] = new WashingMachine(10, 50);
    mvideo[3] = new Hoover(10, 200);
    mvideo[4] = new FoldingHairDryer(25, 30);

    bool open = true;
    while (open)
    {
        cout << "�������� ������� : 1 - �������, 2 - ����������� �����, 3 - ���������� ������, ";
        cout << "4 - �������, 5 - �������� ��� �� ����������, 0 ����� �����" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            mvideo[0]->Show();
            break;

        case 2:
            mvideo[1]->Show();
            break;

        case 3:
            mvideo[2]->Show();
            break;

        case 4:
            mvideo[3]->Show();
            break;

        case 5:
            mvideo[4]->Show();
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "�������� ������� �� 1 �� 5 ��� 0, ����� �����" << endl;
            break;
        }
    }
    delete mvideo[0];
    delete mvideo[1];
    delete mvideo[2];
    delete mvideo[3];
    delete mvideo[4];

    return 0;
}