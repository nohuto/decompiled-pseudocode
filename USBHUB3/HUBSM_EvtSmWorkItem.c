void __fastcall HUBSM_EvtSmWorkItem(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  KIRQL v5; // al
  __int64 v6; // r9
  __int64 v7; // rax
  KIRQL NewIrql; // [rsp+48h] [rbp+10h] BYREF

  v3 = HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(a2);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(a2 + 960));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v4,
    "State Machine Worker Tag",
    1060LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 840));
  LOBYTE(v6) = 1;
  NewIrql = v5;
  HUBSM_RunStateMachine(a2, v3, &NewIrql, v6);
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 840), NewIrql);
  LOBYTE(v3) = KfRaiseIrql(2u);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(a2 + 960));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
    WdfDriverGlobals,
    v7,
    "State Machine Worker Tag",
    1088LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
  KeLowerIrql(v3);
}
