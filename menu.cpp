// ���̵� ���� & ����� ���� Ȯ���ϴ� �Լ�
#include <iostream>
#include <string>
using namespace std;

int selectDifficulty() {
    int choice;
    while (true) {
        cout << "    �̷�ã�� ����    \n";
        cout << "1. Easy (21x21)\n";
        cout << "2. Normal (31x31)\n";
        cout << "3. Hard (41x41)\n";
        cout << "���̵��� �����ϼ��� (1~3): ";
        cin >> choice;

        if (cin.fail() || choice < 1 || choice > 3) {
            cin.clear(); cin.ignore(1000, '\n');
            cout << "�߸��� �Է��Դϴ�. �ٽ� �������ּ���.\n\n";
        }
        else {
            return choice;
        }
    }
}

bool askRestart() {
    string input;
    while (true) {
        cout << "\n������ �ٽ� �����Ͻðڽ��ϱ�? (Y/N): ";
        cin >> input;
        for (auto& c : input) c = tolower(c);
        if (input == "y" || input == "yes") return true;
        if (input == "n" || input == "no") return false;
        cout << "�߸��� �Է��Դϴ�. 'Y' �Ǵ� 'N'���� �ٽ� �Է����ּ���.\n";
    }
}
