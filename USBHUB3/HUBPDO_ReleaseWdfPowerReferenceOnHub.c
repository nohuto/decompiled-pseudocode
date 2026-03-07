void __fastcall HUBPDO_ReleaseWdfPowerReferenceOnHub(__int64 a1)
{
  KIRQL v2; // bl
  __int64 v3; // rax

  if ( (*(_DWORD *)(a1 + 1636) & 0x100) != 0 )
  {
    v2 = KfRaiseIrql(2u);
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
           WdfDriverGlobals,
           *(_QWORD *)a1);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
      WdfDriverGlobals,
      v3,
      0LL,
      9594LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
    KeLowerIrql(v2);
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFEFF);
  }
}
