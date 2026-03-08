/*
 * XREFs of HUBREG_EvtWorkItemUpdateSqmDeviceSelectiveSuspended @ 0x1C00886C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     HUBREG_WriteValueToDeviceHardwareKey @ 0x1C00867FC (HUBREG_WriteValueToDeviceHardwareKey.c)
 */

__int64 __fastcall HUBREG_EvtWorkItemUpdateSqmDeviceSelectiveSuspended(__int64 a1)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3048))(WdfDriverGlobals, a1);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             v2,
             off_1C006A0F8);
  v4 = *(_QWORD *)(result + 24);
  if ( v4 )
  {
    v5 = (*(_DWORD *)(v4 + 1632) >> 10) & 1;
    HUBREG_WriteValueToDeviceHardwareKey(v4, (__int64)L"02", 4u, 4, (__int64)&v5);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
  }
  return result;
}
