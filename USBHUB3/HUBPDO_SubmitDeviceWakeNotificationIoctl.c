/*
 * XREFs of HUBPDO_SubmitDeviceWakeNotificationIoctl @ 0x1C001C570
 * Callers:
 *     HUBPDO_EvtDeviceEnableWakeAtBus @ 0x1C001C7C0 (HUBPDO_EvtDeviceEnableWakeAtBus.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 */

__int64 __fastcall HUBPDO_SubmitDeviceWakeNotificationIoctl(_QWORD *a1)
{
  unsigned int v1; // edi
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // r14
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  __int64 v11; // [rsp+28h] [rbp-41h]
  _DWORD v12[6]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v13[9]; // [rsp+48h] [rbp-21h] BYREF

  v1 = 0;
  v3 = *(_QWORD *)(*a1 + 32LL);
  v4 = a1[2];
  memset(&v12[1], 0, 20);
  v5 = *(_QWORD *)(v4 + 264);
  v12[0] = 24;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 1992))(
         WdfDriverGlobals,
         v5,
         v12);
  if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C006A1E8);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v7 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
      v6);
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v5,
         off_1C006A310);
  *(_OWORD *)v8 = 0LL;
  *(_QWORD *)(v8 + 16) = 0LL;
  *(_WORD *)(v8 + 2) = 24;
  KeClearEvent((PRKEVENT)(v8 + 24));
  memset(v13, 0, sizeof(v13));
  v13[2] = a1[3];
  LOBYTE(v13[0]) = 15;
  LODWORD(v13[3]) = 4784139;
  v13[1] = v8;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
    WdfDriverGlobals,
    v5,
    v13);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _UNKNOWN **(__fastcall *)(__int64, __int64, __int64, __int64), _QWORD *))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v5,
    HUBPDO_WakeNotificationIoctlComplete,
    a1);
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
          WdfDriverGlobals,
          v5,
          v3,
          0LL) )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v5);
    v1 = v9;
    if ( v9 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v11) = v9;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432LL),
        4u,
        5u,
        0x96u,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v11);
    }
  }
  return v1;
}
