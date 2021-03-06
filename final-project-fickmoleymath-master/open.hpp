/*************************************************
 * Filename: open.hpp
 * Author: faaiq waqar
 * Date: 3/20
 * Description: contains the class declaration for the
 * open class
 * Inputs: c libraries
 * Outputs: open class decalration for use
*************************************************/

#ifndef WAQARF_OPEN_HPP
#define WAQARF_OPEN_HPP

#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Open : public Location {
	private:
		bool isBeggining;
		bool isInstructor;
		bool isFinish;
		bool isLadder;
		bool isOccupiable;
		bool isProgSkill;
		bool isStudent;
		bool isTa;

		char container;
	public:
		Open(char,int,int,int);

		bool getBeggining();
		bool getInstructor();
		bool getFinish();
		bool getLadder();
		bool getOccupiable();
		bool getProgSkill();
		bool getStudent();
		bool getTa();

		char getContainer();
			
		void setBeggining(bool);
		void setContainer(char);
		void setInstructor(bool);
		void setFinish(bool);
		void setLadder(bool);
		void setOccupiable();
		void setProgSkill(bool);
		void setStudent(bool);
		void setTa(bool);

		~Open();
};

#endif
