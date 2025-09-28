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
    std::cout << "거스름돈 금액을 입력하세요: ";
    std::cin >> amount;

    if (amount <= 0) {
        std::cout << "유효한 금액을 입력해주세요." << std::endl;
        return 0;
    }

    ChangeResult result = calculateChange(amount);

    int total_coins = result.coin500 + result.coin100 + result.coin50 + result.coin10;

    std::cout << "\n[최소 개수로 거슬러준 동전 내역]" << std::endl;
    std::cout << "500원: " << result.coin500 << "개" << std::endl;
    std::cout << "100원: " << result.coin100 << "개" << std::endl;
    std::cout << "50원: " << result.coin50 << "개" << std::endl;
    std::cout << "10원: " << result.coin10 << "개" << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << "총 동전 개수: " << total_coins << "개" << std::endl;

    return 0;
}