__int64 __fastcall HUBDSM_AcquiringPowerReferenceOnHubOnAttach(__int64 a1)
{
  __int64 v1; // rsi
  KIRQL v2; // di
  __int64 v3; // rax
  int v4; // ebx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = KfRaiseIrql(2u);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)v1);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, int, const char *))(WdfFunctions_01015
                                                                                                  + 3504))(
         WdfDriverGlobals,
         v3,
         0LL,
         0LL,
         9647,
         "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  KeLowerIrql(v2);
  if ( v4 >= 0 )
    _InterlockedOr((volatile signed __int32 *)(v1 + 1636), 0x100u);
  return 4077LL;
}
