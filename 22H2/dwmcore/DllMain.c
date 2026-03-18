/*
 * XREFs of DllMain @ 0x18011142C
 * Callers:
 *     dllmain_dispatch @ 0x18010F6DC (dllmain_dispatch.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  return DwmCoreDllMain(hinstDLL, fdwReason);
}
