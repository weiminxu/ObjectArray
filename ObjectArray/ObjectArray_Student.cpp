#include <iostream>

using namespace std;

class Student
{
private:
	int number;
	int score;

public:
	Student()
	{
		number = 0;
		score = 0;
	}
	Student(unsigned int n, unsigned int s)
	{
		number = n;
		score = s;
	}
	unsigned int get_score()
	{
		return score;
	}
	void print()
	{
		cout << number << "\t" << score << endl;
	}

};

Student max_score(Student stu[])
{
	int i = 0;
	Student maxScore = stu[0];
	for (i = 1; i < 5; ++i)
	{
		if (maxScore.get_score() < stu[i].get_score())
		{
			maxScore = stu[i];
		}
	}
	return maxScore;
}

int main()
{
	Student stu[5] =
	{
		Student(1,65),
		Student(2,75),
		Student(3,85),
		Student(4,95),
		Student(5,55),
	};

	int i = 0;
	for (i = 0; i < 5; ++i)
	{
		stu[i].print();
	}
	Student p;
	p = max_score(stu);
	cout << "========max score=====\n";
	p.print();


	return 0;

}