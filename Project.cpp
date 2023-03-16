#include <iostream>
#include <string>
#include <windows.h>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> names;
vector<int> scores;
int correct_answer = 0;
int hints_used = 0;
int total_score=0;
string name;
string topic;
int choice;
bool playAgain=true;
bool ask_for_name = true;
void hints();
void menu();
int start();
void howtoplay();
void allthequiz();

void hints()
{
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     **   A: Audience help            **" << endl;
	cout << "                                                                                     **   B: Answer 2 times           **" << endl;
	cout << "                                                                                     **   C: Change the question      **" << endl;                                                                                  
	cout << "                                                                                     ***********************************" << endl;
}

void quiz1()
{
    cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "      *****" << endl;
	cout << "                                                                                     ***********************************" << endl; 
	cout << "\t\t\t\t\t Q U E S T I O N No. 1" << endl;
    cout << "What is the name of bully Gian's sister?" << endl;
    cout << "[1] Hannah"<<endl;
    cout << "[2] Giani" << endl;
    cout << "[3] Jaiko" << endl;
    cout << "[4] Artisia" << endl;
		string answer;
		cout << endl;
    	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		//limiting the answers of the user
		if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
		{
			if (answer == "3")
			{
				total_score += 10;
				correct_answer += 1;
				cout << "C O R R E C T   A N S W E R !!!" << endl;
				cout << "You got 10 points out of 10." << endl;
			}
			else if (answer == "1" || answer == "2" || answer == "4")
			{
				cout << "W R O N G  A N S W E R !!!" << endl;
				cout << "You got 0 points out of 10." << endl;
			}
			cout << endl;
			system("pause");//คำสั่งที่จะหยุดการทำงานไว้จนกว่าผู้ใช้จะกดปุ่มบนแป้นพิมพ์
			system("cls");
		}
		else //ถ้าไม่ได้ตอบ 1 2 3 4 โปรแกรมจะให้ตอบให้ถูกอีกครั้ง
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
            quiz1();
			
		}
}
void quiz2() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 2" << endl;
	cout << "Who is the only main female character in the show whom Nobita likes very much?" << endl;
    cout << "[1] Ran" << endl;
    cout << "[2] Christine Goda" << endl;
    cout << "[3] Miyoko" << endl;
    cout << "[4] Shizuka Minamoto" << endl;
	string answer;
	cout<<endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "4")
		{
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
			cout << endl;
			system("pause");
			system("cls");
		}
	else
	{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			quiz2();
	}
	
}
void quiz3() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 3" << endl;
    cout << "What is the color of Dorami, Doraemon's sister?" << endl;
    cout << "[1] Pink" << endl;
    cout << "[2] Orange" << endl;
    cout << "[3] Purple" << endl;
    cout << "[4] Yellow" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "4") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	else
	{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			quiz3();
	}
}
void quiz4() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 4" << endl; 
	cout << "What is Gian's passion?" << endl;
    cout << "[1] Dancing" << endl;
    cout << "[2] Karate" << endl;
    cout << "[3] Sumo Wrestling" << endl;
    cout << "[4] Singing" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "4") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	else
	{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			quiz4();
	}
}
void quiz5() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 5" << endl; 
	cout << "Who is Gian's sidekick?" << endl;
    cout << "[1] Dekisugi;" << endl;
    cout << "[2] Suneo" << endl;
    cout << "[3] Jaiko" << endl;
    cout << "[4] Nobita" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "2") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	else
	{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			quiz5();
	}
}
void quiz6() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 6" << endl; 
	cout << "Whom or what is Doraemon scared of?" << endl;
    cout << "[1] Nobita" << endl;
    cout << "[2] Rats" << endl;
    cout << "[3] Suneo" << endl;
    cout << "[4] Cats" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "2") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	else
	{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			quiz6();
	}
}
void quiz7() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 7" << endl; 
	cout << "What is Doraemon?" << endl;
    cout << "[1] an adventure storybook series!" << endl;
    cout << "[2] an adventure-fiction cartoon series!" << endl;
    cout << "[3] both!" << endl;
    cout << "[4] neither!" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "4") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	else
	{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			quiz7();
	}
}
void quiz8() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	hints();
	cout << "\t\t\t\t\t Q U E S T I O N No. 8" << endl;
    cout << "Does Doraemon have any siblings?" << endl;
    cout << "[1] True" << endl;
    cout << "[2] False" << endl;
    cout << "[3] Unevaluatable" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3")
	{
		if (answer == "1") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
			
		}
		else if (answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
			
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	else if (answer == "A" || answer == "a")
	{
		hints_used++;
		cout << endl;
		cout << "Audience prediction is...  " << endl;
		cout << "[1] 40%" << endl;
		cout << "[2] 25%" << endl;
		cout << "[3] 35%" << endl;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		if (answer == "1") {
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl;

		}
		else if (answer == "2" || answer == "3" )
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
	else if (answer == "B" || answer == "b")
	{
		hints_used++;
		system("cls");
		cout << "Now you have chance to choose two answers. If one of them will correct you will take 5 points." << endl;
	    cout << "\t\t\t\t\tQ U E S T I O N  No. 8" << endl;
	    cout << "Does Doraemon have any siblings?" << endl;
	    cout << "[1] True" << endl;
	    cout << "[2] False" << endl;
	    cout << "[3] Unevaluatable" << endl;
		string answer1, answer2;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR FIRST CHOICE: ";
		cin >> answer1;
		cout << "\t\t\t\t\tENTER YOUR SECOND CHOICE: ";
		cin >> answer2;
		if (answer1 == "1" || answer2 == "1")
		{
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl;
		}
		else
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
		
	}
	else if (answer == "C" || answer == "c") {
	hints_used++;
	system("cls");
	cout << "\t T H I S   I S  A  N E W   Q U E S T I O N. Y O U  W I L L  G E T  5  P O I N T S. " << endl;
	cout << endl;
	cout << "Who does Shizuka have a serious crush on?" << endl;
	cout << "[1] Nobody" << endl;
	cout << "[2] Nobita" << endl;
	cout << "[3] Dekisugi" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1") {
		total_score += 5;
		correct_answer += 1;
		cout << "C O R R E C T   A N S W E R !!!" << endl;
		cout << "You got 5 points out of 5." << endl;

	}
	else if (answer == "2" || answer == "3")
	{
		cout << "W R O N G  A N S W E R !!!" << endl;
		cout << "You got 0 points out of 5." << endl;

	}
		cout << endl;
		system("pause");
		system("cls");
	}
	else
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			quiz8();
		}
}
void quiz9() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	hints();
	cout << "\t\t\t\t\t Q U E S T I O N No. 9" << endl;
    cout << "Gian always picks on Nobita. Who helps him(unwillingly) to do this?" << endl;
    cout << endl;
    cout << "[1] Suneo" << endl;
    cout << "[2] Dekisugi" << endl;
    cout << "[3] Doraemon" << endl;
    cout << "[4] Nobisuke" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "1") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
			
		}
		else if (answer == "2" || answer == "3" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
			
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	else if (answer == "A" || answer == "a")
	{
		hints_used++;
		cout << endl;
		cout << "Audience prediction is...  " << endl;
		cout << "[1] 30%" << endl;
		cout << "[2] 25%" << endl;
		cout << "[3] 20%" << endl;
		cout << "[4] 25%" << endl;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		if (answer == "1") {
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl;

		}
		else if (answer == "2" || answer == "3" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
	else if (answer == "B" || answer == "b")
	{
		hints_used++;
		system("cls");
		cout << "Now you have chance to choose two answers. If one of them will correct you will take 5 points." << endl;
	    cout << "\t\t\t\t\tQ U E S T I O N  No. 9" << endl;
	    cout << "Gian always picks on Nobita. Who helps him(unwillingly) to do this?" << endl;
	    cout << endl;
	    cout << "[1] Suneo" << endl;
        cout << "[2] Dekisugi" << endl;
        cout << "[3] Doraemon" << endl;
        cout << "[4] Nobisuke" << endl;
		string answer1, answer2;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR FIRST CHOICE: ";
		cin >> answer1;
		cout << "\t\t\t\t\tENTER YOUR SECOND CHOICE: ";
		cin >> answer2;
		if (answer1 == "1" || answer2 == "1")
		{
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl;
		}
		else
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
		
	}
	else if (answer == "C" || answer == "c")
	{
	hints_used++;
	system("cls");
	cout << "\t T H I S   I S  A  N E W   Q U E S T I O N. Y O U  W I L L  G E T  5  P O I N T S. " << endl;
	cout << endl;
	cout << "Doraemon is afraid of mice. Why?" << endl;
    cout << "[1] He had his ears bitten off by a mouse" << endl;
    cout << "[2] He's not afraid of mice" << endl;
    cout << "[3] Because he's an elephant" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1") {
		total_score += 5;
		correct_answer += 1;
		cout << "C O R R E C T   A N S W E R !!!" << endl;
		cout << "You got 5 points out of 5." << endl;

	}
	else if (answer == "2" || answer == "3")
	{
		cout << "W R O N G  A N S W E R !!!" << endl;
		cout << "You got 0 points out of 5." << endl;

	}
		cout << endl;
		system("pause");
		system("cls");
	}
	else
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			quiz9();
		}
}
void quiz10() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	hints();
	cout << "\t\t\t\t\t Q U E S T I O N No. 10" << endl;
    cout << "Which is the first Doraemon film?" << endl;
    cout << "[1] Nobita's Little Space War" << endl;
    cout << "[2] The Record of Nobita's Spaceblazer" << endl;
    cout << "[3] Nobita's Dinosaur" << endl;
    cout << "[4] Nobita's Great Adventure in the South Seas" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "3") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
			
		}
		else if (answer == "1" || answer == "2" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
			
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	else if (answer == "A" || answer == "a")
	{
		hints_used++;
		cout << endl;
		cout << "Audience prediction is...  " << endl;
		cout << "[1] 50%" << endl;
		cout << "[2] 25%" << endl;
		cout << "[3] 10%" << endl;
		cout << "[4] 15%" << endl;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		if (answer == "1") {
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl;

		}
		else if (answer == "2" || answer == "3" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
	else if (answer == "B" || answer == "b")
	{
		hints_used++;
		system("cls");
		cout << "Now you have chance to choose two answers. If one of them will correct you will take 5 points." << endl;
	    cout << "\t\t\t\t\tQ U E S T I O N  No. 10" << endl;
	    cout << "Which is the first Doraemon film?" << endl;
        cout << "[1] Nobita's Little Space War" << endl;
        cout << "[2] The Record of Nobita's Spaceblazer" << endl;
        cout << "[3] Nobita's Dinosaur" << endl;
        cout << "[4] Nobita's Great Adventure in the South Seas" << endl;
		string answer1, answer2;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR FIRST CHOICE: ";
		cin >> answer1;
		cout << "\t\t\t\t\tENTER YOUR SECOND CHOICE: ";
		cin >> answer2;
		if (answer1 == "3" || answer2 == "3")
		{
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl;
		}
		else
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
		
	}
	else if (answer == "C" || answer == "c") {
	hints_used++;
	system("cls");
	cout << "\t T H I S   I S  A  N E W   Q U E S T I O N. Y O U  W I L L  G E T  5  P O I N T S. " << endl;
	cout << endl;
	cout << "Last question. What name did Nobita give the puppy he found in one episode/book?" << endl;
	cout << "[1] Hachi" << endl;
	cout << "[2] Ichi" << endl;
	cout << "[3] Papi" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "2") {
		total_score += 5;
		correct_answer += 1;
		cout << "C O R R E C T   A N S W E R !!!" << endl;
		cout << "You got 5 points out of 5." << endl;

	}
	else if (answer == "1" || answer == "3")
	{
		cout << "W R O N G  A N S W E R !!!" << endl;
		cout << "You got 0 points out of 5." << endl;

	}
		cout << endl;
		system("pause");
		system("cls");
	}
	else
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			quiz10();
		}
		 scores.push_back(total_score);
}

void onequiz1() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "      *****" << endl;
	cout << "                                                                                     ***********************************" << endl; 
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 1"<< endl;
		cout << "Who is Big Mom's Second Son?" << endl;
		cout << "[1]  Charlotte Katakuri"<<endl;
		cout << "[2]  Charlotte Perospero" << endl;
		cout << "[3]  Smoothie" << endl;
		cout << "[4]  Luffy" << endl;
		string answer;
		cout << endl;
    	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		//limiting the answers of the user
		if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
		{
			if (answer == "1")
			{
				total_score += 10;
				correct_answer += 1;
				cout << "C O R R E C T   A N S W E R !!!" << endl;
				cout << "You got 10 points out of 10." << endl;
			}
			else if (answer == "3" || answer == "2" || answer == "4")
			{
				cout << "W R O N G  A N S W E R !!!" << endl;
				cout << "You got 0 points out of 10." << endl;
			}
			cout << endl;
			system("pause");
			system("cls");
		}
		else 
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			onequiz1();
		}
}
void onequiz2() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 2" << endl;
	cout << "WWho is Luffy's father?" << endl;
	cout << "[1] Portgas D. Ace" << endl;
	cout << "[2] Monkey D. Roger" << endl;
	cout << "[3] Gol D. Roger" << endl;
	cout << "[4] Monkey D. Dragon" << endl;
	string answer;
	cout<<endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "4")
		{
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
			cout << endl;
			system("pause");
			system("cls");
		}
	else
	{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			onequiz2();
	}
	
}
void onequiz3() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 3" << endl;
	cout << "How long was the time skip?" << endl;
	cout << "[1] 1/2 a year" << endl;
	cout << "[2] 3 years" << endl;
	cout << "[3] 2 years" << endl;
	cout << "[4] 1 1/2 years" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "3") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "2" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	else
	{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			onequiz3();
	}
}
void onequiz4() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 4" << endl; 
	cout << "Who trained Luffy and where?" << endl;
	cout << "[1] Shanks, north of the Island of Women" << endl;
	cout << "[2] Rayleigh, south of the Island of Women" << endl;
	cout << "[3] Rayleigh, north of the Island of Women" << endl;
	cout << "[4] Jimbei, south of the Island of Women" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "3") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "2" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	else
	{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			onequiz4();
	}
}
void onequiz5() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 5" << endl; 
	cout << "how is the pirate King?" << endl;
	cout << "[1] luffy" << endl;
	cout << "[2] gol d roger " << endl;
	cout << "[3] zoro" << endl;
	cout << "[4] non of above" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "4") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "3" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
		else
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			onequiz5();
		}
	
}
void onequiz6() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 6" << endl;
	cout << "Who are Luffy's Brothers?" << endl;
	cout << "[1] Ace" << endl;
	cout << "[2] Sabo" << endl;
	cout << "[3] Neitheir" << endl;
	cout << "[4] Both" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "4") 
		{
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
			
		}
		else if (answer == "1" || answer == "3" || answer == "2")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
			
		}
			cout << endl;
			system("pause");
			system("cls");
		}
		else
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			onequiz6();
		}
}
void onequiz7() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 7" << endl;  
	cout << "What is name devil fruit of Bartholomew Kuma?" << endl;
	cout << "[1] Gura Gura no Mi" << endl;
	cout << "[2] Hie Hie no Mi" << endl;
	cout << "[3] Mera Mera no Mi" << endl;
	cout << "[4] Nikyu Nikyu no Mi" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "4") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "3" || answer == "2")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
			
		}
			cout << endl;
			system("pause");
			system("cls");
	}
		else
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			onequiz7();
		}
}
void onequiz8() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	hints();
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 8" << endl;
	cout << "Usopp is drew the FINAL vesion of luffy's flag" << endl;
	cout << "[1] True" << endl;
	cout << "[2] False" << endl;
	cout << "[3] Don't know" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	//limiting the answers of the user
	if (answer == "1" || answer == "2" || answer == "3" )
	{
		if (answer == "1") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
			
		}
		else if (answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
			
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	//if cases for the hints
	else if (answer == "A" || answer == "a")
	{
		hints_used++;
		cout << endl;
		cout << "Audience prediction is...  " << endl;
		cout << "[1] 50%" << endl;
		cout << "[2] 10%" << endl;
		cout << "[3] 40%" << endl;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		if (answer == "1") {
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 5." << endl;

		}
		else if (answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;

		}

		cout << endl;
		system("pause");
		system("cls");
	}
	else if (answer == "B" || answer == "b")
	{
		hints_used++;
		system("cls");
		cout << "Now you have chance to choose two answers. If one of them will correct you will take 5 points." << endl;
		cout << "\t\t\t\t\tQ U E S T I O N  No. 8" << endl;
		cout << "Usopp is drew the FINAL vesion of luffy's flag?" << endl;
		cout << "[1] True" << endl;
		cout << "[2] False" << endl;
		cout << "[3] Don't know" << endl;
		string answer1, answer2;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR FIRST CHOICE: ";
		cin >> answer1;
		cout << "\t\t\t\t\tENTER YOUR SECOND CHOICE: ";
		cin >> answer2;
		if (answer1 == "1" || answer2 == "1")
		{
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl; 
		}
		else 
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
	else if (answer == "C" || answer == "c"){
        hints_used++;
		system("cls");
		cout << "\t T H I S   I S  A  N E W   Q U E S T I O N. Y O U  W I L L  G E T  5  P O I N T S. " << endl;
		cout << endl;
		cout << "What fruit did Monkey D. Luffy eat?" << endl;
		cout << "[1] Gum-Gum Fruit" << endl;
		cout << "[2] Mythical Creature Model Nika Fruit" << endl;
		cout << "[3] Kilo-Kilo Fruit" << endl;
		string answer;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
			if (answer == "2") {
				total_score += 5;
				correct_answer += 1;
				cout << "C O R R E C T   A N S W E R !!!" << endl;
				cout << "You got 5 points out of 5." << endl;

			}
			else if (answer == "1" || answer == "3")
			{
				cout << "W R O N G  A N S W E R !!!" << endl;
				cout << "You got 0 points out of 5." << endl;

			}
		cout << endl;
		system("pause");
		system("cls");
	}

	else
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			onequiz8();
		}
}
void onequiz9() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	hints();
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 9" << endl;
	cout << "The body of water where majority of the story takes place is?" << endl;
	cout << endl;
	cout << "[1] Calm Belt" << endl;
	cout << "[2] East Blue" << endl;
	cout << "[3] North Blue" << endl;
	cout << "[4] Grand Line" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "4") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
			
		}
		else if (answer == "2" || answer == "3" || answer == "1")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
			
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	else if (answer == "A" || answer == "a")
	{
		hints_used++;
		cout << endl;
		cout << "Audience prediction is...  " << endl;
		cout << "[1] 25%" << endl;
		cout << "[2] 25%" << endl;
		cout << "[3] 20%" << endl;
		cout << "[4] 30%" << endl;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		if (answer == "4") {
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl;

		}
		else if (answer == "2" || answer == "3" || answer == "1")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
	else if (answer == "B" || answer == "b")
	{
		hints_used++;
		system("cls");
		cout << "Now you have chance to choose two answers. If one of them will correct you will take 5 points." << endl;
		cout << "\t\t\t\t\tQ U E S T I O N  No. 9" << endl;
		cout << "The body of water where majority of the story takes place is?" << endl;
		cout << endl;
		cout << "[1] Calm Belt" << endl;
	    cout << "[2] East Blue" << endl;
	    cout << "[3] North Blue" << endl;
	    cout << "[4] Grand Line" << endl;
		string answer1, answer2;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR FIRST CHOICE: ";
		cin >> answer1;
		cout << "\t\t\t\t\tENTER YOUR SECOND CHOICE: ";
		cin >> answer2;
		if (answer1 == "4" || answer2 == "4")
		{
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl;
		}
		else
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
		
	}
	else if (answer == "C" || answer == "c")
	{
	hints_used++;
	system("cls");
	cout << "\t T H I S   I S  A  N E W   Q U E S T I O N. Y O U  W I L L  G E T  5  P O I N T S. " << endl;
	cout << endl;
	cout << "The Straw Hats have how many Devil Fruit users?" << endl;
	cout << "[1] 4" << endl;
	cout << "[2] 3" << endl;
	cout << "[3] 5" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1") {
		total_score += 5;
		correct_answer += 1;
		cout << "C O R R E C T   A N S W E R !!!" << endl;
		cout << "You got 5 points out of 5." << endl;

	}
	else if (answer == "1" || answer == "1")
	{
		cout << "W R O N G  A N S W E R !!!" << endl;
		cout << "You got 0 points out of 5." << endl;

	}
		cout << endl;
		system("pause");
		system("cls");
	}
	else
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			onequiz9();
		}
}
void onequiz10() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	hints(); 
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 10" << endl;
	cout << "Nami is the Straw Hats's?" << endl;
	cout << "[1] Doctor" << endl;
	cout << "[2] Navigator" << endl;
	cout << "[3] Archaeologist" << endl;
	cout << "[4] Cook" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "2") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "3" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
	else if (answer == "A" || answer == "a")
	{
		hints_used++;
		cout << endl;
		cout << "Audience prediction is...  " << endl;
		cout << "[1] 20%" << endl;
		cout << "[2] 30%" << endl;
		cout << "[3] 30%" << endl;
		cout << "[4] 20%" << endl;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		if (answer == "2") {
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl;
		}
		else if (answer == "1" || answer == "4" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;

		}
		cout << endl;
		system("pause");
		system("cls");
	}
	else if (answer == "B" || answer == "b")
	{
		hints_used++;
		system("cls");
		cout << "Now you have chance to choose two answers. If one of them will correct you will take 5 points." << endl;
		cout << "\t\t\t\t\tQ U E S T I O N  No. 10" << endl;
		cout << "Nami is the Straw Hats's?" << endl;
	    cout << "[1] Doctor" << endl;
	    cout << "[2] Navigator" << endl;
	    cout << "[3] Archaeologist" << endl;
	    cout << "[4] Cook" << endl;
		string answer1, answer2;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR FIRST CHOICE: ";
		cin >> answer1;
		cout << "\t\t\t\t\tENTER YOUR SECOND CHOICE: ";
		cin >> answer2;
		if (answer1 == "2" || answer2 == "2")
		{
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl;
		}
		else
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
	else if (answer == "C" || answer == "c")
	{
	hints_used++;
		system("cls");
		cout << "\t T H I S   I S  A  N E W   Q U E S T I O N. Y O U  W I L L  G E T  '5'  P O I N T S. " << endl;
		cout << endl;
		cout << "Luffy is originally from which ocean?" << endl;
		cout << "[1] North Blue" << endl;
		cout << "[2] West Blue" << endl;
		cout << "[3] East Blue" << endl;
		string answer;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		if (answer == "3") {
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl;

		}
		else if (answer == "1" || answer == "2")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;

		}
		cout << endl;
		system("pause");
		system("cls");
	}
	else
	{
		system("cls");
		cout << "\t\t*************************************************************************************" << endl;
		cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
		cout << "\t\t*************************************************************************************" << endl;
		cout << endl;
		onequiz10();
	}
	scores.push_back(total_score);
}

void dequiz1() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "      *****" << endl;
	cout << "                                                                                     ***********************************" << endl; 
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 1"<< endl;
		cout << "How many siblings does Tanjiro Kamado have in total?" << endl;
		cout << "[1] 4"<<endl;
		cout << "[2] 6" << endl;
		cout << "[3] 5" << endl;
		cout << "[4] 7" << endl;
		string answer;
		cout << endl;
    	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		//limiting the answers of the user
		if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
		{
			if (answer == "2")
			{
				total_score += 10;
				correct_answer += 1;
				cout << "C O R R E C T   A N S W E R !!!" << endl;
				cout << "You got 10 points out of 10." << endl;
			}
			else if (answer == "1" || answer == "3" || answer == "4")
			{
				cout << "W R O N G  A N S W E R !!!" << endl;
				cout << "You got 0 points out of 10." << endl;
			}
			cout << endl;
			system("pause");
			system("cls");
		}
		else 
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			dequiz1();
		}
}
void dequiz2() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 2" << endl;
	cout << "Which of the characters below have claimed that they are [a living being who's infinitely close to perfection]?" << endl;
	cout << "[1] Rui" << endl;
	cout << "[2] Akaza" << endl;
	cout << "[3] Ruka Rengoku" << endl;
	cout << "[4] Muzan kibutsuji" << endl;
	string answer;
	cout<<endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "4")
		{
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
			cout << endl;
			system("pause");
			system("cls");
		}
	else
	{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			dequiz2();
	}
	
}
void dequiz3() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 3" << endl;
	cout << "Who has already been revealed to have a very hard head?" << endl;
	cout << "[1] Kamado Nezuko" << endl;
	cout << "[2] Tanjiro's mother (unknown writer)" << endl;
	cout << "[3] Usui Tengen" << endl;
	cout << "[4] Agatsuma Zenitsu" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "2") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "4" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	else
	{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			dequiz3();
	}
}
void dequiz4() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 4" << endl; 
	cout << "Which waning beast appears in the Eternal Railroad" << endl;
	cout << "[1] No waning beasts appeared at all." << endl;
	cout << "[2] Rui" << endl;
	cout << "[3] Akasa" << endl;
	cout << "[4] Enmu" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "4") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	else
	{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			dequiz4();
	}
}
void dequiz5() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 5" << endl; 
	cout << "Who is known as the [Demon Child]?" << endl;
	cout << "[1] Akaza" << endl;
	cout << "[2] Enmu" << endl;
	cout << "[3] Obanai lguro" << endl;
	cout << "[4] Genyaa shinazugawa" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "2") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "3" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
		else
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			dequiz5();
		}
	
}
void dequiz6() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 6" << endl;
	cout << "Who does Iguro Obanai secretly like?" << endl;
	cout << "[1] Kamado Tanjiro" << endl;
	cout << "[2] Kanroji Mitsuri2" << endl;
	cout << "[3] Kojo Shinobu" << endl;
	cout << "[4] Tomioka Giyu" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "2") 
		{
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
			
		}
		else if (answer == "1" || answer == "3" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
			
		}
			cout << endl;
			system("pause");
			system("cls");
		}
		else
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			dequiz6();
		}
}
void dequiz7() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 7" << endl;  
	cout << "Who is Zenitsu's wife?" << endl;
	cout << "[1] Suma" << endl;
	cout << "[2] Kamado Nezuko" << endl;
	cout << "[3] Makio" << endl;
	cout << "[4] Zenitsu has no wife;" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "2") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "3" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
			
		}
			cout << endl;
			system("pause");
			system("cls");
	}
		else
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			dequiz7();
		}
}
void dequiz8() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	hints();
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 8" << endl;
	cout << "What happened to Nezuko? " << endl;
	cout << "[1] She became a government official" << endl;
	cout << "[2] She become a demon" << endl;
	cout << "[3] She married a fighter" << endl;
	cout << "[4] None of the above" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	//limiting the answers of the user
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4" )
	{
		if (answer == "2") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
			
		}
		else if (answer == "1" || answer == "3" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
			
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	//if cases for the hints
	else if (answer == "A" || answer == "a")
	{
		hints_used++;
		cout << endl;
		cout << "Audience prediction is...  " << endl;
		cout << "[1] 15%" << endl;
		cout << "[2] 80%" << endl;
		cout << "[3] 10%" << endl;
		cout << "[3] 5%" << endl;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		if (answer == "2") {
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 5." << endl;

		}
		else if (answer == "1" || answer == "3" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;

		}

		cout << endl;
		system("pause");
		system("cls");
	}
	else if (answer == "B" || answer == "b")
	{
		hints_used++;
		system("cls");
		cout << "Now you have chance to choose two answers. If one of them will correct you will take 5 points." << endl;
		cout << "\t\t\t\t\t  Q U E S T I O N  No. 8" << endl;
	    cout << "What happened to Nezuko? " << endl;
	    cout << "[1] She became a government official" << endl;
	    cout << "[2] She become a demon" << endl;
	    cout << "[3] She married a fighter" << endl;
	    cout << "[4] None of the above" << endl;
		string answer1, answer2;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR FIRST CHOICE: ";
		cin >> answer1;
		cout << "\t\t\t\t\tENTER YOUR SECOND CHOICE: ";
		cin >> answer2;
		if (answer1 == "2" || answer2 == "2")
		{
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl; 
		}
		else 
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
	else if (answer == "C" || answer == "c"){
        hints_used++;
		system("cls");
		cout << "\t T H I S   I S  A  N E W   Q U E S T I O N. Y O U  W I L L  G E T  5  P O I N T S. " << endl;
		cout << endl;
		cout << "Which of these is the correct name for Shinobu Kocho’s Breathing Style?" << endl;
		cout << "[1] Pest Breathing" << endl;
		cout << "[2] Wisteria Breathing" << endl;
		cout << "[3] Poison Breathing" << endl;
		cout << "[4] Insect Breathing" << endl;
		string answer;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
			if (answer == "4") {
				total_score += 5;
				correct_answer += 1;
				cout << "C O R R E C T   A N S W E R !!!" << endl;
				cout << "You got 5 points out of 5." << endl;

			}
			else if (answer == "1" || answer == "2"|| answer == "3")
			{
				cout << "W R O N G  A N S W E R !!!" << endl;
				cout << "You got 0 points out of 5." << endl;

			}
		cout << endl;
		system("pause");
		system("cls");
	}

	else
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			dequiz8();
		}
}
void dequiz9() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	hints();
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 9" << endl;
	cout << "How did Zenitsu hair color change? " << endl;
	cout << "[1] He was struck by lightning." << endl;
	cout << "[2] He become a demon" << endl;
	cout << "[3] A demon cursed him." << endl;
	cout << "[4] He dyed it for attention." << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	//limiting the answers of the user
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4" )
	{
		if (answer == "1") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
			
		}
		else if (answer == "2" || answer == "3" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
			
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	//if cases for the hints
	else if (answer == "A" || answer == "a")
	{
		hints_used++;
		cout << endl;
		cout << "Audience prediction is...  " << endl;
		cout << "[1] 50%" << endl;
		cout << "[2] 40%" << endl;
		cout << "[3] 5%" << endl;
		cout << "[3] 5%" << endl;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		if (answer == "1") {
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 5." << endl;

		}
		else if (answer == "2" || answer == "3" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;

		}

		cout << endl;
		system("pause");
		system("cls");
	}
	else if (answer == "B" || answer == "b")
	{
		hints_used++;
		system("cls");
		cout << "\t\t\t\t\t  Q U E S T I O N  No. 9" << endl;
	    cout << "How did Zenitsu hair color change? " << endl;
	    cout << "[1] He was struck by lightning." << endl;
	    cout << "[2] He become a demon" << endl;
	    cout << "[3] A demon cursed him." << endl;
	    cout << "[4] He dyed it for attention." << endl;
		string answer1, answer2;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR FIRST CHOICE: ";
		cin >> answer1;
		cout << "\t\t\t\t\tENTER YOUR SECOND CHOICE: ";
		cin >> answer2;
		if (answer1 == "1" || answer2 == "1")
		{
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl; 
		}
		else 
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
	else if (answer == "C" || answer == "c"){
        hints_used++;
		system("cls");
		cout << "\t T H I S   I S  A  N E W   Q U E S T I O N. Y O U  W I L L  G E T  5  P O I N T S. " << endl;
		cout << endl;
		cout << "What is the name of Tanjiro Kasugai Crow?" << endl;
		cout << "[1] Ukogi" << endl;
		cout << "[2] Aleister Crowley" << endl;
		cout << "[3] Matsuemon Tennoji" << endl;
		cout << "[4] Chuntaro" << endl;
		string answer;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
			if (answer == "3") {
				total_score += 5;
				correct_answer += 1;
				cout << "C O R R E C T   A N S W E R !!!" << endl;
				cout << "You got 5 points out of 5." << endl;

			}
			else if (answer == "1" || answer == "2"|| answer == "4")
			{
				cout << "W R O N G  A N S W E R !!!" << endl;
				cout << "You got 0 points out of 5." << endl;

			}
		cout << endl;
		system("pause");
		system("cls");
	}

	else
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			dequiz9();
		}
}
void dequiz10() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	hints();
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 10" << endl;
	cout << "How many members of the Spider Family did the Demon Slayer Corps encounter? " << endl;
	cout << "[1] 8" << endl;
	cout << "[2] 12" << endl;
	cout << "[3] 6" << endl;
	cout << "[4] 5" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4" )
	{
		if (answer == "4") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
			
		}
		else if (answer == "1" || answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
			
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	else if (answer == "A" || answer == "a")
	{
		hints_used++;
		cout << endl;
		cout << "Audience prediction is...  " << endl;
		cout << "[1] 20%" << endl;
		cout << "[2] 30%" << endl;
		cout << "[3] 25%" << endl;
		cout << "[3] 25%" << endl;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		if (answer == "4") {
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 5." << endl;

		}
		else if (answer == "1" || answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;

		}

		cout << endl;
		system("pause");
		system("cls");
	}
	else if (answer == "B" || answer == "b")
	{
		hints_used++;
		system("cls");
		cout << "\t\t\t\t\t  Q U E S T I O N  No. 10" << endl;
	    cout << "How many members of the Spider Family did the Demon Slayer Corps encounter? " << endl;
	    cout << "[1] 8" << endl;
	    cout << "[2] 12" << endl;
	    cout << "[3] 6" << endl;
	    cout << "[4] 5" << endl;
		string answer1, answer2;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR FIRST CHOICE: ";
		cin >> answer1;
		cout << "\t\t\t\t\tENTER YOUR SECOND CHOICE: ";
		cin >> answer2;
		if (answer1 == "4" || answer2 == "4")
		{
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl; 
		}
		else 
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
	else if (answer == "C" || answer == "c"){
        hints_used++;
		system("cls");
		cout << "\t T H I S   I S  A  N E W   Q U E S T I O N. Y O U  W I L L  G E T  5  P O I N T S. " << endl;
		cout << endl;
		cout << "What name does Muzan Kibutsuji wife call him by?" << endl;
		cout << "[1] Muichiro" << endl;
		cout << "[2] Tsukihiko" << endl;
		cout << "[3] Takaharu" << endl;
		cout << "[4] Sanemi" << endl;
		string answer;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
			if (answer == "2") {
				total_score += 5;
				correct_answer += 1;
				cout << "C O R R E C T   A N S W E R !!!" << endl;
				cout << "You got 5 points out of 5." << endl;

			}
			else if (answer == "1" || answer == "3"|| answer == "4")
			{
				cout << "W R O N G  A N S W E R !!!" << endl;
				cout << "You got 0 points out of 5." << endl;

			}
		cout << endl;
		system("pause");
		system("cls");
	}

	else
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			dequiz10();
		}
		scores.push_back(total_score);
}


void menu(){
     // Display the main menu options
    system("color 0B");//Color XY,X = สีของพื้นหลัง,Y=สีของข้อความ
    system("cls");
	        cout<<"\n\n\n\t\t\t\t   __      __   ___  | |   ___    ___    _ __ ___     ___  "<<endl;
			cout<<"\t\t\t\t   \\ \\ /\\ / /  / _ \\ | |  / __|  / _ \\  | '_ ` _ \\   / _ \\ "<<endl;
			cout<<"\t\t\t\t    \\ V  V /  |  __/ | | | (__  | (_) | | | | | | | |  __/ "<<endl;
			cout<<"\t\t\t\t     \\_/\\_/    \\___| |_|  \\___|  \\___/  |_| |_| |_|  \\___| "<<endl;

	cout << endl;
    cout << "\t\t\t\t\t\tWelcome to the Quiz Game!\t\t\t\t\t\t\t\t\t\t\t\t" << endl;
    cout << "\t\t\t\t\t\t  1. Start Game\t\t\t\t\t\t\t\t\t\t\t\t" << endl;
    cout << "\t\t\t\t\t\t  2. How to Play\t\t\t\t\t\t\t\t\t\t\t\t" << endl;
    cout << "\t\t\t\t\t\t  3. Exit\t\t\t\t\t\t\t\t\t\t\t\t" << endl;

    cout <<"\t\t\t\t\t\tEnter your choice: ";
    cin >> choice;

}

int start() {
   if (cin.get() == '\n') {
		system("cls");//โปรแกรมล้างจอภาพใหม่ Clear Screen เหมือนกับการ run โปรแกรมใหม่ 
		cout << "\t\t\t\t\tI N F O R M A T I O N   T A B L E\n\n";
		
        cout << "Enter your name: ";
        getline(cin, name);
        names.push_back(name);
	
		cout << "Which topic would you like to play?"<<endl;
		cout << "[1]. Doraemon" << endl;
		cout << "[2]. Onepiece" << endl;
		cout << "[3]. Demon slayer" << endl;
		do {
			cout << "Choose which topic you want to play: ";
			cin >> topic;
			cin.clear();
		} while (topic != "1"&&topic!="2"&&topic!="3");
		string Respond;
		cout << endl;
		cout << "Are you ready to take the Quiz " << name << " ? Yes = 'Yes'/No = 'Any key'. " << endl;
		cout << "Your choice: ";
		cin >> Respond;
		if (Respond == "yes" || Respond == "Yes")
		{
			cout << endl;
			cout << "OK, Good Like!!! " << endl;
			system("cls");
			return 1;
		}
		else
		{
			cout << "OK. Goodbye." << endl;
			system("exit");//เป็นการบังคับให้โปรแกรมหยุดทำงานทันที
			return 0;
		}
	}
	else
		cout << "I meant ONLY the ENTER key... Oh well.\n";
	return 0;
}    

void congrate() {
	system("cls");
	system("color 0A");
	       cout<<"\t\t                 iWs                                 ,W["<<endl;
           cout<<"\t\t                 W@@W.                              g@@["<<endl;
           cout<<"\t\t                i@@@@@s                           g@@@@W"<<endl;
           cout<<"\t\t                @@@@@@@W.                       ,W@@@@@@"<<endl;
           cout<<"\t\t               ]@@@@@@@@@W.   ,_______.       ,m@@@@@@@@i"<<endl;
           cout<<"\t\t              ,@@@@@@@@@@@@W@@@@@@@@@@@@@@mm_g@@@@@@@@@@["<<endl;
           cout<<"\t\t              d@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
		   cout<<"\t\t             i@@@@@@@A*~~~~~VM@@@@@@@@@@Af~~~~V*@@@@@@@@@i"<<endl;
           cout<<"\t\t             @@@@@A~          'M@@@@@@A`         'V@@@@@@b"<<endl;
           cout<<"\t\t            d@@@*`              Y@@@@f              V@@@@@."<<endl;
           cout<<"\t\t           i@@A`                 M@@P                 V@@@b"<<endl;
           cout<<"\t\t          ,@@A                   '@@                   !@@@."<<endl;
           cout<<"\t\t          W@P                     @[                    '@@W"<<endl;
           cout<<"\t\t         d@@            ,         ]!                     ]@@b"<<endl;
		   cout<<"\t\t        g@@[          ,W@@s       ]       ,W@@s           @@@i"<<endl;
           cout<<"\t\t       i@@@[          W@@@@i      ]       W@@@@i          @@@@i"<<endl;
           cout<<"\t\t      i@@@@[          @@@@@[      ]       @@@@@[          @@@@@i"<<endl;
           cout<<"\t\t     g@@@@@[          @@@@@!      @[      @@@@@[          @@@@@@i"<<endl;
           cout<<"\t\t    d@@@@@@@          !@@@P      iAW      !@@@A          ]@@@@@@@i"<<endl;
           cout<<"\t\t   W@@@@@@@@b          '~~      ,Z Yi      '~~          ,@@@@@@@@@"<<endl;
           cout<<"\t\t   '*@@@@@@@@s                  Z`  Y.                 ,W@@@@@@@@A"<<endl;
           cout<<"\t\t     'M@@@*f**W.              ,Z     Vs               ,W*~~~M@@@f"<<endl;
           cout<<"\t\t       'M@    'Vs.          ,z~       'N_           ,Z~     d@P"<<endl;
           cout<<"\t\t      M@@@       ~-=__  __z/` ,gmW@@mm_ '+e_.   __=-`      ,@@@@"<<endl;
           cout<<"\t\t       'VMW                  g@@@@@@@@@W     ~~~          ,WAf"<<endl;
           cout<<"\t\t          ~N.                @@@@@@@@@@@!                ,Z`"<<endl;
           cout<<"\t\t            V.               !M@@@@@@@@f                gf-"<<endl;
		   cout<<"\t\t             'N.               '~***f~                ,Z`"<<endl;
           cout<<"\t\t               Vc.                                  _Zf"<<endl;
           cout<<"\t\t                ~e_                             ,gY~"<<endl;
           cout<<"\t\t                  'V=_          -@@D         ,gY~ '"<<endl;
           cout<<"\t\t                      -=__.           ,__z=~`"<<endl;
           cout<<"\t\t                           ~~~*==Y*f~~~    "<<endl;
           cout << "\t*************************************************************************************" << endl;
	       cout << "\t*****                                                                           *****" << endl;
	       cout << "\t*****                       C O N G R A T U L A T I O N S ! ! !                 *****" << endl;
	       cout << "\t*****                = = = = = = = = "<< name   <<"= = = = = = = = =            *****" << endl;
	       cout << "\t*****                            = = = = = = = = = = =                          *****" << endl;
	       cout << "\t*****                                                                           *****" << endl;
	       cout << "\t*************************************************************************************" << endl;
	       cout << endl;
	       cout << "TOTAL SCORE: " << total_score << endl;
	       cout << "YOU HAVE ANSWERED FOR '" << correct_answer << "' QUESTIONS OUT OF 10." << endl;
	       cout << "YOU HAVE USED "<<hints_used<<" HINTS DURING THE GAME."<<endl;
	       system("pause");
}	


void howtoplay() {
	system("cls");
	system("color 0B");
	cout<< "\t\t\t\t\t\t H  O  W  T  O  P  L  A  Y"<<endl;
    cout<<"   ___________________________________________________________________________________________"<<endl;
          cout<<" / \\                             	                                                       \\."<<endl;
           cout<<"|   |                                                                                          |."<<endl;
           cout<<" \\_| 1.CHOOSE THE TOPIC QUESTIONS YOU ARE INTERESTED IN PLAYING.                              |."<<endl;
           cout<<"    |                                                                                          |."<<endl;
           cout<<"    | 2.YOU WILL EARN 10 POINTS WHEN YOU ANSWER THE CORRECT QUESTION.                          |."<<endl;
           cout<<"    |                                                                                          |."<<endl;
           cout<<"    | 3. ADDITIONALLY YOU WILL HAVE SOME HINTS WHICH YOU CAN USE FROM the 8TH QUESTION         |."<<endl;
           cout<<"    |    IF THE ANSWER IS CORRECT WHEN YOU USING HINTS YOU WILL ONLY  POINT.                   |."<<endl;
		   cout<<"    |                                                                                          |."<<endl;
           cout<<"    | 4. AFTER PLAYING, THE SYSTEM WILL SORT THE SCORE.                                        |."<<endl;
           cout<<"    |                            	                                                             |."<<endl;
           cout<<"    |   _______________________________________________________________________________________|."<<endl;
           cout<<"    |  /                                                                                       /."<<endl;
           cout<<"    \\_/______________________________________________________________________________________/."<<endl;
           cout << "\n\n";

            system("pause");

            menu();
}

void scores_table();

void allthequiz(){
	start();
	if(topic=="1"){
		quiz1();
        quiz2();
		quiz3();
		quiz4();
		quiz5();
		quiz6();
		quiz7();
		quiz8();
		quiz9();
		quiz10();
	}else if(topic=="2"){
		onequiz1();
		onequiz2();
		onequiz3();
		onequiz4();
		onequiz5();
		onequiz6();
		onequiz7();
		onequiz8();
		onequiz9();
		onequiz10();								
	}else if(topic=="3"){
		dequiz1();			
		dequiz2();			
		dequiz3();			
		dequiz4();			
		dequiz5();			
		dequiz6();			
		dequiz7();			
		dequiz8();			
		dequiz9();			
		dequiz10();								
	}
}

int main() {

menu();
    switch (choice) {
        case 1:
			system("cls");
		    allthequiz();
            congrate();
            system("cls");
            scores_table();
            break;
        case 2:
            howtoplay();
			main();
            break;
        case 3:
			system("cls");
            cout << "Exiting the game..." << endl;
			Sleep(2000);
            return 0;
        default:
            cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
			Sleep(800);
			main();
            break;
    }

    
    return 0;
}

void scores_table(){
			sort(scores.rbegin(), scores.rend());
			cout << endl;
        	cout << "\t\tH I G H E S T   S C O R E S" << endl;
    		cout << "*********************************************************************" << endl;
            for (size_t i = 0; i < scores.size(); i++) {
                cout << "*****  " << names[i] << "     ***" << "              ***  " << scores[i] << "    *****" << endl;
			}
				cout << endl; 
	cout << "Do you want to start a QUIZ again? (Yes/No)" << endl;
	string play_again;
	cin >> play_again;
	if (play_again == "Yes" || play_again == "yes")
	{
		total_score = 0;
        correct_answer = 0;
        hints_used = 0;
		    allthequiz();
			congrate();
			system("cls");
            scores_table();
	}
	else
		cout << "OK, Goodbye! ";
}