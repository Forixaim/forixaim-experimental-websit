#include "HelloApplication.h"
//Attempt to reduce boilerplate
#define dom root()
#define appClass Wt::WApplication
#define addElem addWidget
#define pText std::make_unique<Wt::WText>
#define headTitle setTitle
#define app HelloApplication::HelloApplication
#define WEnv Wt::WEnvironment&

app(const WEnv env) : appClass(env)
{
	headTitle("Forixaim CS");
	dom->addElem(pText("Stuff"))->addStyleClass("");
}