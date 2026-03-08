/*
 * XREFs of WMI_RegisterDevice @ 0x1C008C18C
 * Callers:
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C007CF20 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 */

__int64 __fastcall WMI_RegisterDevice(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 result; // rax
  int v5; // [rsp+28h] [rbp-21h]
  _QWORD v6[8]; // [rsp+30h] [rbp-19h] BYREF
  int v7; // [rsp+70h] [rbp+27h] BYREF
  GUID v8; // [rsp+74h] [rbp+2Bh]
  __int128 v9; // [rsp+84h] [rbp+3Bh]
  int v10; // [rsp+94h] [rbp+4Bh]

  HIDWORD(v6[0]) = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A0F8);
  v10 = 0;
  v7 = 40;
  v3 = v2;
  v9 = 0LL;
  v8 = GUID_USB_WMI_NODE_INFO;
  memset(v6, 0, sizeof(v6));
  v6[2] = &v7;
  LODWORD(v6[0]) = 64;
  v6[4] = WMI_QueryInstanceDeviceNodeInfo;
  BYTE1(v6[3]) = 1;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 2984))(
             WdfDriverGlobals,
             a1,
             v6,
             0LL,
             0LL);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) + 1432LL),
             2u,
             5u,
             0x11u,
             (__int64)&WPP_354a0f7c514c308e6a0f4d9506e11eea_Traceguids,
             v5);
  }
  return result;
}
