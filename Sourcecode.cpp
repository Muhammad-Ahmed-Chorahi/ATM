#include<iostream>
#include<string>
using namespace std;
int menu()
{
	int menu_choice;
	cout << "\nPress (1) to withdraw cash " << endl;
	cout << "Press (2) for Balance Inquiry " << endl;
	cout << "Press (3) for Funds Transfer " << endl;
	cout << "Press (4) for Bill Payments " << endl;
	cin >> menu_choice;
	return menu_choice;
}
int withdraw()
{
	int withdraw_choice;
	cout << "\nPress (1) to Widthdraw 1,000 " << endl;
	cout << "Press (2) to Widthdraw 5,000 " << endl;
	cout << "Press (3) to Widthdraw 10,000 " << endl;
	cout << "Press (4) Widthdraw 25,000 " << endl;
	cout << "Press (5) to Widthdraw Custom Amount " << endl;
	cin >> withdraw_choice;
	return withdraw_choice;
}
float c_withdraw(int wd_amount, float balance)
{
	float tax;
	cout << "0.6% tax will be deducted on cash withdraw" << endl;
	tax = (0.6 / 100) * wd_amount;
	balance = balance - (wd_amount + tax);
	return balance;
}
float s_withdraw(int wd_amount, float balance)
{
	balance = balance - wd_amount;
	return balance;
}
float recipt(float balance)
{
	char slp;
	cout << "\nDo you want to print the slip" << endl;
	cout << "Rs. 2.5 will be deducted for printing the slip" << endl;
	cout << "Press 'y' or 'Y' to print the slip" << endl;
	cout << "Press any other key to exit" << endl;
	cin >> slp;
	if (slp == 'y' || slp == 'Y')
	{
		return balance = balance - 2.5;
	}
	else
	{
		return balance;
	}
}
int fund_menu()
{
	int fund_choice;
	cout << "\nPress (1) for Foreign Fund Transfer (International Banks)" << endl;
	cout << "Press (2) for Local Fund Transfer (Same Local Bank)" << endl;
	cout << "Press (3) for Local Fund Transfer (Other Local Banks)" << endl;
	cin >> fund_choice;
	return fund_choice;
}
int inter_fund_menu()
{
	int inter_fund_choice;
	cout << "\nIn which Currency you want to Transfer Funds Internationally?!" << endl;
	cout << "\nPress (1) from Rs to Dollars " << endl;
	cout << "Press (2) from Rs to Euros " << endl;
	cout << "Press (3) from Rs to Pounds " << endl;
	cout << "Prss (4) from Rs to Lira " << endl;
	cin >> inter_fund_choice;
	return inter_fund_choice;
}
void account_vr()
{
	string tr_account;
	do {
		cout << "\nEnter 16-digit Account No. in which you want to transfer money = ";
		cin >> tr_account;
		if (tr_account.size() == 16)
		{
			cout << "Please wait while we access this account........." << endl;
		}
		else
		{
			cout << "\nError! Invalid Account No." << endl;
		}
	} while (tr_account.size() != 16);
}
int dollar_rate()
{
	int rs_dollar;
	cout << "Current Rate of 1 Dollar in Pakistan is \"Rs.226.2\"" << endl;
	cout << "Enter Rs amount you want to Transfer to Foreign Account in Dollars($)" << endl;
	cin >> rs_dollar;
	return rs_dollar;
}
int balance_check(int amount,float balance)
{
	do
	{
		if (amount >= (balance - 100))
		{
			cout << "Error! Minimum Rs.1000 must be avaiable in your account OR The amount you enter is more than the actual amount in your account" << endl;
			cout << "Enter amount again" << endl;
			cin >> amount;
		}
	} while (amount >= (balance - 1000));
	return amount;
}
float dollar_fund_transfer(float dollar_fund,float balance)
{
	float rem_balance, dollar = 226.2;
	dollar = dollar_fund / dollar;
	rem_balance = recipt(balance) - dollar_fund;
	cout << "After conversion from Rs to Dollars, you transfer " << dollar << "$" << endl;
	return (rem_balance);
}
int euro_rate()
{
	int rs_euro;
	cout << "Current Rate of 1 Euro in Pakistan is \"Rs.241.5\"" << endl;
	cout << "Enter Rs amount you want to Transfer to Foreign Account in Euro" << endl;
	cin >> rs_euro;
	return rs_euro;
}
float euro_fund_transfer(float euro_fund,float balance)
{
	float rem_balance, dollar = 241.5;
	dollar = euro_fund / dollar;
	rem_balance = recipt(balance) - euro_fund;
	cout << "After conversion from Rs to Euro, you transfer " << dollar << "$" << endl;
	return (rem_balance);
}
int pound_rate()
{
	int rs_pound;
	cout << "Current Rate of 1 Euro in Pakistan is \"Rs.274.2\"" << endl;
	cout << "Enter Rs amount you want to Transfer to Foreign Account in Euro" << endl;
	cin >> rs_pound;
	return rs_pound;
}
float pound_fund_transfer(float pound_fund, float balance)
{
	float rem_balance, pound = 274.2;
	pound = pound_fund / pound;
	rem_balance = recipt(balance) - pound_fund;
	cout << "After conversion from Rs to Euro, you transfer " << pound << endl;
	return (rem_balance);
}
int lira_rate()
{
	int rs_lira;
	cout << "Current Rate of 1 Euro in Pakistan is \"Rs.12.4\"" << endl;
	cout << "Enter Rs amount you want to Transfer to Foreign Account in Euro" << endl;
	cin >> rs_lira;
	return rs_lira;
}
float lira_fund_transfer(float lira_fund, float balance)
{
	float rem_balance, lira = 14.4;
	lira = lira_fund / lira;
	rem_balance = recipt(balance) - lira_fund;
	cout << "After conversion from Rs to lira, you transfer " << lira << endl;
	return (rem_balance);
}
float same_local_transfer(float rs_same,float balance)
{
	balance = recipt(balance) - rs_same;
	return (balance);
}
float diff_local_transfer(float rs_diff,float balance)
{
	float tax;
	cout << "0.3% tax will be deducted from your account balance" << endl;
	tax = (0.3 / 100) * rs_diff;
	rs_diff = tax + rs_diff;
	balance = recipt(balance) - rs_diff;
	return (balance);
}
int bill_menu()
{
	int bill_choice;
	cout << "\nPress (1) for Utility Bills" << endl;
	cout << "Press (2) for 1 Bill Invoice" << endl;
	cin >> bill_choice;
	return bill_choice;
}
int utility_menu()
{
	int utility_choice;
	cout << "\nPress (1) for Electricity Bill" << endl;
	cout << "Press (2) for Gas Bill" << endl;
	cin >> utility_choice;
	return utility_choice;
}
void reference_no()
{
	string tr_reference;
	do {
		cout << "Enter 14 digit Reference No. written on your bill = ";
		cin >> tr_reference;
		if (tr_reference.size() == 14)
		{
			cout << "Please wait while we are Processing your Bill........." << endl;
		}
		else
		{
			cout << "Invalid Reference No." << endl;
			cout << "Enter 14-digit Reference No. again" << endl;
		}
	} while (tr_reference.size() != 14);
}
float utility_bill(int bill,float balance)
{
	balance = recipt(balance) - bill;
	return (balance);
}
void consumer_no()
{
	string tr_consumer;
	do {
		cout << "Enter 17 digit Consumer No. written on your bill = ";
		cin >> tr_consumer;
		if (tr_consumer.size() == 17)
		{
			cout << "Please wait while we are Processing your Bill........." << endl;
		}
		else
		{
			cout << "Invalid Consumer No." << endl;
			cout << "Enter 17-digit Consumer No. again" << endl;
		}
	} while (tr_consumer.size() != 17);
}
float one_bill(float bill,float balance)
{
	balance = recipt(balance) - bill;
	return (balance);
}
void main()
{
	cout << "\t************* Welcome to ATM *************" << endl << endl;
	int card;
	char reuse;
	float balance = 100000.00;
	do
	{
		do
		{
			//Enter Card
			cout << "\nEnter card and press 1 : ";
			cin >> card;
			if (card == 1)
			{
					//verification
				string account_no, pin;
				do
				{
					cout << "\nEnter 16 digit accout number : ";
					cin >> account_no;
					cout << "Enter 4 digit pin : ";
					cin >> pin;
					if (account_no.size() == 16 && pin.size() == 4)
					{
							//Account Type
						int account_type;
						do
						{
							cout << "\nPress (1) for Current Account " << endl;
							cout << "Press (2) for Saving Account " << endl;
							cin >> account_type;
							switch (account_type)
							{
								//--------------------CURRENT ACCOUNT------------------------------------
							case 1:
							{
								int menu_choice;
								do
								{
									//menu
									menu_choice = menu();
									switch (menu_choice)
									{
										//withdraw cash
									case 1:
									{
										int withdraw_choice;
										do
										{
											//withdraw menu
											withdraw_choice = withdraw();
											switch (withdraw_choice)
											{
												//1000 withdraw
											case 1:
											{
												int wd_amount = 1000;
												balance = c_withdraw(wd_amount, balance);
												balance = recipt(balance);
												cout << "\nPlease wait transaction is in process...." << endl;
												cout << "Your remaining Bank balance is : " << balance << endl;
												break;
											}
											//5000 withdraw
											case 2:
											{
												int wd_amount = 5000;
												balance = c_withdraw(wd_amount, balance);
												balance = recipt(balance);
												cout << "\nPlease wait transaction is in process...." << endl;
												cout << "Your remaining Bank balance is : " << balance << endl;
												break;
											}
											//10,000 withdraw
											case 3:
											{
												int wd_amount = 10000;
												balance = c_withdraw(wd_amount, balance);
												balance = recipt(balance);
												cout << "\nPlease wait transaction is in process...." << endl;
												cout << "Your remaining Bank balance is : " << balance << endl;
												break;
											}
											//withdraw 25000
											case 4:
											{
												int wd_amount = 25000;
												balance = c_withdraw(wd_amount, balance);
												balance = recipt(balance);
												cout << "\nPlease wait transaction is in process...." << endl;
												cout << "Your remaining Bank balance is : " << balance << endl;
												break;
											}
											//custom amount withdraw
											case 5:
											{
												int wd_amount;
												do
												{
													cout << "\nEnter amount you want to withdraw " << endl;
													cout << "You can only withdraw in multiple of 500 and not more than 25000 " << endl;
													cin >> wd_amount;
													if (wd_amount % 500 == 0 && wd_amount <= 25000)
													{
														balance = c_withdraw(wd_amount, balance);
														balance = recipt(balance);
														cout << "\nPlease wait transaction is in process...." << endl;
														cout << "Your remaining Bank balance is : " << balance << endl;
													}
													else
													{
														cout << "\nError! Enter amount in multiple of 500 and not more than 25000 " << endl;
													}
												} while (wd_amount % 500 != 0 || wd_amount > 25000);
												break;
											}
											default:
											{
												cout << "\nError! Please Enter correct choice " << endl;
											}
											}
										} while (withdraw_choice != 1 && withdraw_choice != 2 && withdraw_choice != 3 && withdraw_choice != 4 && withdraw_choice != 5);
										break;
									}
									// balance inquiry
									case 2:
									{
										recipt(balance);
										cout << "\n Your account Balance is balance : " << balance << endl;
										break;
									}
									//fund tranfer
									case 3:
									{
										int fund_choice;
										do
										{
											//fund tranfer menu
											fund_choice = fund_menu();
											switch (fund_choice)
											{
												//internatioal tranfer
											case 1:
											{
												int inter_fund_choice;
												do
												{
													//international fund menu
													inter_fund_choice = inter_fund_menu();
													switch (inter_fund_choice)
													{
														//Doller tranfer
													case 1:
													{
														account_vr();
														int amount = dollar_rate();
														amount = balance_check(amount,balance);
														cout << "Your Remaining Account Balance after Transaction is = " << dollar_fund_transfer(amount,balance) << " Rs" << endl;
														break;
													}
													//Euro transfer
													case 2:
													{
														account_vr();
														int amount = euro_rate();
														amount = balance_check(amount, balance);
														cout << "Your Remaining Account Balance after Transaction is = " << euro_fund_transfer(amount, balance) << " Rs" << endl;
														break;
													}
													//Pound transfer
													case 3:
													{
														account_vr();
														int amount = pound_rate();
														amount = balance_check(amount, balance);
														cout << "Your Remaining Account Balance after Transaction is = " << pound_fund_transfer(amount, balance) << " Rs" << endl;
														break;
													}
													//Lira tranfer
													case 4:
													{
														account_vr();
														int amount = lira_rate();
														amount = balance_check(amount, balance);
														cout << "Your Remaining Account Balance after Transaction is = " << lira_fund_transfer(amount, balance) << " Rs" << endl;
														break;
													}
													default:
													{
														cout << "\nError! Please enter correct choice " << endl;
													}
													}
												} while (inter_fund_choice != 1 && inter_fund_choice != 2 && inter_fund_choice != 3 && inter_fund_choice != 4);
												break;
											}
											//same local bank transfer
											case 2:
											{
												account_vr();
												int rs_samelocal;
												cout << "Enter Rs amount you want to transfer to other account " << endl;
												cin >> rs_samelocal;
												int amount = balance_check(rs_samelocal,balance);
												cout << "Your Remaining Account Balance after transaction is = " << same_local_transfer(amount,balance) << endl;
												break;
											}
											//other bank transfer
											case 3:
											{
												account_vr();
												int rs_diff_local;
												cout << "Enter Rs amount you want to transfer to other account " << endl;
												cin >> rs_diff_local;
												int amount = balance_check(rs_diff_local,balance);
												cout << "Your Remaining Account Balance after transaction is = " << diff_local_transfer(amount,balance) << endl;
												break;
											}
											default:
											{
												cout << "\nError! Please Enter a correct choice" << endl;
											}
											}
										} while (fund_choice != 1 && fund_choice != 2 && fund_choice != 3);
										break;
									}
									//bill payment
									case 4:
									{
										int bill_choice;
										do
										{
											//bill menu
											bill_choice = bill_menu();
											switch (bill_choice)
											{
											case 1:
											{
												//uitility bill
												int utility_choice;
												do
												{
													//utility bill menu
													utility_choice = utility_menu();
													switch (utility_choice)
													{
														//electric bill
													case 1:
													{
														int elec_bill;
														reference_no();
														cout << "Enter your Bill Amount " << endl;
														cin >> elec_bill;
														int amount = balance_check(elec_bill,balance);
														cout << "Your Remaining Account Balance after Bill Payment is = " << utility_bill(amount,balance) << endl;
														break;
													}
														//gas bill
													case 2:
													{
														int gas_bill;
														reference_no();
														cout << "Enter your Bill Amount " << endl;
														cin >> gas_bill;
														int amount = balance_check(gas_bill, balance);
														cout << "Your Remaining Account Balance after Bill Payment is = " << utility_bill(amount, balance) << endl;
														break;
													}
													default:
													{
														cout << "\nError! Please enter correct choice" << endl;
													}
													}
												} while (utility_choice != 1 && utility_choice != 2);
												break;
											}
												// one bill payment
											case 2:
											{
												int amount;
												consumer_no();
												cout << "Enter your Bill Amount" << endl;
												cin >> amount;
												amount = balance_check(amount,balance);
												cout << "Your Remaining Account balance after payment is = " << one_bill(amount,balance) << endl;
												break;
											}
											default:
											{
												cout << "\nError! Please Enter correct choice " << endl;
											}
											}
										} while (bill_choice != 1 && bill_choice != 2);
										break;
									}
									default:
									{
										cout << "\nPlease Enter correct choice" << endl;
									}
									}
								} while (menu_choice != 1 && menu_choice != 2 && menu_choice != 3 && menu_choice != 4);
								break;
							}
								//-------------------------SAVING ACCOUTN----------------------------------
							case 2:
							{
								int menu_choice;
								do
								{
									//menu
									menu_choice = menu();
									switch (menu_choice)
									{
										//withdraw cash
									case 1:
									{
										int withdraw_choice;
										do
										{
											//withdraw menu
											withdraw_choice = withdraw();
											switch (withdraw_choice)
											{
												//1000 withdraw
											case 1:
											{
												int wd_amount = 1000;
												balance = s_withdraw(wd_amount, balance);
												balance = recipt(balance);
												cout << "\nPlease wait transaction is in process...." << endl;
												cout << "Your remaining Bank balance is : " << balance << endl;
												break;
											}
											//5000 withdraw
											case 2:
											{
												int wd_amount = 5000;
												balance = s_withdraw(wd_amount, balance);
												balance = recipt(balance);
												cout << "\nPlease wait transaction is in process...." << endl;
												cout << "Your remaining Bank balance is : " << balance << endl;
												break;
											}
											//10,000 withdraw
											case 3:
											{
												int wd_amount = 10000;
												balance = s_withdraw(wd_amount, balance);
												balance = recipt(balance);
												cout << "\nPlease wait transaction is in process...." << endl;
												cout << "Your remaining Bank balance is : " << balance << endl;
												break;
											}
											//withdraw 25000
											case 4:
											{
												int wd_amount = 25000;
												balance = s_withdraw(wd_amount, balance);
												balance = recipt(balance);
												cout << "\nPlease wait transaction is in process...." << endl;
												cout << "Your remaining Bank balance is : " << balance << endl;
												break;
											}
											//custom amount withdraw
											case 5:
											{
												int wd_amount;
												do
												{
													cout << "\nEnter amount you want to withdraw " << endl;
													cout << "You can only withdraw in multiple of 500 and not more than 50000 " << endl;
													cin >> wd_amount;
													if (wd_amount % 500 == 0 && wd_amount <= 50000)
													{
														balance = s_withdraw(wd_amount, balance);
														balance = recipt(balance);
														cout << "\nPlease wait transaction is in process...." << endl;
														cout << "Your remaining Bank balance is : " << balance << endl;
													}
													else
													{
														cout << "\nError! Enter amount in multiple of 500 and not more than 50000 " << endl;
													}
												} while (wd_amount % 500 != 0 || wd_amount > 50000);
												break;
											}
											default:
											{
												cout << "\nError! Please Enter correct choice " << endl;
											}
											}
										} while (withdraw_choice != 1 && withdraw_choice != 2 && withdraw_choice != 3 && withdraw_choice != 4 && withdraw_choice != 5);
										break;
									}
									// balance inquiry
									case 2:
									{
										recipt(balance);
										cout << "\n Your account Balance is balance : " << balance << endl;
										break;
									}
									//fund tranfer
									case 3:
									{
										int fund_choice;
										do
										{
											//fund tranfer menu
											fund_choice = fund_menu();
											switch (fund_choice)
											{
												//internatioal tranfer
											case 1:
											{
												int inter_fund_choice;
												do
												{
													//international fund menu
													inter_fund_choice = inter_fund_menu();
													switch (inter_fund_choice)
													{
														//Doller tranfer
													case 1:
													{
														account_vr();
														int amount = dollar_rate();
														amount = balance_check(amount, balance);
														cout << "Your Remaining Account Balance after Transaction is = " << dollar_fund_transfer(amount, balance) << " Rs" << endl;
														break;
													}
													//Euro transfer
													case 2:
													{
														account_vr();
														int amount = euro_rate();
														amount = balance_check(amount, balance);
														cout << "Your Remaining Account Balance after Transaction is = " << euro_fund_transfer(amount, balance) << " Rs" << endl;
														break;
													}
													//Pound transfer
													case 3:
													{
														account_vr();
														int amount = pound_rate();
														amount = balance_check(amount, balance);
														cout << "Your Remaining Account Balance after Transaction is = " << pound_fund_transfer(amount, balance) << " Rs" << endl;
														break;
													}
													//Lira tranfer
													case 4:
													{
														account_vr();
														int amount = lira_rate();
														amount = balance_check(amount, balance);
														cout << "Your Remaining Account Balance after Transaction is = " << lira_fund_transfer(amount, balance) << " Rs" << endl;
														break;
													}
													default:
													{
														cout << "\nError! Please enter correct choice " << endl;
													}
													}
												} while (inter_fund_choice != 1 && inter_fund_choice != 2 && inter_fund_choice != 3 && inter_fund_choice != 4);
												break;
											}
											//same local bank transfer
											case 2:
											{
												account_vr();
												int rs_samelocal;
												cout << "Enter Rs amount you want to transfer to other account " << endl;
												cin >> rs_samelocal;
												int amount = balance_check(rs_samelocal, balance);
												cout << "Your Remaining Account Balance after transaction is = " << same_local_transfer(amount, balance) << endl;
												break;
											}
											//other bank transfer
											case 3:
											{
												account_vr();
												int rs_diff_local;
												cout << "Enter Rs amount you want to transfer to other account " << endl;
												cin >> rs_diff_local;
												int amount = balance_check(rs_diff_local, balance);
												cout << "Your Remaining Account Balance after transaction is = " << diff_local_transfer(amount, balance) << endl;
												break;
											}
											default:
											{
												cout << "\nError! Please Enter a correct choice" << endl;
											}
											}
										} while (fund_choice != 1 && fund_choice != 2 && fund_choice != 3);
										break;
									}
									//bill payment
									case 4:
									{
										int bill_choice;
										do
										{
											//bill menu
											bill_choice = bill_menu();
											switch (bill_choice)
											{
											case 1:
											{
												//uitility bill
												int utility_choice;
												do
												{
													//utility bill menu
													utility_choice = utility_menu();
													switch (utility_choice)
													{
														//electric bill
													case 1:
													{
														int elec_bill;
														reference_no();
														cout << "Enter your Bill Amount " << endl;
														cin >> elec_bill;
														int amount = balance_check(elec_bill, balance);
														cout << "Your Remaining Account Balance after Bill Payment is = " << utility_bill(amount, balance) << endl;
														break;
													}
													//gas bill
													case 2:
													{
														int gas_bill;
														reference_no();
														cout << "Enter your Bill Amount " << endl;
														cin >> gas_bill;
														int amount = balance_check(gas_bill, balance);
														cout << "Your Remaining Account Balance after Bill Payment is = " << utility_bill(amount, balance) << endl;
														break;
													}
													default:
													{
														cout << "\nError! Please enter correct choice" << endl;
													}
													}
												} while (utility_choice != 1 && utility_choice != 2);
												break;
											}
											// one bill payment
											case 2:
											{
												int amount;
												consumer_no();
												cout << "Enter your Bill Amount" << endl;
												cin >> amount;
												amount = balance_check(amount, balance);
												cout << "Your Remaining Account balance after payment is = " << one_bill(amount, balance) << endl;
												break;
											}
											default:
											{
												cout << "\nError! Please Enter correct choice " << endl;
											}
											}
										} while (bill_choice != 1 && bill_choice != 2);
										break;
									}
									default:
									{
										cout << "\nPlease Enter correct choice" << endl;
									}
									}
								} while (menu_choice != 1 && menu_choice != 2 && menu_choice != 3 && menu_choice != 4);
								break;
							}
							default:
							{
								cout << "\nPlease Enter correct choice" << endl;
							}
							}
						} while (account_type != 1 && account_type != 2);
					}
					else
					{
						cout << "Error! Incorrect Pin or Account number " << endl;
						cout << "Please Enter again" << endl;
					}
				} while (account_no.size() != 16 || pin.size() != 4);
			}
			else
			{
				cout << "Error! Please Enter 1 only " << endl;
			}
		} while (card != 1);
		cout << "\nPress Y or y to reuse to ATM " << endl;
		cout << "Press any other key to Exit" << endl;
		cin >> reuse;
	} while (reuse == 'y' || reuse == 'Y');
	cout << "\t\n***** Hope Your like our Service *****" << endl;
	cout << "****** Thanks for your visit *****" << endl << endl;
}