/*
 * XREFs of HUBREG_ValidateAndPopulateEndpointPriorities @ 0x1C0034C18
 * Callers:
 *     HUBREG_QueryValuesInDeviceHardwareKey @ 0x1C0086210 (HUBREG_QueryValuesInDeviceHardwareKey.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     RtlUnicodeStringInit @ 0x1C003444C (RtlUnicodeStringInit.c)
 *     WPP_RECORDER_SF_S @ 0x1C00344CC (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBREG_ValidateAndPopulateEndpointPriorities(__int64 a1, __int64 a2)
{
  unsigned int v3; // r13d
  __int64 (__fastcall *v4)(PWDF_DRIVER_GLOBALS); // rax
  wchar_t *v5; // rax
  __int64 v6; // r15
  unsigned __int16 v7; // r9
  __int64 v8; // rax
  int v9; // r12d
  unsigned __int16 v10; // r9
  unsigned int v11; // ecx
  const wchar_t *v12; // rax
  NTSTRSAFE_PCWSTR *v13; // r12
  unsigned int i; // r15d
  __int64 v15; // r15
  ULONG v16; // edx
  __int64 v17; // rdx
  unsigned __int16 v18; // r9
  unsigned __int16 v19; // r9
  __int64 v21; // [rsp+28h] [rbp-D8h]
  ULONG Value; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v25; // [rsp+60h] [rbp-A0h]
  unsigned int v26; // [rsp+64h] [rbp-9Ch]
  __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  __int64 v28; // [rsp+70h] [rbp-90h]
  __int128 v29; // [rsp+78h] [rbp-88h] BYREF
  __int128 v30; // [rsp+88h] [rbp-78h]
  __int128 v31; // [rsp+98h] [rbp-68h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  wchar_t *Str[2]; // [rsp+B0h] [rbp-50h] BYREF
  NTSTRSAFE_PCWSTR pszSrc[2]; // [rsp+C0h] [rbp-40h] BYREF
  NTSTRSAFE_PCWSTR v35[2]; // [rsp+D0h] [rbp-30h]
  NTSTRSAFE_PCWSTR v36[2]; // [rsp+E0h] [rbp-20h]
  char v37; // [rsp+F0h] [rbp-10h] BYREF

  *(_QWORD *)&DestinationString.Length = 6553600LL;
  v28 = a2;
  LODWORD(v32) = 0;
  Value = 0;
  DestinationString.Buffer = (wchar_t *)&v37;
  v3 = 0;
  v29 = 0LL;
  v27 = 0LL;
  v30 = 0LL;
  v23 = 0LL;
  v31 = 0LL;
  *(_OWORD *)Str = 0LL;
  v4 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 112);
  *(_OWORD *)pszSrc = 0LL;
  *(_OWORD *)v35 = 0LL;
  *(_OWORD *)v36 = 0LL;
  LODWORD(v5) = v4(WdfDriverGlobals);
  v6 = (unsigned int)v5;
  v26 = (unsigned int)v5;
  if ( !(_DWORD)v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 59;
      goto LABEL_61;
    }
    goto LABEL_62;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v32 = 0LL;
  *(_QWORD *)&v30 = 0LL;
  *((_QWORD *)&v30 + 1) = 0x100000001LL;
  v31 = (unsigned __int64)v8;
  v29 = 0LL;
  LODWORD(v29) = 56;
  LODWORD(v5) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
                  WdfDriverGlobals,
                  &v29,
                  (unsigned int)ExDefaultNonPagedPoolType,
                  1681082453LL,
                  20 * v6,
                  &v27,
                  &v23);
  v9 = (int)v5;
  if ( (int)v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_62;
    v10 = 60;
    LODWORD(v21) = (_DWORD)v5;
LABEL_91:
    LOBYTE(v5) = WPP_RECORDER_SF_d(
                   *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                   2u,
                   5u,
                   v10,
                   (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids,
                   v21);
    goto LABEL_62;
  }
  v25 = 0;
  v11 = 0;
  if ( !(_DWORD)v6 )
    goto LABEL_59;
  while ( 2 )
  {
    v5 = (wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 144))(
                      WdfDriverGlobals,
                      v28,
                      v11);
    if ( !v5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v21) = v9;
        LOBYTE(v5) = WPP_RECORDER_SF_d(
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                       2u,
                       5u,
                       0x3Du,
                       (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids,
                       v21);
      }
      goto LABEL_100;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, wchar_t *, wchar_t **))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v5,
      Str);
    v12 = Str[1];
    v13 = &pszSrc[1];
    pszSrc[0] = Str[1];
    for ( i = 1; i < 6; ++i )
    {
      v5 = wcschr(v12, 0x2Cu);
      if ( !v5 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v7 = 62;
LABEL_61:
          LOBYTE(v5) = WPP_RECORDER_SF_(
                         *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                         2u,
                         5u,
                         v7,
                         (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids);
        }
LABEL_62:
        if ( v27 )
          LOBYTE(v5) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
        return (char)v5;
      }
      *v5 = 0;
      v12 = v5 + 1;
      *v13++ = v12;
    }
    LODWORD(v5) = RtlUnicodeStringInit(&DestinationString, pszSrc[0]);
    if ( (int)v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_62;
      v10 = 63;
      goto LABEL_67;
    }
    if ( RtlEqualUnicodeString(&g_WildcardString, &DestinationString, 0) == 1 )
    {
      v15 = 20LL * v3;
      *(_WORD *)(v15 + v23) = -1;
      goto LABEL_18;
    }
    LODWORD(v5) = RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
    if ( (int)v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_62;
      v10 = 64;
      goto LABEL_67;
    }
    LOBYTE(v5) = Value - 1;
    if ( Value - 1 > 0xFE )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_62;
      v10 = 65;
      LODWORD(v21) = Value;
      goto LABEL_91;
    }
    v15 = 20LL * v3;
    *(_WORD *)(v15 + v23) = Value;
LABEL_18:
    LODWORD(v5) = RtlUnicodeStringInit(&DestinationString, pszSrc[1]);
    if ( (int)v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_62;
      v10 = 66;
      goto LABEL_67;
    }
    if ( RtlEqualUnicodeString(&g_WildcardString, &DestinationString, 0) == 1 )
    {
      *(_WORD *)(v15 + v23 + 2) = -1;
      goto LABEL_24;
    }
    LODWORD(v5) = RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
    if ( (int)v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_62;
      v10 = 67;
      goto LABEL_67;
    }
    v16 = Value;
    if ( (int)Value > 255 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_101;
      v19 = 68;
      goto LABEL_84;
    }
    *(_WORD *)(v15 + v23 + 2) = Value;
LABEL_24:
    LODWORD(v5) = RtlUnicodeStringInit(&DestinationString, v35[0]);
    if ( (int)v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_62;
      v10 = 69;
      goto LABEL_67;
    }
    if ( RtlEqualUnicodeString(&g_WildcardString, &DestinationString, 0) == 1 )
    {
      *(_WORD *)(v15 + v23 + 2) = -1;
      goto LABEL_30;
    }
    LODWORD(v5) = RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
    if ( (int)v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_62;
      v10 = 70;
      goto LABEL_67;
    }
    v16 = Value;
    if ( Value > 0xFF )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_101;
      v19 = 71;
      goto LABEL_84;
    }
    *(_WORD *)(v15 + v23 + 4) = Value;
LABEL_30:
    LODWORD(v5) = RtlUnicodeStringInit(&DestinationString, v35[1]);
    v9 = (int)v5;
    if ( (int)v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_62;
      v10 = 72;
      goto LABEL_67;
    }
    if ( RtlEqualUnicodeString(&g_BulkIn, &DestinationString, 1u) == 1 )
    {
      *(_DWORD *)(v15 + v23 + 8) = 0;
      goto LABEL_35;
    }
    if ( RtlEqualUnicodeString(&g_BulkOut, &DestinationString, 1u) != 1 )
    {
      LOBYTE(v5) = RtlEqualUnicodeString(&g_InterruptIn, &DestinationString, 1u);
      if ( (_BYTE)v5 == 1
        || (LOBYTE(v5) = RtlEqualUnicodeString(&g_InterruptOut, &DestinationString, 1u), (_BYTE)v5 == 1)
        || (LOBYTE(v5) = RtlEqualUnicodeString(&g_IsochronousIn, &DestinationString, 1u), (_BYTE)v5 == 1)
        || (LOBYTE(v5) = RtlEqualUnicodeString(&g_IsochronousOut, &DestinationString, 1u), (_BYTE)v5 == 1) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_57;
        v18 = 74;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_57;
        v18 = 73;
      }
      goto LABEL_56;
    }
    *(_DWORD *)(v15 + v23 + 8) = 1;
LABEL_35:
    LODWORD(v5) = RtlUnicodeStringInit(&DestinationString, v36[0]);
    if ( (int)v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_62;
      v10 = 75;
      goto LABEL_67;
    }
    LODWORD(v5) = RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
    if ( (int)v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_62;
      v10 = 76;
LABEL_67:
      LODWORD(v21) = (_DWORD)v5;
      goto LABEL_91;
    }
    v16 = Value;
    if ( Value > 0xF )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_101;
      v19 = 77;
LABEL_84:
      LODWORD(v21) = v16;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        v19,
        (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids,
        v21);
      goto LABEL_101;
    }
    *(_WORD *)(v15 + v23 + 12) = Value;
    LODWORD(v5) = RtlUnicodeStringInit(&DestinationString, v36[1]);
    v9 = (int)v5;
    if ( (int)v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_62;
      v10 = 78;
      goto LABEL_67;
    }
    if ( RtlEqualUnicodeString(&g_Video, &DestinationString, 1u) == 1 )
    {
      LOBYTE(v5) = v23;
      *(_DWORD *)(v15 + v23 + 16) = 1;
      goto LABEL_45;
    }
    if ( RtlEqualUnicodeString(&g_Voice, &DestinationString, 1u) == 1 )
    {
      LOBYTE(v5) = v23;
      *(_DWORD *)(v15 + v23 + 16) = 2;
      goto LABEL_45;
    }
    LOBYTE(v5) = RtlEqualUnicodeString(&g_Interactive, &DestinationString, 1u);
    if ( (_BYTE)v5 != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_57;
      v18 = 79;
LABEL_56:
      LOBYTE(v5) = WPP_RECORDER_SF_S(
                     *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                     v17,
                     5u,
                     v18,
                     (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids,
                     DestinationString.Buffer);
      goto LABEL_57;
    }
    LOBYTE(v5) = v23;
    *(_DWORD *)(v15 + v23 + 16) = 3;
LABEL_45:
    ++v3;
LABEL_57:
    v11 = v25 + 1;
    v25 = v11;
    if ( v11 < v26 )
      continue;
    break;
  }
  if ( !v3 )
  {
LABEL_59:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 80;
      goto LABEL_61;
    }
    goto LABEL_62;
  }
LABEL_100:
  if ( v9 < 0 )
    goto LABEL_62;
LABEL_101:
  LOBYTE(v5) = v23;
  *(_QWORD *)(a1 + 2696) = v23;
  *(_DWORD *)(a1 + 2704) = v3;
  return (char)v5;
}
