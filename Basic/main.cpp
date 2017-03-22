//UML
//------------------------
//	GradeBook
//------------------------
//- SCourseName 
//------------------------
//+ SetCourseName(SName : String): int
//+ GetCourseName(): String
//+ displayMessage()

#include <iostream>
#include <string>
using namespace std;

#define S_OK 0
#define S_FAIL 1

// Define the basic class for the grade book
class GradeBook
{
	public:
		int SetCourseName (string SName)
		{
			SCourseName = SName;
			return S_OK;
		}
		void displayMessage()
		{
			cout << "Welcome to the grade book world!" << endl;
		}

		string GetCourseName()
		{
			return SCourseName;
		}
	private:
		string SCourseName;
};

int main()
{
	string SNameOfCourse;
	GradeBook CGrageBook;

	CGrageBook.displayMessage();

	cout << "Please Enter the course name!" << endl;
	getline (cin, SNameOfCourse);
	if (CGrageBook.SetCourseName(SNameOfCourse) != S_OK)
	{
		cout << "[Error] Set the value failed" << endl;
	}

	cout << "This " << CGrageBook.GetCourseName() << " is taught by Mr. Tseng" << endl;

	return 0;
}
