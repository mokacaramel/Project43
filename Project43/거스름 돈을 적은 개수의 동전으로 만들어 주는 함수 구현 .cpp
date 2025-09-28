#include <iostream>

struct ChangeResult {
    int coin500;
    int coin100;
    int coin50;
    int coin10;
};


ChangeResult calculateChange(int amount) {
    ChangeResult result = { 0, 0, 0, 0 };


    result.coin500 = amount / 500;
    amount %= 500;

    result.coin100 = amount / 100;
    amount %= 100;

    result.coin50 = amount / 50;
    amount %= 50;

    result.coin10 = amount / 10;
    amount %= 10;

    return result;
}

int main() {
    int amount;
    std::cout << "�Ž����� �ݾ��� �Է��ϼ���: ";
    std::cin >> amount;

    if (amount <= 0) {
        std::cout << "��ȿ�� �ݾ��� �Է����ּ���." << std::endl;
        return 0;
    }

    ChangeResult result = calculateChange(amount);

    int total_coins = result.coin500 + result.coin100 + result.coin50 + result.coin10;

    std::cout << "\n[�ּ� ������ �Ž����� ���� ����]" << std::endl;
    std::cout << "500��: " << result.coin500 << "��" << std::endl;
    std::cout << "100��: " << result.coin100 << "��" << std::endl;
    std::cout << "50��: " << result.coin50 << "��" << std::endl;
    std::cout << "10��: " << result.coin10 << "��" << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << "�� ���� ����: " << total_coins << "��" << std::endl;

    return 0;
}