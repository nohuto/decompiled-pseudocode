__int64 __fastcall HUBFDO_RegisterSleepstudyBlockerReason(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v10; // r13
  NTSTATUS v11; // ebx
  unsigned __int16 v12; // r9
  __int128 v13; // xmm1
  __int64 v14; // rcx
  int v15; // eax
  NTSTATUS v17; // [rsp+28h] [rbp-D8h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v20; // [rsp+50h] [rbp-B0h] BYREF
  char v21; // [rsp+60h] [rbp-A0h] BYREF

  DestinationString.Buffer = (wchar_t *)&v21;
  *(_QWORD *)&DestinationString.Length = 0x2000000LL;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_1C006A1E8);
  v11 = RtlUnicodeStringPrintf(&DestinationString, L"%wZ (%s)", a3, a5);
  if ( v11 >= 0 )
  {
    v13 = *a2;
    v14 = *(_QWORD *)(v10 + 96);
    if ( !qword_1C006DD00
      || (v19 = *a4,
          v20 = v13,
          v15 = qword_1C006DD00(v14, &v20, &v19, &DestinationString, a6),
          v11 = v15,
          v15 == -1073741637) )
    {
      v11 = 0;
      *a6 = &SleepstudyHelperUnsupportedHandle;
      return (unsigned int)v11;
    }
    if ( v15 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 105;
      goto LABEL_4;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = 104;
LABEL_4:
    v17 = v11;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      2u,
      2u,
      v12,
      (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
      v17);
  }
  return (unsigned int)v11;
}
