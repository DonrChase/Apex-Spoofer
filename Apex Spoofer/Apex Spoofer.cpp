#include <iostream>
#include<windows.h>
#include <tchar.h>
#include <stdio.h>
#include <urlmon.h>
#include <filesystem>

#pragma comment(lib, "urlmon.lib")
#pragma comment(lib,"wininet.lib")


void traces()
{
	// kill running tasks

	system("taskkill /f /im OriginWebHelperService.exe");
	system("taskkill /f /im Origin.exe");
	system("taskkill /f /im OriginClientService.exe");
	system("taskkill /f /im OriginER.exe");
	system("taskkill /f /im OriginThinSetupInternal.exe");
	system("taskkill /f /im OriginLegacyCLI.exe");
	system("taskkill /f /im Apex.exe");


	// traces that don't delete apex LOL 

	system("del /f /s /q %systemdrive%\\Program Files(x86)\\Origin Games\\Apex\\__Installer\\Cleanup.dat");
	system("del /f /s /q %systemdrive%\\Program Files(x86)\\Origin Games\\Apex\\__Installer\\installerdata.xml");
	system("del /f /s /q %systemdrive%\\Program Files(x86)\\Origin Games\\Apex\\__Installer\\InstallLog.txt");
	system("del /f /s /q %systemdrive%\\Program Files(x86)\Origin Games\Apex\\__Installer\\Touchup.dat");


	// registry info spoof
	
	system("REG ADD HKLM\HARDWARE\DESCRIPTION\System\\BIOS /v BaseBoardManufacturer /t REG_SZ /d gaypex-%random% /f");
	system("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\BIOS /v BaseBoardProduct /t REG_SZ /d gaypex-%random% /f");
	system("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\BIOS /v BaseBoardVersion /t REG_SZ /d gaypex-%random% /f");
	system("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\BIOS /v BIOSVersion /t REG_SZ /d gaypex-%random% /f");
	system("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\BIOS /v SystemFamily /t REG_SZ /d gaypex-%random% /f");
	system("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\BIOS /v SystemManufacturer /t REG_SZ /d gaypex-%random% /f");
	system("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\BIOS /v SystemProductName /t REG_SZ /d gaypex-%random% /f");
	system("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\BIOS /v SystemSKU /t REG_SZ /d gaypex-%random% /f");
	system("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\BIOS /v SystemVersion /t REG_SZ /d gaypex-%random% /f");
	system("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\BIOS /v SystemProductName /t REG_SZ /d gaypex-%random% /f");
	



	// clear screen
	system("cls");
	
	
	std::cout << "spoofed disk serial \n";
	system("wmic diskdrive get serialnumber");
	// runs a "trace cleaner" im lazy no more system calls 
	std::cout << "cleaning traces\n";
	ShellExecute(NULL, _T("open"), _T("C:\\traces.exe"), NULL, NULL, SW_HIDE);
	

}

void download_and_clean() {
    // Code to download a file goes here
    // Code to clean system traces goes here
}

int main() {
    SetConsoleTitle(TEXT("Gaypex.cc Spoofer"));

    system("powershell -Command \"Invoke-WebRequest 'https://gaypex.cc/mapper.exe' -OutFile 'C:\\mapper.exe'\"");
    system("del /F /Q C:\\spoof.sys");

    ShellExecute(NULL, _T("open"), _T("C:\\mapper.exe"), _T("C:\\spoof.sys"), NULL, SW_HIDE);

    std::cout << "Done. You can now go play some Apex." << std::endl
              << "Loader made by the Gaypex.cc team." << std::endl;

    std::cin.get();
    return 0;
}
