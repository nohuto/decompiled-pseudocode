/*
 * XREFs of HUBFDO_GetDeviceCapabilities @ 0x1C000D0E8
 * Callers:
 *     HUBFDO_EvtDeviceAdd @ 0x1C0077680 (HUBFDO_EvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 */

__int64 __fastcall HUBFDO_GetDeviceCapabilities(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v6; // r14
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v11[24]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v12[9]; // [rsp+50h] [rbp-29h] BYREF
  __int128 v13; // [rsp+98h] [rbp+1Fh] BYREF

  v13 = 0LL;
  memset(v11, 0, sizeof(v11));
  memset(v12, 0, sizeof(v12));
  v10 = 0LL;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, a1);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         0LL,
         v6,
         &v10);
  if ( v7 >= 0 )
  {
    *(_QWORD *)&v11[12] = 0LL;
    *(_DWORD *)&v11[20] = 0;
    *(_QWORD *)v11 = 24LL;
    *(_DWORD *)&v11[8] = -1073741637;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _BYTE *))(WdfFunctions_01015 + 1992))(
      WdfDriverGlobals,
      v10,
      v11);
    memset(a2, 0, 0x40uLL);
    v8 = v10;
    *a2 = 65600;
    a2[2] = -1;
    a2[3] = -1;
    LOWORD(v12[0]) = 2331;
    v12[1] = a2;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
      WdfDriverGlobals,
      v8,
      v12);
    v13 = 0x200000010uLL;
    if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int128 *))(WdfFunctions_01015
                                                                                               + 2024))(
            WdfDriverGlobals,
            v10,
            v6,
            &v13)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(a3, 2u, 5u, 0xAu, (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids);
    }
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v10);
  }
  if ( v10 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return (unsigned int)v7;
}
