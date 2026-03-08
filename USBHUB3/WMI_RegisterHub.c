/*
 * XREFs of WMI_RegisterHub @ 0x1C008BFA4
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0078890 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 */

__int64 __fastcall WMI_RegisterHub(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  int v4; // eax
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp-31h]
  int v7; // [rsp+30h] [rbp-31h]
  _QWORD v8[8]; // [rsp+38h] [rbp-29h] BYREF
  int v9; // [rsp+78h] [rbp+17h] BYREF
  GUID v10; // [rsp+7Ch] [rbp+1Bh]
  __int128 v11; // [rsp+8Ch] [rbp+2Bh]
  int v12; // [rsp+9Ch] [rbp+3Bh]

  HIDWORD(v8[0]) = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A198);
  v12 = 0;
  v9 = 40;
  v11 = 0LL;
  v3 = v2;
  v10 = GUID_USB_WMI_STD_DATA;
  memset(v8, 0, sizeof(v8));
  LODWORD(v8[0]) = 64;
  v8[2] = &v9;
  BYTE1(v8[3]) = 1;
  v8[7] = WMI_ExecuteMethodUsbWmiStdData;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, __int64))(WdfFunctions_01015 + 2984))(
         WdfDriverGlobals,
         a1,
         v8,
         0LL,
         v3 + 2536);
  if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3 + 2520),
      2u,
      3u,
      0xFu,
      (__int64)&WPP_354a0f7c514c308e6a0f4d9506e11eea_Traceguids,
      v7);
  }
  v12 = 0;
  v9 = 40;
  v11 = 0LL;
  v10 = GUID_USB_WMI_NODE_INFO;
  memset(v8, 0, sizeof(v8));
  v8[2] = &v9;
  LODWORD(v8[0]) = 64;
  v8[4] = WMI_QueryInstanceHubNodeInfo;
  BYTE1(v8[3]) = 1;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 2984))(
             WdfDriverGlobals,
             a1,
             v8,
             0LL,
             0LL);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v6) = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(v3 + 2520),
             2u,
             3u,
             0x10u,
             (__int64)&WPP_354a0f7c514c308e6a0f4d9506e11eea_Traceguids,
             v6);
  }
  return result;
}
