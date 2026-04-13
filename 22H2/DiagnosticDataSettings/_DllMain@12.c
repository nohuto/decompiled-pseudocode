/*
 * XREFs of _DllMain@12 @ 0x100021DB
 * Callers:
 *     dllmain_dispatch @ 0x1000411C (dllmain_dispatch.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason == 1 )
    DisableThreadLibraryCalls(hinstDLL);
  return 1;
}
