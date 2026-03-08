/*
 * XREFs of HUBREG_QueryUsbHardwareVerifierValue @ 0x1C0083D24
 * Callers:
 *     HUBFDO_QueryHubErrataFlags @ 0x1C007C7B4 (HUBFDO_QueryHubErrataFlags.c)
 *     HUBMISC_QueryAndCacheRegistryValuesForDevice @ 0x1C0083100 (HUBMISC_QueryAndCacheRegistryValuesForDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C000C4DC (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_QueryUsbHardwareVerifierValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  unsigned __int16 v8; // dx
  void *v9; // rsi
  void *v10; // rax
  int v11; // ebx
  __int64 v12; // r13
  NTSTATUS v13; // eax
  unsigned __int16 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // r13
  int v17; // eax
  __int64 v19; // [rsp+20h] [rbp-A1h]
  __int64 v20; // [rsp+28h] [rbp-99h]
  __int64 v21; // [rsp+40h] [rbp-81h] BYREF
  __int64 v22; // [rsp+48h] [rbp-79h] BYREF
  __int64 v23; // [rsp+50h] [rbp-71h]
  __int64 v24; // [rsp+58h] [rbp-69h] BYREF
  __int64 v25; // [rsp+60h] [rbp-61h]
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-59h] BYREF
  __int64 v27; // [rsp+78h] [rbp-49h]
  __int64 v28; // [rsp+80h] [rbp-41h]
  char v29; // [rsp+88h] [rbp-39h] BYREF

  v25 = a5;
  v27 = a3;
  *a7 = 0;
  v28 = a2;
  v8 = *(_WORD *)(a1 + 2);
  v23 = a6;
  *(_QWORD *)&DestinationString.Length = 3407872LL;
  DestinationString.Buffer = (wchar_t *)&v29;
  v24 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  if ( v8 )
  {
    if ( v8 > 0x200u )
    {
      v10 = &g_HwVerifierUsb2XName;
      if ( v8 >= 0x300u )
        v10 = &g_HwVerifierUsb30Name;
      v9 = v10;
    }
    else
    {
      v9 = &g_HwVerifierUsbUpto20Name;
    }
  }
  else
  {
    v9 = &g_HwVerifierUsb30Name;
  }
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
          WdfDriverGlobals,
          0LL,
          &g_HwVerifierKeyName,
          131097LL,
          0LL,
          &v24);
  if ( v11 < 0 )
  {
    v24 = 0LL;
LABEL_43:
    v15 = v23;
    goto LABEL_44;
  }
  v19 = a4;
  v12 = v28;
  v13 = RtlUnicodeStringPrintf(&DestinationString, L"%S%S%S", v28, v27, v19);
  v11 = v13;
  if ( v13 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_43;
    v14 = 15;
LABEL_13:
    v15 = v23;
    LODWORD(v20) = v13;
    WPP_RECORDER_SF_d(v23, 2u, 5u, v14, (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids, v20);
LABEL_44:
    *a7 = 0;
    if ( v11 != -1073741772 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = v11;
      WPP_RECORDER_SF_d(v15, 2u, 5u, 0x11u, (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids, v20);
    }
    goto LABEL_49;
  }
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
          WdfDriverGlobals,
          v24,
          &DestinationString,
          131097LL,
          0LL,
          &v22);
  if ( v11 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
            WdfDriverGlobals,
            v22,
            v9,
            131097LL,
            0LL,
            &v21);
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _DWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
              WdfDriverGlobals,
              v21,
              v25,
              4LL,
              a7,
              0LL,
              0LL);
      if ( v11 >= 0 )
        goto LABEL_47;
    }
    else
    {
      v21 = 0LL;
    }
  }
  else
  {
    v22 = 0LL;
  }
  if ( v11 == -1073741772 )
  {
    if ( v21 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
      v21 = 0LL;
    }
    if ( v22 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
      v22 = 0LL;
    }
    v13 = RtlUnicodeStringPrintf(&DestinationString, L"%S%S", v12, v27);
    v11 = v13;
    if ( v13 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_43;
      v14 = 16;
      goto LABEL_13;
    }
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
            WdfDriverGlobals,
            v24,
            &DestinationString,
            131097LL,
            0LL,
            &v22);
    if ( v11 >= 0 )
    {
      v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
              WdfDriverGlobals,
              v22,
              v9,
              131097LL,
              0LL,
              &v21);
      v16 = v25;
      *a7 = 0;
      v11 = v17;
      if ( v17 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _DWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
                WdfDriverGlobals,
                v21,
                v16,
                4LL,
                a7,
                0LL,
                0LL);
        if ( v11 >= 0 )
          goto LABEL_47;
      }
      else
      {
        v21 = 0LL;
      }
    }
    else
    {
      v16 = v25;
      v22 = 0LL;
      *a7 = 0;
    }
    if ( v11 != -1073741772 )
      goto LABEL_43;
    if ( v21 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
      v21 = 0LL;
    }
    if ( v22 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
      v22 = 0LL;
    }
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
            WdfDriverGlobals,
            v24,
            &g_HwVerifierGlobalName,
            131097LL,
            0LL,
            &v22);
    if ( v11 < 0 )
    {
      v22 = 0LL;
      goto LABEL_43;
    }
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
            WdfDriverGlobals,
            v22,
            v9,
            131097LL,
            0LL,
            &v21);
    if ( v11 < 0 )
    {
      v21 = 0LL;
      goto LABEL_43;
    }
    *a7 = 0;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _DWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
            WdfDriverGlobals,
            v21,
            v16,
            4LL,
            a7,
            0LL,
            0LL);
  }
  if ( v11 < 0 )
    goto LABEL_43;
LABEL_47:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v20) = *a7;
    WPP_RECORDER_SF_d(v23, 2u, 5u, 0x12u, (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids, v20);
  }
LABEL_49:
  if ( v21 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v22 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v24 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v11;
}
