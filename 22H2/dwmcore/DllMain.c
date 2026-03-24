/*
 * XREFs of DllMain @ 0x1800E91A4
 * Callers:
 *     dllmain_dispatch @ 0x1800E7340 (dllmain_dispatch.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  return DwmCoreDllMain(hinstDLL, fdwReason);
}
