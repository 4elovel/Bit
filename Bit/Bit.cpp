#include <iostream>

using namespace std;

int main()
{
	struct Time
	{
	private:
		unsigned miliseconds : 10;
		unsigned seconds : 6;
		unsigned minutes : 6;
		unsigned hours : 5;
	public:
		void print() {
			cout << "current time:\n"
				<< "hours - " << hours
				<< "\nminutes - " << minutes
				<< "\nseconds - " << seconds
				<< "\nMiliseconds - " << miliseconds << endl;
		}
		void set_time(short hour, short minute, short second, short milisecond) {
			if (hour < 24 && minute < 60 && second < 60 && milisecond < 1000) {
				miliseconds = milisecond;
				seconds = second;
				minutes = minute;
				hours = hour;
			}
			else {
				cout << "Wrong time format!\n";
				return;
			}
		}

		void set_hours(short hour) { hour < 24 ? hours = hour : hours = hours; }
		void set_minutes(short minute) { minute < 60 ? minutes = minute : minutes = minutes; }
		void set_seconds(short second) { second < 60 ? seconds = second : seconds = seconds; }
		void set_miliseconds(short milisecond) { milisecond < 1000 ? miliseconds = milisecond : miliseconds = miliseconds; }

		int get_hours() { return hours; }
		int get_minutes() { return minutes; }
		int get_seconds() { return seconds; }
		int get_miliseconds() { return miliseconds; }
	};

	Time obj1;
	obj1.set_time(5, 16, 30, 860);
	obj1.print();
	cout << endl;
	obj1.set_hours(23);
	obj1.set_minutes(48);
	obj1.print();
	cout << endl;
	obj1.set_time(29, 16, 0, 0); // Wrong format 
	cout << endl;

}