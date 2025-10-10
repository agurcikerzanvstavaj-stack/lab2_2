int main() {
    // ===== Задача 1 =====
    // Дано тризначне число. Вивести першу цифру (сотні).
    int num;
    cout << "Задача 1: Введiть тризначне число: ";
    cin >> num;
    int firstDigit = num / 100; // цілочисельне ділення
    cout << "Перша цифра (сотнi): " << firstDigit << endl;

 
    // === ЗАДАЧА 2 ===
    cout << "=== Задача 2 ===" << endl;
    double x;
    cout << "Введіть x: ";
    cin >> x;

    double y = cbrt(pow(x, 2) - 2 * fabs(sin(pow(x, 3))) * fabs(tan(x)) * pow(2.5, cos(x)))
              / (0.625 * x + 2 * (log2(pow(x, 3) + 7.5)));

    cout << "Результат y = " << y << endl << endl;

    // === ЗАДАЧА 3 ===
    cout << "=== Задача 3 ===" << endl;
    int A, B;
    cout << "Введіть два цілих числа A і B: ";
    cin >> A >> B;

    bool result = (A % 2 != 0) || (B % 2 != 0);

    if (result)
        cout << "Висловлювання істинне: хоча б одне число непарне." << endl;
    else
        cout << "Висловлювання хибне: обидва числа парні." << endl;

    return 0;
}

