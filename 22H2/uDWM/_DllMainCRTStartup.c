/*
 * XREFs of _DllMainCRTStartup @ 0x1800549A4
 * Callers:
 *     _DllMainStartup @ 0x180040D20 (_DllMainStartup.c)
 * Callees:
 *     __security_init_cookie @ 0x180054D44 (__security_init_cookie.c)
 */

__int64 __fastcall DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return _DllMainCRTStartup(hinstDLL, fdwReason);
}
