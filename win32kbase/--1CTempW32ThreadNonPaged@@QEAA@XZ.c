/*
 * XREFs of ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C007012C
 * Callers:
 *     RIMDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C0037A80 (RIMDeviceClassNotifyUsingAsyncPnpWorkNotification.c)
 *     W32kEtwEnableCallback @ 0x1C00BE69C (W32kEtwEnableCallback.c)
 *     ?W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00D3750 (-W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00D44A0 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     Win32kBaseVideoPortCallout @ 0x1C00D9A00 (Win32kBaseVideoPortCallout.c)
 *     W32CalloutDispatch @ 0x1C00ED390 (W32CalloutDispatch.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C015C290 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0161760 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     RIMDeviceNotifyUsingAsyncPnpWorkNotification @ 0x1C01D0004 (RIMDeviceNotifyUsingAsyncPnpWorkNotification.c)
 *     rimDeviceResetApc @ 0x1C01E2FC0 (rimDeviceResetApc.c)
 *     Win32kBaseDriverEntry @ 0x1C0320F10 (Win32kBaseDriverEntry.c)
 * Callees:
 *     DereferenceW32Thread @ 0x1C0070180 (DereferenceW32Thread.c)
 */

void __fastcall CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged(CTempW32ThreadNonPaged *this)
{
  void *v1; // rcx

  if ( *((_BYTE *)this + 200) )
  {
    PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, this);
  }
  else
  {
    v1 = *(void **)this;
    if ( v1 )
      DereferenceW32Thread(v1);
  }
}
