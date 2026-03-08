/*
 * XREFs of FWUPDATE_EvtIoDeviceControl @ 0x1C003FF80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FWUPDATE_EvtIoDeviceControl(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 2032))(WdfDriverGlobals);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           v3);
}
