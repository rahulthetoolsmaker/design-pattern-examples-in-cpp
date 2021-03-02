// ˅
#include "behavioral_patterns/mediator/ColleagueRadioButton.h"

using namespace System;

// ˄

ColleagueRadioButton::ColleagueRadioButton(msclr::gcroot<RadioButton^> radio_button, Mediator* mediator)
	: radio_button(radio_button)
	// ˅
	, Colleague(mediator)
	// ˄
{
	// ˅
	CLIWrapper^ cli_wrapper = gcnew CLIWrapper(mediator);
	radio_button->CheckedChanged += gcnew EventHandler(cli_wrapper, &CLIWrapper::colleagueChanged);
	// ˄
}

ColleagueRadioButton::~ColleagueRadioButton()
{
	// ˅
	
	// ˄
}

void ColleagueRadioButton::setActivation(const bool is_enable)
{
	// ˅
	radio_button->Enabled = is_enable;
	// ˄
}

bool ColleagueRadioButton::isSelected()
{
	// ˅
	return radio_button->Checked;
	// ˄
}

// ˅

// ˄
