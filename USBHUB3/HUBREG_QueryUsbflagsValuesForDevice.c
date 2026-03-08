/*
 * XREFs of HUBREG_QueryUsbflagsValuesForDevice @ 0x1C0084444
 * Callers:
 *     HUBMISC_QueryAndCacheRegistryValuesForDevice @ 0x1C0083100 (HUBMISC_QueryAndCacheRegistryValuesForDevice.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C00014E0 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C000C4DC (RtlUnicodeStringPrintf.c)
 *     HUBMISC_QueryKseDeviceFlags @ 0x1C0033144 (HUBMISC_QueryKseDeviceFlags.c)
 *     HUBREG_QueryUsbflagsAlternateSettingFilter @ 0x1C00348E8 (HUBREG_QueryUsbflagsAlternateSettingFilter.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     HUBREG_OpenCreateUsbflagsDeviceKey @ 0x1C00838E4 (HUBREG_OpenCreateUsbflagsDeviceKey.c)
 */

__int64 __fastcall HUBREG_QueryUsbflagsValuesForDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  char v9; // r13
  __int64 v10; // rax
  int v11; // esi
  _WORD *v12; // r10
  __int64 v13; // rbx
  unsigned __int16 v14; // r9
  bool v15; // zf
  bool v16; // zf
  bool v17; // zf
  bool v18; // zf
  bool v19; // zf
  bool v20; // zf
  char v21; // al
  __int64 v23; // [rsp+28h] [rbp-D8h]
  __int64 v24; // [rsp+38h] [rbp-C8h]
  int v25; // [rsp+80h] [rbp-80h] BYREF
  __int64 v26; // [rsp+88h] [rbp-78h] BYREF
  char pszDest[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v28; // [rsp+98h] [rbp-68h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v32; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v34; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v35; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v36; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v37; // [rsp+E0h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-18h] BYREF
  char v39; // [rsp+100h] [rbp+0h] BYREF

  v4 = *(_QWORD *)a1;
  v25 = 0;
  v36 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v35 = 0LL;
  v37 = 0LL;
  v9 = *(_BYTE *)(v4 + 200);
  DestinationString.Buffer = (wchar_t *)&v39;
  v10 = *(_QWORD *)(a1 + 8);
  v26 = 0LL;
  v28 = 0LL;
  *(_QWORD *)&DestinationString.Length = 6291456LL;
  v24 = *(_QWORD *)(v10 + 1432);
  v34 = 0LL;
  HUBREG_OpenCreateUsbflagsDeviceKey(a2, a3, a4, 0x20019u, &v34, &v26, 0, v24);
  v11 = HUBREG_OpenCreateUsbflagsDeviceKey(
          a2,
          a3,
          a4,
          0x20019u,
          0LL,
          &v28,
          1,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL));
  if ( v11 < 0 )
    goto LABEL_157;
  RtlStringCchPrintfA(pszDest, 3uLL, "%02X", *(unsigned __int8 *)(a1 + 1992));
  if ( *(_DWORD *)(v4 + 168) == 3 && (v12 = *(_WORD **)(v4 + 176)) != 0LL )
    HUBMISC_QueryKseDeviceFlags(
      (__int64)pszDest,
      a2,
      a3,
      a4,
      v12,
      *(_WORD **)(v4 + 184),
      *(_WORD **)(v4 + 192),
      &v36,
      &v32,
      &v33,
      &v29,
      &v30,
      &v31,
      &v35,
      0,
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL));
  else
    HUBMISC_QueryKseDeviceFlags(
      (__int64)pszDest,
      a2,
      a3,
      a4,
      0LL,
      0LL,
      0LL,
      &v36,
      &v32,
      &v33,
      &v29,
      &v30,
      &v31,
      &v35,
      0,
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL));
  v13 = v36 | v32 | v33 | v29 | v30 | v31 | v35;
  if ( v34 )
  {
    v11 = RtlUnicodeStringPrintf(
            &DestinationString,
            L"IgnoreHWSerNum%04X%04X",
            *(unsigned __int16 *)(a1 + 1996),
            *(unsigned __int16 *)(a1 + 1998));
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_157;
      v14 = 25;
LABEL_156:
      LODWORD(v23) = v11;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        v14,
        (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids,
        v23);
      goto LABEL_157;
    }
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
            WdfDriverGlobals,
            v34,
            &DestinationString,
            4LL,
            &v25,
            0LL,
            0LL);
    if ( v11 < 0 )
    {
      if ( v11 != -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_157;
        v14 = 26;
        goto LABEL_156;
      }
    }
    else if ( v25 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 1u);
    }
  }
  v25 = 0;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v28,
          L"\b\n",
          2LL,
          &v25,
          0LL,
          0LL);
  if ( v11 >= 0 )
  {
    if ( v25 )
    {
      *(_BYTE *)(a1 + 2052) = BYTE1(v25);
      goto LABEL_28;
    }
    goto LABEL_21;
  }
  if ( v11 != -1073741772 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_157;
    v14 = 27;
    goto LABEL_156;
  }
  if ( (v13 & 1) != 0 )
  {
LABEL_21:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 0x80u);
    goto LABEL_28;
  }
  if ( (v29 & 2) != 0 || (v30 & 2) != 0 || (v31 & 2) != 0 || (v32 & 2) != 0 || (v33 & 2) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 2u);
LABEL_28:
  v25 = 0;
  if ( v26 )
  {
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
            WdfDriverGlobals,
            v26,
            &g_IgnoreHwSerialNumber,
            4LL,
            &v25,
            0LL,
            0LL);
    if ( v11 >= 0 )
    {
      v15 = v25 == 0;
      goto LABEL_35;
    }
    if ( v11 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_157;
      v14 = 28;
      goto LABEL_156;
    }
  }
  v15 = (v13 & 0x40) == 0;
LABEL_35:
  if ( !v15 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 1u);
  v25 = 0;
  if ( !v26 )
    goto LABEL_44;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v26,
          L"68",
          4LL,
          &v25,
          0LL,
          0LL);
  if ( v11 < 0 )
  {
    if ( v11 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_157;
      v14 = 29;
      goto LABEL_156;
    }
LABEL_44:
    if ( (v13 & 0x80000000) == 0 )
      goto LABEL_46;
    goto LABEL_45;
  }
  if ( !v25 )
    goto LABEL_46;
LABEL_45:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x200000u);
LABEL_46:
  v25 = 0;
  if ( v26 )
  {
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
            WdfDriverGlobals,
            v26,
            &g_ResetOnResume,
            4LL,
            &v25,
            0LL,
            0LL);
    if ( v11 >= 0 )
    {
      v16 = v25 == 0;
      goto LABEL_53;
    }
    if ( v11 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_157;
      v14 = 30;
      goto LABEL_156;
    }
  }
  v16 = (v13 & 4) == 0;
LABEL_53:
  if ( !v16 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 4u);
  v25 = 0;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 8u);
  if ( !v26 )
    goto LABEL_62;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v26,
          L"&(",
          4LL,
          &v25,
          0LL,
          0LL);
  if ( v11 < 0 )
  {
    if ( v11 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_157;
      v14 = 31;
      goto LABEL_156;
    }
LABEL_62:
    if ( (v13 & 8) == 0 )
      goto LABEL_64;
    goto LABEL_63;
  }
  if ( v25 )
    goto LABEL_64;
LABEL_63:
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1644), 0xFFFFFFF7);
LABEL_64:
  v25 = 0;
  if ( v26 )
  {
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
            WdfDriverGlobals,
            v26,
            L"02",
            4LL,
            &v25,
            0LL,
            0LL);
    if ( v11 >= 0 )
    {
      v17 = v25 == 0;
      goto LABEL_71;
    }
    if ( v11 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_157;
      v14 = 32;
      goto LABEL_156;
    }
  }
  v17 = (v13 & 0x10) == 0;
LABEL_71:
  if ( !v17 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x10u);
  v25 = 0;
  if ( !v26 )
    goto LABEL_80;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v26,
          L":<",
          4LL,
          &v25,
          0LL,
          0LL);
  if ( v11 < 0 )
  {
    if ( v11 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_157;
      v14 = 33;
      goto LABEL_156;
    }
LABEL_80:
    if ( (v13 & 0x1000000000LL) == 0 )
      goto LABEL_82;
    goto LABEL_81;
  }
  if ( !v25 )
    goto LABEL_82;
LABEL_81:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x800000u);
LABEL_82:
  v25 = 0;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v28,
          L"(*",
          4LL,
          &v25,
          0LL,
          0LL);
  if ( v11 < 0 )
  {
    if ( v11 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_157;
      v14 = 34;
      goto LABEL_156;
    }
    v18 = (v13 & 0x20) == 0;
  }
  else
  {
    v18 = v25 == 0;
  }
  if ( !v18 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x20u);
  v25 = 0;
  if ( v26 )
  {
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
            WdfDriverGlobals,
            v26,
            &g_DisableLpm,
            4LL,
            &v25,
            0LL,
            0LL);
    if ( v11 >= 0 )
    {
      v19 = v25 == 0;
      goto LABEL_95;
    }
    if ( v11 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_157;
      v14 = 35;
      goto LABEL_156;
    }
  }
  v19 = (v13 & 0x1000) == 0;
LABEL_95:
  if ( !v19 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x80u);
  if ( (v13 & 0x400) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x40u);
  if ( (v13 & 0x4000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x100u);
  if ( (v13 & 0x10000) != 0 && *(_BYTE *)(*(_QWORD *)a1 + 240LL) )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x80u);
  if ( (v13 & 0x80000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x400u);
  if ( (v13 & 0x200000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x800u);
  if ( (v13 & 0x800000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x1000u);
  if ( (v13 & 0x1000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x2000u);
  v25 = 0;
  if ( !v26 )
  {
LABEL_118:
    v20 = (v13 & 0x8000000) == 0;
    goto LABEL_119;
  }
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v26,
          L",.",
          4LL,
          &v25,
          0LL,
          0LL);
  if ( v11 < 0 )
  {
    if ( v11 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_157;
      v14 = 36;
      goto LABEL_156;
    }
    goto LABEL_118;
  }
  v20 = v25 == 0;
LABEL_119:
  if ( !v20 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x8000u);
  if ( (v13 & 0x2000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x20000u);
  if ( (v13 & 0x20000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x40000u);
  if ( (v13 & 0x40000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x100000u);
  if ( ((v13 & 0x400000) != 0 || (v13 & 0x4000000000LL) != 0 && v9) && (*(_DWORD *)(a1 + 1632) & 2) == 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x80000u);
  if ( (v13 & 0x100000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x400000u);
  if ( (v13 & 0x2000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x1000000u);
  if ( (v13 & 0x80000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x4000000u);
  if ( (v13 & 0x800000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x8000000u);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v28,
          L".0",
          8LL,
          &v37,
          0LL,
          0LL);
  if ( v11 < 0 )
  {
    if ( v11 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_157;
      v14 = 37;
      goto LABEL_156;
    }
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2468), 4u);
    v21 = BYTE6(v37);
    *(_DWORD *)(a1 + 2464) |= 4u;
    *(_BYTE *)(a1 + 2052) = v21;
    *(_QWORD *)(a1 + 2480) = v37;
  }
  if ( *(_WORD *)(a1 + 1996) == 8457 && *(_WORD *)(a1 + 1998) == 2064 && (unsigned __int8)*(_WORD *)(a1 + 2000) < 0x89u )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x10000u);
  if ( v26 )
    HUBREG_QueryUsbflagsAlternateSettingFilter(a1, v26);
  v11 = 0;
LABEL_157:
  if ( v26 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v34 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v28 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v11;
}
