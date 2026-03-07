__int64 __fastcall HUBFDO_EvtDeviceArmWakeFromS0(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A198);
  _InterlockedOr((volatile signed __int32 *)(v1 + 40), 0x200u);
  _InterlockedOr((volatile signed __int32 *)(v1 + 40), 0x400u);
  return 0LL;
}
