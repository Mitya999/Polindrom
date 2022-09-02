#include <iostream> 
#include <conio.h>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

#define offset "\t\t\t\t"
#define tap "\t"
//#define w 119;
//#define s 115;
//#define a 97;
//#define d 100;
//#define Space 32;
//#define Enter 13;
//#define c 99;
//#define r 114;


#define Polindrom
//#define lucky_ticket_1
//#define lucky_ticket_2
//#define Shooter

void main()
{
	setlocale(LC_ALL, "rus");
#ifdef Polindrom

	cout << offset << "Программа для проверки \"Палиндромного\" числа" << endl;
	cout << "Введите число: ";
	int a;
	cin >> a;
	int set = a;

	int b = 0;

	while (set != 0)
	{
		b = b * 10 + set % 10;
		set /= 10;
	}

	if (a == b) cout << "Число " << a << " \"Палиндромное\"" << endl;
	else cout << "Число " << a << " не \"Палиндромное\"" << endl;
#endif // Polindrom

#ifdef lucky_ticket_1 // Выполнил через массив

	cout << offset << "Программа для определения счастливого билета!" << endl;
	cout << "введите номер билета: ";
	char n[6];
	cin >> n;
	cout << (n[0] + n[1] + n[2] == n[3] + n[4] + n[5] ?
		"Поздравляю! Ваш билет счастливый\n" :
		"К сожалению, это обычный билет\n");
#endif // lucky_ticket_1

#ifdef lucky_ticket_2 // Выполнил через While
	unsigned a;

	cout << "Введите номер Вашего билета: ";
	cin >> a;
	while (a < 100000 || a > 999999);
	if (((a / 100000) % 10) + ((a / 10000) % 10) + ((a / 1000) % 10) == ((a / 100) % 10) + ((a / 10) % 10) + (a % 10))
		cout << "Поздравляю, Ваш билет счастливый!" << endl;
	else
		cout << "К сожалению, это обычный билет =(" << endl;
	main();
#endif // lucky_ticket_2

#ifdef Shooter
	cout << endl;
	cout << offset << "Программа \"Shooter\"" << endl << endl;
	cout << "Нажмите клавишу на клавиатуре, чтобы узнать какое действие будет выполнено: ";

	char l = _getch();
	
	if (l == 119) cout << tap << l << " - Вперед" << endl;
	else if (l == 115) cout << tap << l << " - Назад" << endl;
	else if (l == 97) cout << tap << l << " - Влево" << endl;
	else if (l == 100) cout << tap << l << " - Вправо" << endl;
	else if (l == 99) cout << tap << l << " - Присесть" << endl;
	else if (l == 114) cout << tap << l << " - Reload" << endl;
	else if (l == 32) cout << tap << "Space" << " - Прыжок" << endl;
	else if (l == 13) cout << tap << "Enter" << " - Огонь" << endl;
	else cout << tap << "Такая клавиша не используется! Попробуйте другую." << endl;
	main();

#endif // Shooter

}
