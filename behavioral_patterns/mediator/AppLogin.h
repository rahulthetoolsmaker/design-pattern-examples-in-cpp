// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_MEDIATOR_APPLOGIN_H_
#define BEHAVIORAL_PATTERNS_MEDIATOR_APPLOGIN_H_

// ˅
#include <msclr/gcroot.h>
#include <memory>
#include "behavioral_patterns/mediator/Mediator.h"

class ColleagueButton;
class ColleagueRadioButton;
class ColleagueTextField;

using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

// ˄

class AppLogin : public Mediator
{
	// ˅
	
	// ˄

private:

	msclr::gcroot<Form^> main_form;

	ColleagueRadioButton* radio_user;

	ColleagueRadioButton* radio_guest;

	ColleagueTextField* text_username;

	ColleagueTextField* text_password;

	ColleagueButton* button_ok;

	ColleagueButton* button_cancel;

public:

	AppLogin();

	~AppLogin();

	// Change enable/disable of the Colleagues when notified from the Mediators.
	void colleagueChanged(Object^ sender, EventArgs^ e);

	void createColleagues();

	// ˅
public:
	
protected:
	
private:
	AppLogin(const AppLogin&) = delete;
	AppLogin& operator=(const AppLogin&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_MEDIATOR_APPLOGIN_H_

// ˅

// ˄
