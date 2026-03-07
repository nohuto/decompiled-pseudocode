__int64 __fastcall HUBREG_DeleteUxdPortKey(__int64 a1, unsigned int a2)
{
  NTSTATUS v4; // ebx
  unsigned __int16 v5; // r9
  __int64 v7; // [rsp+28h] [rbp-41h]
  __int64 v8; // [rsp+50h] [rbp-19h] BYREF
  __int64 v9; // [rsp+58h] [rbp-11h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  char v11; // [rsp+70h] [rbp+7h] BYREF

  *(_QWORD *)&DestinationString.Length = 3670016LL;
  v8 = 0LL;
  v9 = 0LL;
  DestinationString.Buffer = (wchar_t *)&v11;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16),
         1LL,
         983103LL,
         0LL,
         &v8);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_16;
    v5 = 109;
    goto LABEL_4;
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
         WdfDriverGlobals,
         v8,
         &g_UxdPortSettingsKey,
         983103LL,
         0LL,
         &v9);
  if ( v4 == -1073741772 )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _DWORD, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1840))(
           WdfDriverGlobals,
           v8,
           &g_UxdPortSettingsKey,
           983103LL,
           0,
           0LL,
           0LL,
           &v9);
    if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 110;
LABEL_4:
      LODWORD(v7) = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        v5,
        (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids,
        v7);
    }
  }
  else if ( v4 >= 0 )
  {
    v4 = RtlUnicodeStringPrintf(&DestinationString, L"uxd_port_%3.3d", a2);
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1872))(
             WdfDriverGlobals,
             v9,
             &DestinationString);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 112;
      goto LABEL_4;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = 111;
    goto LABEL_4;
  }
LABEL_16:
  if ( v8 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v9 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v4;
}
