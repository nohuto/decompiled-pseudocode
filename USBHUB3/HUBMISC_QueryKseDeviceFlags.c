int __fastcall HUBMISC_QueryKseDeviceFlags(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        _WORD *a6,
        _WORD *a7,
        _QWORD *a8,
        _QWORD *a9,
        _QWORD *a10,
        _QWORD *a11,
        _QWORD *a12,
        _QWORD *a13,
        _QWORD *a14,
        char a15,
        __int64 a16)
{
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  size_t v21; // rbx
  int result; // eax
  unsigned __int16 v23; // r9
  bool v24; // zf
  wchar_t *v25; // rcx
  const wchar_t *v26; // r8
  __int64 v27; // r12
  const wchar_t *v28; // r8
  const wchar_t *v29; // r8
  const wchar_t *v30; // r8
  const wchar_t *v31; // r8
  const wchar_t *v32; // r8
  __int64 v33; // [rsp+28h] [rbp-38h]
  NTSTRSAFE_PWSTR pszDest; // [rsp+50h] [rbp-10h] BYREF
  __int64 v35; // [rsp+58h] [rbp-8h] BYREF

  pszDest = 0LL;
  v35 = 0LL;
  if ( a5
    && a6
    && a7
    && (v18 = (unsigned __int16)*a5, (_WORD)v18)
    && (v19 = (unsigned __int16)*a6, (_WORD)v19)
    && (v20 = (unsigned __int16)*a7, (_WORD)v20) )
  {
    v21 = v19 + v20 + v18 + 88;
  }
  else
  {
    v21 = 82LL;
  }
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64, size_t, __int64 *, NTSTRSAFE_PWSTR *))(WdfFunctions_01015 + 1536))(
             WdfDriverGlobals,
             0LL,
             512LL,
             1681082453LL,
             v21,
             &v35,
             &pszDest);
  if ( result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_59;
    v23 = 90;
    goto LABEL_12;
  }
  v24 = WPP_MAIN_CB.Queue.ListEntry.Flink == 0LL;
  *a8 = 0LL;
  *a9 = 0LL;
  *a10 = 0LL;
  *a11 = 0LL;
  *a12 = 0LL;
  result = (int)a13;
  *a13 = 0LL;
  if ( v24 )
    goto LABEL_59;
  if ( a1 && a14 )
  {
    v25 = pszDest;
    *a14 = 0LL;
    result = RtlStringCbPrintfW(v25, v21, L"USB:DEVICECLASS_%S", a1);
    if ( result < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = 91;
LABEL_12:
        LODWORD(v33) = result;
        result = WPP_RECORDER_SF_d(a16, 2u, 5u, v23, (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids, v33);
        goto LABEL_59;
      }
      goto LABEL_59;
    }
    ((void (__fastcall *)(NTSTRSAFE_PWSTR, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
      pszDest,
      L"USB",
      a14);
  }
  if ( !a5 || !a6 || !a7 || !*a5 || !*a6 || !*a7 )
  {
    v27 = a3;
    goto LABEL_43;
  }
  v26 = L"USB:USB\\%wZ&%wZ&%wZ\\";
  if ( a15 )
    v26 = L"USB:ROOT_HUB\\%wZ&%wZ&%wZ\\";
  result = RtlStringCbPrintfW(pszDest, v21, v26, a5, a6, a7);
  if ( result >= 0 )
  {
    ((void (__fastcall *)(NTSTRSAFE_PWSTR, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
      pszDest,
      L"USB",
      a8);
    v27 = a3;
    v28 = L"USB:USB\\%wZ&%wZ&%wZ\\VID_%S&PID_%S&REV_%S";
    if ( a15 )
      v28 = L"USB:ROOT_HUB\\%wZ&%wZ&%wZ\\VID_%S&PID_%S&REV_%S";
    result = RtlStringCbPrintfW(pszDest, v21, v28, a5, a6, a7, a2, a3, a4);
    if ( result < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = 93;
        goto LABEL_12;
      }
      goto LABEL_59;
    }
    ((void (__fastcall *)(NTSTRSAFE_PWSTR, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
      pszDest,
      L"USB",
      a9);
    v29 = L"USB:USB\\%wZ&%wZ&%wZ\\VID_%S&PID_%S";
    if ( a15 )
      v29 = L"USB:ROOT_HUB\\%wZ&%wZ&%wZ\\VID_%S&PID_%S";
    result = RtlStringCbPrintfW(pszDest, v21, v29, a5, a6, a7, a2, a3);
    if ( result < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = 94;
        goto LABEL_12;
      }
      goto LABEL_59;
    }
    ((void (__fastcall *)(NTSTRSAFE_PWSTR, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
      pszDest,
      L"USB",
      a10);
LABEL_43:
    v30 = L"USB:USB\\VID_%S&PID_%S&REV_%S";
    if ( a15 )
      v30 = L"USB:ROOT_HUB\\VID_%S&PID_%S&REV_%S";
    result = RtlStringCbPrintfW(pszDest, v21, v30, a2, v27, a4);
    if ( result >= 0 )
    {
      ((void (__fastcall *)(NTSTRSAFE_PWSTR, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
        pszDest,
        L"USB",
        a11);
      v31 = L"USB:USB\\VID_%S&PID_%S";
      if ( a15 )
        v31 = L"USB:ROOT_HUB\\VID_%S&PID_%S";
      result = RtlStringCbPrintfW(pszDest, v21, v31, a2, v27);
      if ( result >= 0 )
      {
        ((void (__fastcall *)(NTSTRSAFE_PWSTR, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
          pszDest,
          L"USB",
          a12);
        v32 = L"USB:USB\\VID_%S";
        if ( a15 )
          v32 = L"USB:ROOT_HUB\\VID_%S";
        result = RtlStringCbPrintfW(pszDest, v21, v32, a2);
        if ( result >= 0 )
        {
          result = ((__int64 (__fastcall *)(NTSTRSAFE_PWSTR, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
                     pszDest,
                     L"USB",
                     a13);
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v23 = 97;
          goto LABEL_12;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = 96;
        goto LABEL_12;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = 95;
      goto LABEL_12;
    }
    goto LABEL_59;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = 92;
    goto LABEL_12;
  }
LABEL_59:
  if ( v35 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return result;
}
