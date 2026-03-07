NTSTATUS __fastcall Controller_PopulateHardwareVerifierFlags(__int64 a1)
{
  char v2; // cl
  char v3; // al
  void *v4; // rsi
  NTSTATUS result; // eax
  int v6; // edx
  int v7; // edi
  _QWORD *v8; // rcx
  _QWORD *v9; // rsi
  int v10; // r9d
  __int64 v11; // [rsp+28h] [rbp-59h]
  __int64 v12; // [rsp+48h] [rbp-39h] BYREF
  __int64 v13; // [rsp+50h] [rbp-31h] BYREF
  __int64 v14; // [rsp+58h] [rbp-29h] BYREF
  __int64 v15; // [rsp+60h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-19h] BYREF
  char v17; // [rsp+78h] [rbp-9h] BYREF

  *(_QWORD *)&DestinationString.Length = 3407872LL;
  v15 = 0LL;
  v2 = *(_BYTE *)(a1 + 320);
  DestinationString.Buffer = (wchar_t *)&v17;
  v14 = 0LL;
  v3 = *(_BYTE *)(a1 + 321);
  v13 = 0LL;
  v12 = 0LL;
  if ( v2 )
  {
    if ( (v2 != 1 || v3) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1 + 72),
        3,
        4,
        213,
        (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
        v2,
        v3);
    v4 = &g_HwVerifierxHCI10;
  }
  else
  {
    v4 = &g_HwVerifierxHCI96;
  }
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1832))(
             WdfDriverGlobals,
             0LL,
             &g_HwVerifierKeyName,
             131097LL,
             0LL,
             &v14);
  v7 = result;
  if ( result < 0 )
  {
    v14 = 0LL;
LABEL_9:
    v8 = (_QWORD *)(a1 + 448);
    v9 = (_QWORD *)(a1 + 448);
    goto LABEL_11;
  }
  result = *(_DWORD *)(a1 + 244);
  if ( result == 1 )
  {
    LODWORD(v11) = *(unsigned __int8 *)(a1 + 256);
    result = RtlUnicodeStringPrintf(
               &DestinationString,
               L"%04X%04X%02X",
               *(unsigned __int16 *)(a1 + 248),
               *(unsigned __int16 *)(a1 + 252),
               v11);
  }
  else
  {
    if ( result != 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v6, 4, 214, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
        v8 = (_QWORD *)(a1 + 448);
        v9 = (_QWORD *)(a1 + 448);
        goto LABEL_66;
      }
      goto LABEL_10;
    }
    result = RtlUnicodeStringPrintf(&DestinationString, L"%S%S%S", a1 + 304, a1 + 309, a1 + 314);
  }
  v7 = result;
  if ( result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_9;
    v10 = 215;
LABEL_28:
    LOBYTE(v6) = 2;
    result = WPP_RECORDER_SF_d(
               *(_QWORD *)(a1 + 72),
               v6,
               4,
               v10,
               (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
               v7);
    goto LABEL_9;
  }
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1832))(
             WdfDriverGlobals,
             v14,
             &DestinationString,
             131097LL,
             0LL,
             &v13);
  v7 = result;
  if ( result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1832))(
               WdfDriverGlobals,
               v13,
               v4,
               131097LL,
               0LL,
               &v12);
    v7 = result;
    if ( result >= 0 )
    {
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01023 + 1880))(
                 WdfDriverGlobals,
                 v12,
                 &g_HwVerifierControllerName,
                 8LL,
                 &v15,
                 0LL,
                 0LL);
      v7 = result;
      if ( result >= 0 )
        goto LABEL_10;
    }
    else
    {
      v12 = 0LL;
    }
  }
  else
  {
    v13 = 0LL;
  }
  if ( v7 == -1073741772 )
  {
    if ( v12 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1848))(WdfDriverGlobals);
      v12 = 0LL;
    }
    v6 = v13;
    if ( v13 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1848))(WdfDriverGlobals);
      v13 = 0LL;
    }
    result = *(_DWORD *)(a1 + 244);
    if ( result == 1 )
    {
      result = RtlUnicodeStringPrintf(
                 &DestinationString,
                 L"%04X%04X",
                 *(unsigned __int16 *)(a1 + 248),
                 *(unsigned __int16 *)(a1 + 252));
    }
    else
    {
      if ( result != 2 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 2;
          result = WPP_RECORDER_SF_(
                     *(_QWORD *)(a1 + 72),
                     v6,
                     4,
                     216,
                     (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
        }
        v9 = (_QWORD *)(a1 + 448);
        *(_QWORD *)(a1 + 448) = 0LL;
        goto LABEL_12;
      }
      result = RtlUnicodeStringPrintf(&DestinationString, L"%S%S", a1 + 304, a1 + 309);
    }
    v7 = result;
    if ( result < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_9;
      v10 = 217;
      goto LABEL_28;
    }
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1832))(
               WdfDriverGlobals,
               v14,
               &DestinationString,
               131097LL,
               0LL,
               &v13);
    v7 = result;
    if ( result >= 0 )
    {
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1832))(
                 WdfDriverGlobals,
                 v13,
                 v4,
                 131097LL,
                 0LL,
                 &v12);
      v7 = result;
      if ( result >= 0 )
      {
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01023 + 1880))(
                   WdfDriverGlobals,
                   v12,
                   &g_HwVerifierControllerName,
                   8LL,
                   &v15,
                   0LL,
                   0LL);
        v7 = result;
        if ( result >= 0 )
          goto LABEL_10;
      }
      else
      {
        v12 = 0LL;
      }
    }
    else
    {
      v13 = 0LL;
    }
    if ( v7 == -1073741772 )
    {
      if ( v12 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1848))(WdfDriverGlobals);
        v12 = 0LL;
      }
      if ( v13 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1848))(WdfDriverGlobals);
        v13 = 0LL;
      }
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1832))(
                 WdfDriverGlobals,
                 v14,
                 &g_HwVerifierGlobalName,
                 131097LL,
                 0LL,
                 &v13);
      v7 = result;
      if ( result < 0 )
      {
        v13 = 0LL;
        goto LABEL_9;
      }
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1832))(
                 WdfDriverGlobals,
                 v13,
                 v4,
                 131097LL,
                 0LL,
                 &v12);
      v7 = result;
      if ( result < 0 )
      {
        v12 = 0LL;
        goto LABEL_9;
      }
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01023 + 1880))(
                 WdfDriverGlobals,
                 v12,
                 &g_HwVerifierControllerName,
                 8LL,
                 &v15,
                 0LL,
                 0LL);
      v7 = result;
    }
  }
LABEL_10:
  v8 = (_QWORD *)(a1 + 448);
  v9 = (_QWORD *)(a1 + 448);
  if ( v7 >= 0 )
  {
LABEL_66:
    result = v15;
    *v8 = v15;
    goto LABEL_12;
  }
LABEL_11:
  *v8 = 0LL;
  if ( v7 != -1073741772 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    LOBYTE(v6) = 2;
    result = WPP_RECORDER_SF_d(
               *(_QWORD *)(a1 + 72),
               v6,
               4,
               218,
               (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
               v7);
  }
LABEL_12:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    result = WPP_RECORDER_SF_i(
               *(_QWORD *)(a1 + 72),
               v6,
               4,
               219,
               (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
               *v9);
  }
LABEL_14:
  if ( v12 )
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1848))(WdfDriverGlobals);
  if ( v13 )
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1848))(WdfDriverGlobals);
  if ( v14 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1848))(WdfDriverGlobals);
  return result;
}
