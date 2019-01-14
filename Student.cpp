#include "Student.h"
#include <sstream>

// Student chandler = Student(8022071, "forrest", "Chandler Scott");

Student::Student(int perm, 
		 std::string lastName, 
		 std::string firstAndMiddleNames) {

  this->perm = perm;
  this->lastName = lastName;
  this->firstAndMiddleNames = firstAndMiddleNames;
  
  // THIS EMPTY CONSTRUCTOR IS A STUB
  // DELETE THESE COMMENTS AND REPLACE WITH APPROPRIATE CODE
  // REMEMBER: PURPOSE OF A CONSTRUCTOR IS TO INITIALIZE 
  // ALL DATA MEMBERS WITH REASONABLE VALUES  
}

int Student::getPerm() const { 
  return perm;
}

std::string Student::getLastName() const { 
  return lastName;
}

std::string Student::getFirstAndMiddleNames() const { 
  return firstAndMiddleNames;
}

std::string Student::getFullName() const { 
  std::string fullName = getFirstAndMiddleNames() + " " + getLastName();
  return fullName;
}

std::string Student::toString() const { 
  // e.g. [12345,Smith,Malory Logan]
  std::ostringstream oss;
  
  oss << "[" 
      << this->getPerm() << ","
      << this->getLastName() << ","
      << this->getFirstAndMiddleNames() << "]";
  return oss.str();

} 

