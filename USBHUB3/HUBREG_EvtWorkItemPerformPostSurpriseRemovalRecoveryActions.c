__int64 __fastcall HUBREG_EvtWorkItemPerformPostSurpriseRemovalRecoveryActions(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // edi
  int v5; // ebx
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rax
  unsigned __int16 v9; // r9
  __int64 v11; // [rsp+28h] [rbp-48h]
  struct _UNICODE_STRING v12; // [rsp+50h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+98h] [rbp+28h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+30h] BYREF

  v14 = 0;
  DestinationString = 0LL;
  v12 = 0LL;
  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     WdfDriverGlobals->Driver,
                     off_1C006A1E8)
                 + 80);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3016))(WdfDriverGlobals, v2);
  v4 = 1;
  if ( (*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2968))(
         WdfDriverGlobals,
         v3,
         1LL) )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 3024))(
           WdfDriverGlobals,
           v2,
           0LL,
           0LL);
    if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             WdfDriverGlobals->Driver,
             off_1C006A1E8);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v6 + 64),
        2u,
        2u,
        0x15u,
        (__int64)&WPP_354a0f7c514c308e6a0f4d9506e11eea_Traceguids,
        v5);
    }
  }
  v15 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Usb\\Ceip");
  RtlInitUnicodeString(&v12, L"BootPathSurpriseRemovalCount");
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *, __int64, _DWORD, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1840))(
         WdfDriverGlobals,
         0LL,
         &DestinationString,
         131103LL,
         0,
         0LL,
         0LL,
         &v15);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C006A1E8);
    v9 = 116;
    goto LABEL_13;
  }
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, unsigned int *))(WdfFunctions_01015 + 1920))(
         WdfDriverGlobals,
         v15,
         &v12,
         &v14);
  if ( v7 >= 0 )
  {
    v4 = v14 + 1;
LABEL_10:
    v14 = v4;
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, _QWORD))(WdfFunctions_01015 + 1968))(
           WdfDriverGlobals,
           v15,
           &v12,
           v4);
    if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             WdfDriverGlobals->Driver,
             off_1C006A1E8);
      v9 = 118;
LABEL_13:
      LODWORD(v11) = v7;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v8 + 64),
        2u,
        2u,
        v9,
        (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids,
        v11);
      goto LABEL_14;
    }
    goto LABEL_14;
  }
  if ( v7 == -1073741772 )
    goto LABEL_10;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C006A1E8);
    v9 = 117;
    goto LABEL_13;
  }
LABEL_14:
  if ( v15 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
}
