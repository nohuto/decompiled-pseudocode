/*
 * XREFs of ??1CTempW32TlsForThread@@QEAA@XZ @ 0x1C0047598
 * Callers:
 *     RIMDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C00456F8 (RIMDeviceClassNotifyUsingAsyncPnpWorkNotification.c)
 *     W32kEtwEnableCallback @ 0x1C00B53AC (W32kEtwEnableCallback.c)
 *     ?W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00C5660 (-W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00C5C20 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     Win32kBaseVideoPortCallout @ 0x1C00D4DB0 (Win32kBaseVideoPortCallout.c)
 *     W32CalloutDispatch @ 0x1C00E4D10 (W32CalloutDispatch.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01481B0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C014C410 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     RIMDeviceNotifyUsingAsyncPnpWorkNotification @ 0x1C01AA4F8 (RIMDeviceNotifyUsingAsyncPnpWorkNotification.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTempW32TlsForThread::~CTempW32TlsForThread(CTempW32TlsForThread *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  if ( *((int *)this + 2) >= 0 )
  {
    if ( PsGetCurrentThreadWin32Thread(this, a2, a3) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
    PsTlsSetValue(*((unsigned int *)gpxsGlobals + 12), 0LL);
  }
}
