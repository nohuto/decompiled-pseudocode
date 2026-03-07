__int64 __fastcall HUBREG_OpenPortSubkey(__int64 a1, unsigned __int16 a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v4; // r15d
  __int64 v5; // rdx
  NTSTATUS v9; // ebx
  unsigned __int16 v10; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // [rsp+20h] [rbp-B9h]
  __int64 v16; // [rsp+28h] [rbp-B1h]
  __int64 v17; // [rsp+50h] [rbp-89h] BYREF
  __int64 v18; // [rsp+58h] [rbp-81h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-79h] BYREF
  char v20; // [rsp+70h] [rbp-69h] BYREF

  v4 = a2;
  *a4 = 0LL;
  v5 = *(_QWORD *)(a1 + 16);
  DestinationString.Buffer = (wchar_t *)&v20;
  *(_QWORD *)&DestinationString.Length = 0x800000LL;
  v18 = 0LL;
  v17 = 0LL;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
         WdfDriverGlobals,
         v5,
         1LL,
         131097LL,
         0LL,
         &v17);
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_11;
    v10 = 159;
    goto LABEL_4;
  }
  v9 = RtlUnicodeStringPrintf(&DestinationString, L"Port_%04X", v4);
  if ( v9 >= 0 )
  {
    if ( a3 == 131097 )
    {
      v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
             WdfDriverGlobals,
             v17,
             &DestinationString,
             131097LL,
             0LL,
             &v18);
      if ( v9 < 0 )
        goto LABEL_11;
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, _QWORD, _DWORD, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1840))(
             WdfDriverGlobals,
             v17,
             &DestinationString,
             a3,
             0,
             0LL,
             0LL,
             &v18);
      if ( v9 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zd(*(_QWORD *)(a1 + 2520), v12, v13, v14, v15, &DestinationString.Length);
        goto LABEL_11;
      }
    }
    v9 = 0;
    *a4 = v18;
    goto LABEL_11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = 160;
LABEL_4:
    LODWORD(v16) = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      2u,
      5u,
      v10,
      (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids,
      v16);
  }
LABEL_11:
  if ( v17 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v9;
}
