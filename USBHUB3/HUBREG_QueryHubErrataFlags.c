__int64 __fastcall HUBREG_QueryHubErrataFlags(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  char v5; // r13
  const CHAR *v6; // r12
  const CHAR *v7; // r15
  const CHAR *v8; // r14
  _WORD *v10; // rdx
  __int64 v11; // rbx
  bool v12; // zf
  unsigned __int16 v13; // r9
  bool v14; // zf
  bool v15; // zf
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v24; // [rsp+28h] [rbp-D8h]
  __int64 v25; // [rsp+38h] [rbp-C8h]
  int v26; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+88h] [rbp-78h] BYREF
  __int64 v28; // [rsp+90h] [rbp-70h] BYREF
  __int64 v29; // [rsp+98h] [rbp-68h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v33; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v35; // [rsp+C8h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  const CHAR *v39; // [rsp+100h] [rbp+0h]
  int v40; // [rsp+108h] [rbp+8h]
  int v41; // [rsp+10Ch] [rbp+Ch]
  const CHAR *v42; // [rsp+110h] [rbp+10h]
  int v43; // [rsp+118h] [rbp+18h]
  int v44; // [rsp+11Ch] [rbp+1Ch]
  const CHAR *v45; // [rsp+120h] [rbp+20h]
  int v46; // [rsp+128h] [rbp+28h]
  int v47; // [rsp+12Ch] [rbp+2Ch]
  __int64 *v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]

  v4 = 0;
  v5 = *(_BYTE *)(a1 + 200);
  v6 = (const CHAR *)a4;
  v25 = *(_QWORD *)(a1 + 2520);
  v7 = (const CHAR *)a3;
  v8 = (const CHAR *)a2;
  v27 = 0LL;
  HUBREG_OpenCreateUsbflagsDeviceKey(a2, a3, a4, 0x20019u, 0LL, &v27, 0, v25);
  v12 = *(_DWORD *)(a1 + 168) == 3;
  v33 = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  if ( v12 && (v10 = *(_WORD **)(a1 + 176)) != 0LL )
    HUBMISC_QueryKseDeviceFlags(
      0LL,
      (__int64)v8,
      (__int64)v7,
      (__int64)v6,
      v10,
      *(_WORD **)(a1 + 184),
      *(_WORD **)(a1 + 192),
      &v33,
      &v32,
      &v31,
      &v30,
      &v29,
      &v28,
      0LL,
      *(_BYTE *)(a1 + 240) == 0,
      *(_QWORD *)(a1 + 2520));
  else
    HUBMISC_QueryKseDeviceFlags(
      0LL,
      (__int64)v8,
      (__int64)v7,
      (__int64)v6,
      0LL,
      0LL,
      0LL,
      &v33,
      &v32,
      &v31,
      &v30,
      &v29,
      &v28,
      0LL,
      *(_BYTE *)(a1 + 240) == 0,
      *(_QWORD *)(a1 + 2520));
  v11 = v33 | v32 | v31 | v30 | v29 | v28;
  v26 = 0;
  if ( v27 )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
           WdfDriverGlobals,
           v27,
           &g_ResetTTOnCancel,
           4LL,
           &v26,
           0LL,
           0LL);
    if ( v4 >= 0 )
    {
      v4 = 0;
      v12 = v26 == 0;
      goto LABEL_14;
    }
    if ( v4 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_106;
      v13 = 38;
      goto LABEL_11;
    }
    v4 = 0;
  }
  v12 = (v11 & 0x100) == 0;
LABEL_14:
  if ( !v12 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x800u);
  v26 = 0;
  if ( v27 )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
           WdfDriverGlobals,
           v27,
           L".0",
           4LL,
           &v26,
           0LL,
           0LL);
    if ( v4 >= 0 )
    {
      v4 = 0;
      v14 = v26 == 0;
      goto LABEL_24;
    }
    if ( v4 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_106;
      v13 = 39;
      goto LABEL_11;
    }
    v4 = 0;
  }
  v14 = (v11 & 0x200) == 0;
LABEL_24:
  if ( !v14 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 40), 0xFFFFF7FF);
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x1000u);
  }
  if ( (v11 & 0x800) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x2000u);
  v26 = 0;
  if ( !v27 )
    goto LABEL_35;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         v27,
         &g_DisableLpm,
         4LL,
         &v26,
         0LL,
         0LL);
  if ( v4 < 0 )
  {
    if ( v4 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_106;
      v13 = 40;
LABEL_11:
      LODWORD(v24) = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        v13,
        (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids,
        v24);
      goto LABEL_106;
    }
    v4 = 0;
LABEL_35:
    v15 = (v11 & 0x1000) == 0;
    goto LABEL_36;
  }
  v4 = 0;
  v15 = v26 == 0;
LABEL_36:
  if ( !v15 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x8000u);
  if ( (v11 & 0x2000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x10000u);
  if ( (v11 & 0x8000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x80000u);
  if ( (v11 & 0x40000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x100000u);
  if ( (v11 & 0x100000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x200000u);
  if ( (v11 & 0x400000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x800000u);
  if ( (v11 & 0x2000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x1000000u);
  if ( (v11 & 0x4000000) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2496), 1u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x8000u);
  }
  if ( (v11 & 0x40000000000LL) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2496), 4u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 2496), 1u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x8000u);
  }
  if ( !*(_BYTE *)(a1 + 240) && (v11 & 0x10000) != 0 )
    *(_DWORD *)(a1 + 2496) |= 1u;
  if ( (v11 & 0x10000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x2000000u);
  if ( (v11 & 0x8000000000LL) != 0 && v5 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 1u);
  if ( (v11 & 0x20000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x10000000u);
  if ( (v11 & 0x100000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 8u);
  if ( (v11 & 0x20000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 4u);
  _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x40000000u);
  if ( (v11 & 8) != 0 )
    _InterlockedAnd((volatile signed __int32 *)(a1 + 40), 0xBFFFFFFF);
  if ( (v11 & 0x800000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x80000000);
  if ( (v11 & 0x10000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 2u);
  if ( (v11 & 0x200000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 0x10u);
  if ( (v11 & 0x400000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 0x40u);
  if ( (unsigned int)Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage() && (v11 & 0x1000000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 0x80u);
  if ( *(_WORD *)(a1 + 2464) == 8457 && *(_WORD *)(a1 + 2466) == 2064 && (unsigned __int8)*(_WORD *)(a1 + 2468) < 0x89u )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x800000u);
  if ( (*(_DWORD *)(a1 + 40) & 0x800000) != 0 )
  {
    if ( (unsigned int)dword_1C006A1F8 > 5
      && (qword_1C006A208 & 0x200000000004LL) != 0
      && (qword_1C006A210 & 0x200000000004LL) == qword_1C006A210 )
    {
      v34 = 1LL;
      v37 = &v34;
      v17 = -1LL;
      v38 = 8LL;
      if ( v8 )
      {
        v18 = -1LL;
        do
          ++v18;
        while ( v8[v18] );
        v19 = v18 + 1;
      }
      else
      {
        v8 = File;
        v19 = 1;
      }
      v39 = v8;
      v40 = v19;
      v41 = 0;
      if ( v7 )
      {
        v20 = -1LL;
        do
          ++v20;
        while ( v7[v20] );
        v21 = (unsigned int)(v20 + 1);
      }
      else
      {
        v7 = File;
        v21 = 1LL;
      }
      v42 = v7;
      v43 = v21;
      v44 = 0;
      if ( v6 )
      {
        do
          ++v17;
        while ( v6[v17] );
        v22 = v17 + 1;
      }
      else
      {
        v6 = File;
        v22 = 1;
      }
      v46 = v22;
      v45 = v6;
      v48 = &v35;
      v47 = 0;
      v35 = 16779264LL;
      v49 = 8LL;
      tlgWriteAgg(v21, byte_1C0065D3E, v16, 7u, &v36);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 4u, 3u, 0x29u, (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids);
  }
LABEL_106:
  if ( v27 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v4;
}
