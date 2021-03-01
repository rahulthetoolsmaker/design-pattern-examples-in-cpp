// ˅
#include "behavioral_patterns/interpreter/CommandList.h"
#include "behavioral_patterns/interpreter/Command.h"
#include "behavioral_patterns/interpreter/Context.h"

// ˄

CommandList::CommandList()
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

CommandList::~CommandList()
{
	// ˅
	
	// ˄
}

void CommandList::parse(Context* context)
{
	// ˅
	while (true) {
		if (context->getToken() == "") {
			exit(1);
		}
		else if (context->getToken() == "end") {
			context->slideToken("end");
			break;
		}
		else {
			shared_ptr<Node> a_node = shared_ptr<Node>(new Command());
			a_node->parse(context);
			nodes.push_back(a_node);
		}
	}
	// ˄
}

string CommandList::toString()
{
	// ˅
	string ret = "[";
	vector<shared_ptr<Node>>::const_iterator it = nodes.begin();
	while (it != nodes.end()) {
		ret += (*it)->toString();
		++it;
		if (it != nodes.end()) {
			ret += ", ";
		}
	}
	ret += "]";
	return ret;
	// ˄
}

// ˅

// ˄
