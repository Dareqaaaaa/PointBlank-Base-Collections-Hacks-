/*
CONCEPT BASED ON ( http://www.nologin.org/Downloads/Papers/remote-library-injection.pdf ) 
	> I DIDNT MANAGE TO FORCE NTOPENFILE TO RETURN A VALID FILEHANDLE WITH A NON EXISTANT FILE...
	ONLY WAY I FIGURE OUT IS BY POINTING TO A DUMMY MODULE ON HD.

CREDITS:
	> nologin( Concept )
	> Azorbix( Detours )
	> ntKid( Coder )
COOL PLACES:
	> http://www.gamedeception.net ( Almond Pralin� )
	> http://www.uc-forum.com ( Almond Pralin� )
*/
#include <windows.h>


BOOL __stdcall DllMain( HMODULE _Module, ULONG _Reason, LPVOID _Reserved )
{
	switch (_Reason)
	{
	case DLL_PROCESS_ATTACH:
		MessageBox(0, "AAA", "Sucess", 0);
	}
	return TRUE;
}