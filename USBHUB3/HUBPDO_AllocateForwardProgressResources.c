/*
 * XREFs of HUBPDO_AllocateForwardProgressResources @ 0x1C001C944
 * Callers:
 *     HUBPDO_EvtDeviceUsageNotificationEx @ 0x1C001CA80 (HUBPDO_EvtDeviceUsageNotificationEx.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_AllocateForwardProgressResources(_QWORD *a1)
{
  __int64 v2; // rax
  int v3; // ebx
  int v5; // [rsp+28h] [rbp-50h]
  __int128 v6; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+40h] [rbp-38h]
  __int64 v8; // [rsp+48h] [rbp-30h]
  __int128 v9; // [rsp+50h] [rbp-28h]
  __int64 v10; // [rsp+60h] [rbp-18h]

  v10 = 0LL;
  v7 = 0LL;
  v8 = 0x100000001LL;
  v6 = 0LL;
  LODWORD(v6) = 56;
  v9 = 0LL;
  *(_QWORD *)&v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(
                     WdfDriverGlobals,
                     a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(*a1 + 16LL));
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, _QWORD *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         &v6,
         v2,
         a1 + 281);
  if ( v3 >= 0 )
  {
    a1[283] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                WdfDriverGlobals,
                a1[281]);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = v3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 1432LL),
      2u,
      5u,
      0x97u,
      (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
      v5);
  }
  return (unsigned int)v3;
}
