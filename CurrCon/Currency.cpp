#include "Currency.h"


using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CurrCon::Currency form;
	Application::Run(% form);
}
