#include "pch.h"
#include "MainWindow.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String ^> ^args)
{
	calculator::MainWindow mainWindow;
	Application::Run(%mainWindow);

    return 0;
}
