#include <iostream>
using namespace std;

int main()
{
    
}

class Payment
{
private:
	int payID;
	double amount;

public:
	Payment();
	Payment(int pID, double pamount);
	void checkpayment();
	void confirmpayment();
	void displaydetails();
	~Payment();
};

Payment::Payment()
{
	payID = 0;
	amount = 0;
}

Payment::Payment(int pID, double pamount)
{
	payID = pID;
	amount = pamount;
}

void Payment::checkpayment()
{
}

void Payment::confirmpayment()
{
}

void Payment::displaydetails()
{
}

Payment::~Payment()
{
}