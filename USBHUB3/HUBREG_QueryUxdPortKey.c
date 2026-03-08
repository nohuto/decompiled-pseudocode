/*
 * XREFs of HUBREG_QueryUxdPortKey @ 0x1C0086DEC
 * Callers:
 *     HUBREG_UpdateUxdSettings @ 0x1C0087358 (HUBREG_UpdateUxdSettings.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C000C4DC (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 */

__int64 __fastcall HUBREG_QueryUxdPortKey(__int64 a1, unsigned int a2, void *a3)
{
  NTSTATUS v6; // ebx
  unsigned __int16 v7; // r9
  __int64 v9; // [rsp+28h] [rbp-51h]
  __int64 v10; // [rsp+50h] [rbp-29h] BYREF
  __int64 v11; // [rsp+58h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-19h] BYREF
  char v13; // [rsp+70h] [rbp-9h] BYREF

  *(_QWORD *)&DestinationString.Length = 3670016LL;
  v10 = 0LL;
  v11 = 0LL;
  DestinationString.Buffer = (wchar_t *)&v13;
  memset(a3, 0, 0x44uLL);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16),
         1LL,
         983103LL,
         0LL,
         &v10);
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_16;
    v7 = 100;
    goto LABEL_4;
  }
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
         WdfDriverGlobals,
         v10,
         &g_UxdPortSettingsKey,
         131097LL,
         0LL,
         &v11);
  if ( v6 == -1073741772 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _DWORD, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1840))(
           WdfDriverGlobals,
           v10,
           &g_UxdPortSettingsKey,
           131097LL,
           0,
           0LL,
           0LL,
           &v11);
    if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 101;
LABEL_4:
      LODWORD(v9) = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        v7,
        (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids,
        v9);
    }
  }
  else if ( v6 >= 0 )
  {
    v6 = RtlUnicodeStringPrintf(&DestinationString, L"uxd_port_%3.3d", a2);
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, void *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
             WdfDriverGlobals,
             v11,
             &DestinationString,
             68LL,
             a3,
             0LL,
             0LL);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 103;
      goto LABEL_4;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = 102;
    goto LABEL_4;
  }
LABEL_16:
  if ( v10 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v11 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v6;
}
