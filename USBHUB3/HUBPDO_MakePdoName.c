/*
 * XREFs of HUBPDO_MakePdoName @ 0x1C007EA80
 * Callers:
 *     HUBPDO_CreatePdoInternal @ 0x1C007EDF4 (HUBPDO_CreatePdoInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C000C4DC (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_MakePdoName(__int64 a1, __int64 a2)
{
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  unsigned __int16 v6; // r9
  NTSTATUS v8; // [rsp+28h] [rbp-100h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-F8h] BYREF
  char v10; // [rsp+40h] [rbp-E8h] BYREF

  *(_QWORD *)&DestinationString.Length = 12582912LL;
  DestinationString.Buffer = (wchar_t *)&v10;
  v4 = RtlUnicodeStringPrintf(&DestinationString, L"\\Device\\USBPDO-%d");
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 536))(
           WdfDriverGlobals,
           a2,
           &DestinationString);
    v5 = v4;
    if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 106;
      goto LABEL_7;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = 105;
LABEL_7:
    v8 = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v6,
      (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
      v8);
  }
  return v5;
}
