#pragma once
#ifndef __Receptionist__
#define __Receptionist__
#include "LinkedList.h"
class Customer;
class Technician;
class JobSheet;
class Car;
class LinkedList;

struct ServiceRecord {
	LinkedList* JobSheetLL = new LinkedList;
	std::string Date;
	bool Stamped;
};

class Receptionist {

	Technician* MyTechnician;
public:
	Car* CustomerCar;
	Customer* MyCustomer;
	double RequiredCustomerPayment;
	ServiceRecord* CustomerOldServiceRecord;
	ServiceRecord* CustomerNewServiceRecord;
	JobSheet* JobSheetFromTech;

	Receptionist();
	void GetCarFromCustomer();
	void GetPayment();
	void GetOldServiceRecord();
	void MakeCoffee();
	void GetCarFromTech();
	void GetJobSheetFromTech();
	void GenerateInvoice();
	void StampServiceRecord();
	
	// Extra
	void AddTechnician(Technician* GivenTechnician);
	
	~Receptionist();
};



#endif