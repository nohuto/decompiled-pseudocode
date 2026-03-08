/*
 * XREFs of HUBREG_SetVidPidRevForPort @ 0x1C008972C
 * Callers:
 *     HUBPDO_CreatePdoInternal @ 0x1C007EDF4 (HUBPDO_CreatePdoInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     HUBREG_OpenPortSubkey @ 0x1C00892DC (HUBREG_OpenPortSubkey.c)
 */

__int64 __fastcall HUBREG_SetVidPidRevForPort(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  __int64 v4; // [rsp+28h] [rbp-40h]
  __int64 v5; // [rsp+40h] [rbp-28h] BYREF
  _WORD v6[4]; // [rsp+48h] [rbp-20h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v5 = 0LL;
  result = HUBREG_OpenPortSubkey(*(_QWORD *)a1, *(_WORD *)(v1 + 200), 0x2001Fu, &v5);
  if ( (int)result >= 0 )
  {
    v6[0] = *(_WORD *)(a1 + 1996);
    v6[1] = *(_WORD *)(a1 + 1998);
    v6[2] = *(_WORD *)(a1 + 2000);
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int, _WORD *))(WdfFunctions_01015 + 1928))(
               WdfDriverGlobals,
               v5,
               &g_VidPidRev,
               3LL,
               6,
               v6);
    if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v4) = result;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                 2u,
                 5u,
                 0xA5u,
                 (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids,
                 v4);
    }
  }
  if ( v5 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1848))(WdfDriverGlobals, v5);
  return result;
}
