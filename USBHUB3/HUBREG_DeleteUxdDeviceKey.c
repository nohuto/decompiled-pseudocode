/*
 * XREFs of HUBREG_DeleteUxdDeviceKey @ 0x1C00871F0
 * Callers:
 *     HUBREG_DeleteUxdSettings @ 0x1C00878E8 (HUBREG_DeleteUxdSettings.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C000C4DC (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_DeleteUxdDeviceKey(__int64 a1)
{
  NTSTATUS v2; // ebx
  __int64 v4; // [rsp+20h] [rbp-88h]
  __int64 v5; // [rsp+28h] [rbp-80h]
  __int64 v6; // [rsp+40h] [rbp-68h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-60h] BYREF
  __int64 v8; // [rsp+58h] [rbp-50h] BYREF

  *(_QWORD *)&DestinationString.Length = 3407872LL;
  DestinationString.Buffer = (wchar_t *)&v8;
  v6 = 0LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015
                                                                                                  + 1832))(
         WdfDriverGlobals,
         0LL,
         &g_UxdDeviceSettingsKey,
         131097LL,
         0LL,
         &v6);
  if ( v2 >= 0 )
  {
    LODWORD(v4) = *(unsigned __int16 *)(a1 + 2000);
    v2 = RtlUnicodeStringPrintf(
           &DestinationString,
           L"%04X%04X%04X",
           *(unsigned __int16 *)(a1 + 1996),
           *(unsigned __int16 *)(a1 + 1998),
           v4);
    if ( v2 >= 0 )
    {
      v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1872))(
             WdfDriverGlobals,
             v6,
             &DestinationString);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v5) = v2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x69u,
        (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids,
        v5);
    }
  }
  if ( v6 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v2;
}
