#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
	virtual	string name() = 0;
	int staffNumber()
	{

	}
	float salary()
	{

	}
};

class SalaryEmlpoyee : public Employee
{
	float Salary;
public:
	void setSalary(float sal)
	{
		Salary = sal;
	}
};

class HourlyEmployee : public Employee
{
	float HourlyRate;
	int HoursWorked;
public:
	void setHourlyRate(float Hrate)
	{
		HourlyRate = Hrate;
	}

	void setHoursWorked(int hr)
	{
		HoursWorked = hr;
	}


};

class CommissionEmployee : public Employee
{
	float BaseSalary;
	float Rate;

public:
	void setBaseSalary(float Bsalary)
	{
		BaseSalary = Bsalary;
	}

	void setRate(float Rt)
	{
		Rate = Rt;
	}

	void setRevenue()
	{

	}
};


int main()
{
	SalaryEmlpoyee;

	

	return 0;
}