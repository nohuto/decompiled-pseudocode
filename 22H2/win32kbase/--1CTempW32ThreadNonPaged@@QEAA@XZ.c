/*
 * XREFs of ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C0037ECC
 * Callers:
 *     ?W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C008B990 (-W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     W32kEtwEnableCallback @ 0x1C00AF6CC (W32kEtwEnableCallback.c)
 *     RIMDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C00C3A38 (RIMDeviceClassNotifyUsingAsyncPnpWorkNotification.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00C5070 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     Win32kBaseVideoPortCallout @ 0x1C00CD350 (Win32kBaseVideoPortCallout.c)
 *     W32CalloutDispatch @ 0x1C00DE840 (W32CalloutDispatch.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0134470 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0138810 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     RIMDeviceNotifyUsingAsyncPnpWorkNotification @ 0x1C01A1F10 (RIMDeviceNotifyUsingAsyncPnpWorkNotification.c)
 *     rimDeviceResetApc @ 0x1C01B4D80 (rimDeviceResetApc.c)
 *     Win32kBaseDriverEntry @ 0x1C02DEBC0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     DereferenceW32Thread @ 0x1C0037F20 (DereferenceW32Thread.c)
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
