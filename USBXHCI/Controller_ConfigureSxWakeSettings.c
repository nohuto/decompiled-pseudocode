/*
 * XREFs of Controller_ConfigureSxWakeSettings @ 0x1C006EBF4
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C006FA60 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_ConfigureSxWakeSettings(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  int v4; // edx
  _DWORD v5[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+40h] [rbp-18h]

  v1 = *a1;
  v7 = 257;
  v5[0] = 20;
  v5[1] = 5;
  v6 = 1LL;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01023 + 376))(
             WdfDriverGlobals,
             v1,
             v5);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 2;
    return WPP_RECORDER_SF_d(a1[9], v4, 4, 33, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, result);
  }
  return result;
}
