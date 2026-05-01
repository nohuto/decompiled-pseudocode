/*
 * XREFs of DllMain @ 0x18000A9A8
 * Callers:
 *     __DllMainCRTStartup @ 0x18000A024 (__DllMainCRTStartup.c)
 * Callees:
 *     ?FreeResourceManagerProxy@@YAXXZ @ 0x180001E4C (-FreeResourceManagerProxy@@YAXXZ.c)
 *     RmpClientInitializeCoreApi @ 0x180008870 (RmpClientInitializeCoreApi.c)
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x18000D648 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  REGHANDLE v4; // rcx

  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      TraceLoggingRegisterEx_EventRegister_EventSetInformation(hinstDLL, fdwReason, lpvReserved);
      RmpClientInitializeCoreApi();
      DisableThreadLibraryCalls(hinstDLL);
    }
  }
  else
  {
    FreeResourceManagerProxy();
    v4 = RegHandle;
    RegHandle = 0LL;
    dword_180024000 = 0;
    EventUnregister(v4);
  }
  return 1;
}
