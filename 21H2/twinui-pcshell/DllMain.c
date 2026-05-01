/*
 * XREFs of DllMain @ 0x1800953A4
 * Callers:
 *     dllmain_dispatch @ 0x18008F8C0 (dllmain_dispatch.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x1800874F8 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     ?SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@Z@Z @ 0x1801AC338 (-SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@Z@Z.c)
 *     McGenEventRegister_EventRegister @ 0x1801AD98C (McGenEventRegister_EventRegister.c)
 *     McGenEventUnregister_EventUnregister @ 0x1801AD9C0 (McGenEventUnregister_EventUnregister.c)
 *     TlgRegisterAggregateProviderEx @ 0x1801AE994 (TlgRegisterAggregateProviderEx.c)
 *     TlgUnregisterAggregateProvider @ 0x1801AEAA4 (TlgUnregisterAggregateProvider.c)
 *     SHFusionUninitialize @ 0x1801AEDB4 (SHFusionUninitialize.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  void (*v4)(const struct wil::FailureInfo *); // rdx
  REGHANDLE v5; // rcx

  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      McGenEventRegister_EventRegister(
        hinstDLL,
        fdwReason,
        MICROSOFT_TWINUI_PUBLISHER_Context,
        MICROSOFT_TWINUI_PUBLISHER_Context);
      TlgRegisterAggregateProviderEx();
      EventSetInformation(
        MICROSOFT_TWINUI_PUBLISHER_Context[0],
        2LL,
        &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
        (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
      TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_180647708, 0LL, 0LL);
      hModule = hinstDLL;
      dword_180652728 = 123;
      DisableThreadLibraryCalls(hinstDLL);
      wil::SetResultLoggingCallback((wil *)lambda_782dd1c6212710f2b0fe5b424d5af40d_::_lambda_invoker_cdecl_, v4);
    }
  }
  else
  {
    McGenEventUnregister_EventUnregister(MICROSOFT_TWINUI_PUBLISHER_Context, fdwReason, lpvReserved);
    TlgUnregisterAggregateProvider();
    v5 = RegHandle;
    RegHandle = 0LL;
    dword_180647708 = 0;
    EventUnregister(v5);
    SHFusionUninitialize();
  }
  return 1;
}
