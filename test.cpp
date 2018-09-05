#include <bits/stdc++.h>
using namespace std;

struct task{
	string title;
	string details;
	string reward;
	string date;
};

task newTask(){
	task t;
	cout << "Enter task title\n";
	cin >> t.title;
	cout << "Enter details of the task\n";
	getline(cin, t.details);
	cout << "Enter deadline for task\n";
	getline(cin, t.date);
	cout << "Enter any rewards for completion\n";
	getline(cin, t.reward);
	cout << "Task Created \n";
	cout << t.title << "\n To do: " << t.details << "\n Finish by:" << t.date << "\n Reward: " << t.reward <<"\n";
	return t;
};

void welcome(){
	int option;
	cout << "What would you like to do?\n";
	cout << "1. Set a task\n";
	cout << "2. Edit a task\n";
	cout << "3. View tasks\n";
	cin >> option;
	if (option == 1){
		task t = newTask();
	}
};

int main()
{
	welcome();
}
//Make a struct for task with values as title, details, deadline, rewards