#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int Guess;
int Total;

class Question
{
private:
	string Question_Text;
	string Answer_1;
	string Answer_2;
	string Answer_3;
	
	int Correct_Answer;
	int Question_Score;

public:
	void setValues(string, string, string, string, int, int);
	void askQuestion();
};

int main()


{
	
	SetConsoleCP(1251); // Ввод с консоли в кодировке 1251
	SetConsoleOutputCP(1251); // Вывод на экран

	cout << "* * * * * * * * * *" << endl;
	cout << "*    ВИКТОРИНА:   *" << endl;
	cout << "*     ЗАГАДКИ     *" << endl;
	cout << "*    ЗВЁЗДНОГО    *" << endl;
	cout << "*      НЕБА       *" << endl;
	cout << "* * * * * * * * * *" << endl;
	cout << endl;

	cout << "Нажмите Enter, и полетели!" << endl;
	cin.get();

	string Name;
	cout << "Ваше имя?" << endl;
	cin >> Name;
	cout << endl;

	string Respond;
	cout << "Готовы к полету, " << Name << "? да/нет?" << endl;
	cin >> Respond;
	if (Respond == "да")
	{
		cout << endl;
		cout << "Просто космос, вперед!" << endl;
	}
	else {
		cout << "Что ж, тогда до встречи!" << endl;
		return 0;
	}


	Question q1;
	Question q2;
	Question q3;
	Question q4;
	Question q5;
	Question q6;
	Question q7;
	Question q8;
	Question q9;
	Question q10;

	
	q1.setValues("Тренировочный 0. Вопрос: Когда был совершен первый полет человека в космос? ",
		"12 апреля 1961 года ",
		"4 октября 1957 года",
		"16 июля 1969 года ",
		1, // Позиция правильного ответа
		10); // Цена за правильный ответ

	q2.setValues("1. Вопрос: Кого считают 'отцом космонавтики'?",
		"Н. Е. Жуковский ",
		"С. П. Королев ",
		"К. Э. Циолковский",
		3, // Позиция правильного ответа
		10); // Цена за правильный ответ

	q3.setValues("2. Вопрос: Что означает слово 'космос'?",
		"Планета",
		"Небо",
		"Вселенная",
		3, // Позиция правильного ответа
		10); // Цена за правильный ответ

	q4.setValues("3. Вопрос: Сколько планет в Солнечной системе? ",
		"7",
		"9",
		"8",
		3, // Позиция правильного ответа
		10); // Цена за правильный ответ

	q5.setValues("4. Вопрос: Как звали собаку, которая первой полетела в космос вместе с искусственным спутником земли? ",
		"Белка",
		"Лайка",
		"Тоша",
		2, // Позиция правильного ответа
		10); // Цена за правильный ответ

	q6.setValues("5. Вопрос: Сколько длился первый полет? ",
		"108 минут",
		"67 минут",
		"98 минут",
		1, // Позиция правильного ответа
		10); // Цена за правильный ответ

	q7.setValues("6. Вопрос: Как назывался космический корабль, на котором стартовал Ю.А. Гагарин? ",
		"Союз-1",
		"Восход-1",
		"Восток-1",
		3, // Позиция правильного ответа
		10); // Цена за правильный ответ

	q8.setValues("7. Вопрос: Кто является первой женщиной-космонавтом? ",
		"Валентина Терешкова",
		"Салли Райд",
		"Светлана Савицкая ",
		1, // Позиция правильного ответа
		10); // Цена за правильный ответ

	q9.setValues("8. Вопрос: Самая маленькая и быстрая из планет?",
		"Плутон",
		"Уран",
		"Меркурий",
		3, // Позиция правильного ответа
		10); // Цена за правильный ответ

	q10.setValues("Какой ученый первым стал изучать космос с помощью телескопа?",
		"Николай Коперник",
		"Галилео Галилей",
		"Пифагор",
		2, // Позиция правильного ответа
		10); // Цена за правильный ответ


	q1.askQuestion();

	q2.askQuestion();

	q3.askQuestion();

	q4.askQuestion();

	q5.askQuestion();

	q6.askQuestion();

	q7.askQuestion();

	q8.askQuestion();

	q9.askQuestion();

	q10.askQuestion();

	cout << "Вы набрали " << Total << " из 100 возможных" << endl;
	cout << endl;

	if (Total >= 70)
	{
		cout << "Вы успешно прошли викторину!" << endl;
		cout << endl;
		cout << "&&&&&&&&&&&&&&&&&&" << endl;
		cout << "& ПРОСТО КОСМОС! &" << endl;
		cout << "&&&&&&&&&&&&&&&&&&" << endl;
	}

	else {

		cout << "Упс, викторина не задалась:(" << endl;
		cout << endl;
		cout << "В следующий раз звезды точно будут на вашей стороне!" << endl;
	}
	return 0;
}

void Question::setValues(string q, string a1, string a2, string a3, int ca, int pa)
{
	Question_Text = q;
	Answer_1 = a1;
	Answer_2 = a2;
	Answer_3 = a3;
	Correct_Answer = ca;
	Question_Score = pa;
}

void Question::askQuestion()
{
	cout << endl;
	cout << Question_Text << endl;
	cout << "1. " << Answer_1 << endl;
	cout << "2. " << Answer_2 << endl;
	cout << "3. " << Answer_3 << endl;
	cout << endl;

	cout << "Какой ваш ответ?(выберите соответствующую цифру)" << endl;
	cin >> Guess;
	if (Guess == Correct_Answer)
	{
		cout << endl;
		cout << "Все так, хорошо!" << endl;
		Total = Total + Question_Score;
		cout << "Баллы: " << Question_Score << " из " << Question_Score << "!" << endl;
		cout << endl;
	}
	else
	{
		cout << endl;
		cout << "Ой, вот здесь неверно" << endl;
		cout << "Баллы: 0" << " из " << Question_Score << "!" << endl;
		cout << "Правильный ответ " << Correct_Answer << "." << endl;
		cout << endl;
	}

}
