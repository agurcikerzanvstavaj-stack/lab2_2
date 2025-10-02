int main() {
    // ===== Задача 1 =====
    // Дано тризначне число. Вивести першу цифру (сотні).
    int num;
    cout << "Задача 1: Введiть тризначне число: ";
    cin >> num;
    int firstDigit = num / 100; // цілочисельне ділення
    cout << "Перша цифра (сотнi): " << firstDigit << endl;

    // ===== Задача 2 =====
    // Вивести число у зворотному порядку
    cout << "\nЗадача 2: Число у зворотному порядку: ";
    int d1 = num % 10;       // остання цифра
    int d2 = (num / 10) % 10;// середня цифра
    int d3 = num / 100;      // перша цифра
    int reversed = d1 * 100 + d2 * 10 + d3;
    cout << reversed << endl;

    // ===== Задача 3 =====
    // Дано довжину паркану і довжину однієї дошки
    int fence, board;
    cout << "\nЗадача 3: Введiть довжину паркану: ";
    cin >> fence;
    cout << "Введiть довжину дошки: ";
    cin >> board;

    int boardsCount = fence / board;  // скільки дощок поміститься
    int remainder = fence % board;    // залишок довжини

    cout << "Кiлькiсть дошок: " << boardsCount << endl;
    cout << "Залишок довжини: " << remainder << endl;

    return 0;
}
