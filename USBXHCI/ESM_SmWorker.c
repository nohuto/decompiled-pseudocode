void __fastcall ESM_SmWorker(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  char v2; // bp
  __int64 *v3; // r14
  int v5; // ebx
  KIRQL v6; // al
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  KIRQL NewIrql; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v3 = (__int64 *)Context[120];
  if ( (*(_DWORD *)(*(_QWORD *)(Context[121]
                              + 8LL
                              * (unsigned int)(*((_DWORD *)Context + *((unsigned int *)Context + 220) + 213)
                                             - *((_DWORD *)Context + 244)))
                  + 16LL) & 0x10) == 0
    && *((_BYTE *)Context + 1018) )
  {
    v2 = Controller_RaiseAndTrackIrql(*v3);
  }
  v5 = ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState((unsigned int *)Context);
  v6 = KeAcquireSpinLockRaiseToDpc(Context + 105);
  v7 = Context[120];
  NewIrql = v6;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 1632))(WdfDriverGlobals, v7);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01023 + 1640))(
    WdfDriverGlobals,
    v8,
    "State Machine Tag",
    884LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\smengine.c");
  ESM_RunStateMachine((char *)Context, v5, &NewIrql);
  KeReleaseSpinLock(Context + 105, NewIrql);
  if ( v2 && KeGetCurrentIrql() == 2 )
    Controller_LowerAndTrackIrql((_QWORD *)*v3);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 1632))(
         WdfDriverGlobals,
         Context[120]);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01023 + 1648))(
    WdfDriverGlobals,
    v9,
    "State Machine Tag",
    902LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\smengine.c");
}
