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
	
	SetConsoleCP(1251); // ���� � ������� � ��������� 1251
	SetConsoleOutputCP(1251); // ����� �� �����

	cout << "* * * * * * * * * *" << endl;
	cout << "*    ���������:   *" << endl;
	cout << "*     �������     *" << endl;
	cout << "*    �¨������    *" << endl;
	cout << "*      ����       *" << endl;
	cout << "* * * * * * * * * *" << endl;
	cout << endl;

	cout << "������� Enter, � ��������!" << endl;
	cin.get();

	string Name;
	cout << "���� ���?" << endl;
	cin >> Name;
	cout << endl;

	string Respond;
	cout << "������ � ������, " << Name << "? ��/���?" << endl;
	cin >> Respond;
	if (Respond == "��")
	{
		cout << endl;
		cout << "������ ������, ������!" << endl;
	}
	else {
		cout << "��� �, ����� �� �������!" << endl;
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

	
	q1.setValues("������������� 0. ������: ����� ��� �������� ������ ����� �������� � ������? ",
		"12 ������ 1961 ���� ",
		"4 ������� 1957 ����",
		"16 ���� 1969 ���� ",
		1, // ������� ����������� ������
		10); // ���� �� ���������� �����

	q2.setValues("1. ������: ���� ������� '����� ������������'?",
		"�. �. ��������� ",
		"�. �. ������� ",
		"�. �. �����������",
		3, // ������� ����������� ������
		10); // ���� �� ���������� �����

	q3.setValues("2. ������: ��� �������� ����� '������'?",
		"�������",
		"����",
		"���������",
		3, // ������� ����������� ������
		10); // ���� �� ���������� �����

	q4.setValues("3. ������: ������� ������ � ��������� �������? ",
		"7",
		"9",
		"8",
		3, // ������� ����������� ������
		10); // ���� �� ���������� �����

	q5.setValues("4. ������: ��� ����� ������, ������� ������ �������� � ������ ������ � ������������� ��������� �����? ",
		"�����",
		"�����",
		"����",
		2, // ������� ����������� ������
		10); // ���� �� ���������� �����

	q6.setValues("5. ������: ������� ������ ������ �����? ",
		"108 �����",
		"67 �����",
		"98 �����",
		1, // ������� ����������� ������
		10); // ���� �� ���������� �����

	q7.setValues("6. ������: ��� ��������� ����������� �������, �� ������� ��������� �.�. �������? ",
		"����-1",
		"������-1",
		"������-1",
		3, // ������� ����������� ������
		10); // ���� �� ���������� �����

	q8.setValues("7. ������: ��� �������� ������ ��������-�����������? ",
		"��������� ���������",
		"����� ����",
		"�������� �������� ",
		1, // ������� ����������� ������
		10); // ���� �� ���������� �����

	q9.setValues("8. ������: ����� ��������� � ������� �� ������?",
		"������",
		"����",
		"��������",
		3, // ������� ����������� ������
		10); // ���� �� ���������� �����

	q10.setValues("����� ������ ������ ���� ������� ������ � ������� ���������?",
		"������� ��������",
		"������� �������",
		"�������",
		2, // ������� ����������� ������
		10); // ���� �� ���������� �����


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

	cout << "�� ������� " << Total << " �� 100 ���������" << endl;
	cout << endl;

	if (Total >= 70)
	{
		cout << "�� ������� ������ ���������!" << endl;
		cout << endl;
		cout << "&&&&&&&&&&&&&&&&&&" << endl;
		cout << "& ������ ������! &" << endl;
		cout << "&&&&&&&&&&&&&&&&&&" << endl;
	}

	else {

		cout << "���, ��������� �� ��������:(" << endl;
		cout << endl;
		cout << "� ��������� ��� ������ ����� ����� �� ����� �������!" << endl;
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

	cout << "����� ��� �����?(�������� ��������������� �����)" << endl;
	cin >> Guess;
	if (Guess == Correct_Answer)
	{
		cout << endl;
		cout << "��� ���, ������!" << endl;
		Total = Total + Question_Score;
		cout << "�����: " << Question_Score << " �� " << Question_Score << "!" << endl;
		cout << endl;
	}
	else
	{
		cout << endl;
		cout << "��, ��� ����� �������" << endl;
		cout << "�����: 0" << " �� " << Question_Score << "!" << endl;
		cout << "���������� ����� " << Correct_Answer << "." << endl;
		cout << endl;
	}

}