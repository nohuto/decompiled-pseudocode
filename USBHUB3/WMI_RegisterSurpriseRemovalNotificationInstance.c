__int64 __fastcall WMI_RegisterSurpriseRemovalNotificationInstance(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 result; // rax
  int v6; // [rsp+28h] [rbp-80h]
  _QWORD v7[8]; // [rsp+30h] [rbp-78h] BYREF
  int v8; // [rsp+70h] [rbp-38h] BYREF
  GUID v9; // [rsp+74h] [rbp-34h]
  int v10; // [rsp+84h] [rbp-24h]
  __int128 v11; // [rsp+88h] [rbp-20h]

  HIDWORD(v7[0]) = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A0F8);
  v8 = 40;
  v10 = 1;
  v11 = 0LL;
  v3 = v2;
  v9 = GUID_USB_WMI_SURPRISE_REMOVAL_NOTIFICATION;
  memset(v7, 0, sizeof(v7));
  v7[2] = &v8;
  LODWORD(v7[0]) = 64;
  BYTE1(v7[3]) = 1;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C006A1E8);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, __int64))(WdfFunctions_01015 + 2984))(
             WdfDriverGlobals,
             a1,
             v7,
             0LL,
             v4 + 80);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) + 1432LL),
             2u,
             5u,
             0x12u,
             (__int64)&WPP_354a0f7c514c308e6a0f4d9506e11eea_Traceguids,
             v6);
  }
  return result;
}
