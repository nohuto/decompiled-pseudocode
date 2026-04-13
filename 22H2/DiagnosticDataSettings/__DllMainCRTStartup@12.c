/*
 * XREFs of __DllMainCRTStartup@12 @ 0x10004250
 * Callers:
 *     <none>
 * Callees:
 *     dllmain_dispatch @ 0x1000411C (dllmain_dispatch.c)
 *     ___security_init_cookie @ 0x100042E0 (___security_init_cookie.c)
 */

BOOL __stdcall _DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    __security_init_cookie();
  return dllmain_dispatch(hinstDLL, fdwReason, lpReserved);
}
