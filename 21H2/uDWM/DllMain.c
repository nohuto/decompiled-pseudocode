/*
 * XREFs of DllMain @ 0x180057274
 * Callers:
 *     __DllMainCRTStartup @ 0x180054A98 (__DllMainCRTStartup.c)
 * Callees:
 *     McGenEventRegister_EtwEventRegister @ 0x180042FF8 (McGenEventRegister_EtwEventRegister.c)
 *     ?SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z @ 0x180043038 (-SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z.c)
 *     McGenEventUnregister_EtwEventUnregister @ 0x18008D6E4 (McGenEventUnregister_EtwEventUnregister.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  void (*v3)(bool, const struct wil::FailureInfo *); // rdx
  wil *v4; // rcx

  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      g_hInstance = hinstDLL;
      DisableThreadLibraryCalls(hinstDLL);
      wil::SetResultTelemetryFallback(v4, v3);
      McGenEventRegister_EtwEventRegister();
    }
  }
  else
  {
    McGenEventUnregister_EtwEventUnregister(hinstDLL, fdwReason, lpvReserved);
  }
  return 1;
}
