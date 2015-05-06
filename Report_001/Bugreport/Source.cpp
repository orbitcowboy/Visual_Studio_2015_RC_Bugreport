#include <sstream>
void f(std::istream &is)
{
	int n, m;
	bool firstIter = true;
	while (is >> n)
	{
		if (firstIter)
		{
			firstIter = false;
			m = n;
		}
		else
		{
			if (m>n) // warning C4701 : potentially uninitialized local variable 'm' used
				return;
		}
	}
}

int main()
{
	return 0;
}

/*
All packages are already installed and there is nothing to restore.
NuGet package restore finished.
------ Build started: Project: Bugreport, Configuration: Debug Win32 ------
  Source.cpp
..\source.cpp(15): warning C4701: potentially uninitialized local variable 'm' used
  Bugreport.vcxproj -> ..\Bugreport.exe
========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========*/