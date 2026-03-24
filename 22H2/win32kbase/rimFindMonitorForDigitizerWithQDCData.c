/*
 * XREFs of rimFindMonitorForDigitizerWithQDCData @ 0x1C0165580
 * Callers:
 *     RIMOnDisplayStateChange @ 0x1C0056ECC (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0155790 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C015BF5C (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0160080 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMFindMonitorForDigitizer @ 0x1C0164500 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0167888 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C001F1B0 (DrvDisplayConfigGetDeviceInfo.c)
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     isChildPartition @ 0x1C00423A0 (isChildPartition.c)
 *     RIMGetPanelId @ 0x1C006DC84 (RIMGetPanelId.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1C00C584C (_wcsnicmp.c)
 *     wcsnlen @ 0x1C00C5A1C (wcsnlen.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     UserLogError @ 0x1C0139C40 (UserLogError.c)
 *     RIMGetContainerId @ 0x1C015D800 (RIMGetContainerId.c)
 *     RIMGetDisplayMonitor @ 0x1C0164678 (RIMGetDisplayMonitor.c)
 */

__int64 __fastcall rimFindMonitorForDigitizerWithQDCData(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  unsigned int v3; // r12d
  unsigned int *v5; // r15
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // r9
  int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // rsi
  int v17; // edx
  __int64 v18; // r12
  ULONG v19; // r8d
  __int64 v20; // rcx
  unsigned __int16 *v21; // rax
  int v22; // ecx
  int v23; // edx
  unsigned __int16 *v24; // rax
  int v25; // ecx
  int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // esi
  int v30; // eax
  _DWORD *v31; // rcx
  unsigned int *v32; // rcx
  unsigned int v33; // eax
  int v34; // eax
  __int64 v35; // rcx
  __int64 result; // rax
  __int64 *v37; // rcx
  int v38; // [rsp+30h] [rbp-D0h]
  unsigned int v39; // [rsp+34h] [rbp-CCh]
  int v40; // [rsp+38h] [rbp-C8h]
  __int64 v41; // [rsp+40h] [rbp-C0h]
  int v42; // [rsp+48h] [rbp-B8h]
  int v43; // [rsp+4Ch] [rbp-B4h]
  __int64 v44; // [rsp+60h] [rbp-A0h]
  struct _DEVICE_OBJECT *v45; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v46; // [rsp+78h] [rbp-88h]
  __int64 v47; // [rsp+80h] [rbp-80h]
  __int64 v48; // [rsp+88h] [rbp-78h]
  __int64 v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h]
  PVOID Object; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v52; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v53[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v54; // [rsp+B8h] [rbp-48h]
  int v55; // [rsp+C0h] [rbp-40h]
  _DWORD v56[3]; // [rsp+C4h] [rbp-3Ch] BYREF
  __int128 v57; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v58; // [rsp+E0h] [rbp-20h]
  _DWORD v59[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v60; // [rsp+F8h] [rbp-8h]
  int v61; // [rsp+100h] [rbp+0h]
  _WORD v62[206]; // [rsp+104h] [rbp+4h] BYREF
  wchar_t Src[64]; // [rsp+2A0h] [rbp+1A0h] BYREF

  v3 = 0;
  v5 = a2;
  v7 = 0LL;
  v52 = 0LL;
  if ( !*(_DWORD *)(a1 + 1344) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 805);
  if ( !v5 )
    goto LABEL_95;
  v41 = 0LL;
  a2 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v49 = 0LL;
  v11 = 0LL;
  v46 = 0LL;
  v12 = 0LL;
  v47 = 0LL;
  v13 = 0LL;
  v48 = 0LL;
  v14 = 0;
  v50 = 0LL;
  v44 = 0LL;
  v38 = 0;
  v40 = 0;
  v43 = 0;
  v42 = 0;
  v58 = 0LL;
  v39 = 0;
  if ( !*v5 )
    goto LABEL_13;
  while ( (*(_DWORD *)(a1 + 184) & 0x40) == 0 )
  {
LABEL_21:
    Object = 0LL;
    v45 = 0LL;
    v18 = 200LL * v3;
    v57 = 0LL;
    if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, struct _DEVICE_OBJECT **))qword_1C0250A58)(
                v18 + *((_QWORD *)v5 + 1) + 16LL,
                *(unsigned int *)(*((_QWORD *)v5 + 1) + v18 + 28),
                &Object,
                &v45) >= 0 )
    {
      if ( (int)RIMGetContainerId(v45, &v57, 0LL) < 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 883);
      RIMGetPanelId(v45, Src, v19);
      ObfDereferenceObject(Object);
    }
    memset(v62, 0, 0x190uLL);
    v20 = *((_QWORD *)v5 + 1);
    v60 = *(_QWORD *)(v20 + v18 + 16);
    v61 = *(_DWORD *)(v20 + v18 + 28);
    v59[0] = 2;
    v59[1] = 420;
    if ( (int)DrvDisplayConfigGetDeviceInfo((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v59) >= 0 && v62[72] )
    {
      v21 = &v62[72];
      do
      {
        v22 = *(unsigned __int16 *)((char *)v21 + a1 + 1620 - (_QWORD)&v62[72]);
        v23 = *v21 - v22;
        if ( v23 )
          break;
        ++v21;
      }
      while ( v22 );
      if ( !v23 )
      {
        if ( v9 )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 915);
        v41 = v18 + *((_QWORD *)v5 + 1);
      }
      v24 = &v62[72];
      do
      {
        v25 = *(unsigned __int16 *)((char *)v24 + a1 + 1364 - (_QWORD)&v62[72]);
        v26 = *v24 - v25;
        if ( v26 )
          break;
        ++v24;
      }
      while ( v25 );
      if ( !v26 )
      {
        if ( v10 )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 921);
        v49 = v18 + *((_QWORD *)v5 + 1);
      }
    }
    v27 = *(_QWORD *)(a1 + 2112) - v57;
    if ( !v27 )
      v27 = *(_QWORD *)(a1 + 2120) - *((_QWORD *)&v57 + 1);
    if ( !v27 )
    {
      v28 = v58 - *(_QWORD *)(a1 + 2112);
      if ( (_QWORD)v58 == *(_QWORD *)(a1 + 2112) )
        v28 = *((_QWORD *)&v58 + 1) - *(_QWORD *)(a1 + 2120);
      if ( v28 )
      {
        ++v43;
        v50 = v18 + *((_QWORD *)v5 + 1);
      }
    }
    v29 = wcsnlen((const wchar_t *)(a1 + 2132), 0x39uLL);
    v30 = wcsnlen(Src, 0x39uLL);
    if ( v29 && v29 == v30 && !wcsnicmp((const wchar_t *)(a1 + 2132), Src, 0x39uLL) )
    {
      v13 = v18 + *((_QWORD *)v5 + 1);
      ++v42;
      v44 = v13;
    }
    else
    {
      v13 = v44;
    }
    if ( *(_DWORD *)(a1 + 1360) == 6 )
    {
      v31 = (_DWORD *)(v18 + *((_QWORD *)v5 + 1));
      if ( *(_DWORD *)(a1 + 1876) == v31[4] && *(_DWORD *)(a1 + 1880) == v31[5] && *(_DWORD *)(a1 + 1884) == v31[6] )
        v7 = v18 + *((_QWORD *)v5 + 1);
    }
    v32 = (unsigned int *)(v18 + *((_QWORD *)v5 + 1));
    v33 = v32[20];
    if ( v33 == 0x80000000 || v33 == 11 || v33 == 13 )
    {
      ++v38;
      v11 = v18 + *((_QWORD *)v5 + 1);
      v14 = v40;
      v12 = v48;
      v47 = v11;
    }
    else
    {
      v12 = v18 + *((_QWORD *)v5 + 1);
      v11 = v47;
      v14 = ++v40;
      v48 = v12;
    }
    a2 = v46;
    if ( !v46 && !v32[29] )
    {
      if ( !v32[30] )
        a2 = v32;
      v46 = a2;
    }
    v9 = v41;
    v3 = v39 + 1;
    v10 = v49;
    v39 = v3;
    if ( v3 >= *v5 )
      goto LABEL_12;
  }
  if ( !isChildPartition() )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 835);
  v15 = *((_QWORD *)v5 + 1);
  memset(v56, 0, sizeof(v56));
  v53[1] = 32;
  v16 = 200LL * v3;
  v54 = *(_QWORD *)(v15 + v16 + 16);
  v55 = *(_DWORD *)(v15 + v16 + 28);
  v53[0] = -24;
  if ( (int)DrvDisplayConfigGetDeviceInfo((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v53) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v17,
        12,
        11,
        (__int64)&WPP_516b30da09af3a4d670a255114438942_Traceguids);
    }
    goto LABEL_20;
  }
  if ( *(_DWORD *)(a1 + 1876) != v56[0]
    || __PAIR64__(*(_DWORD *)(a1 + 1888), *(_DWORD *)(a1 + 1880)) != *(_QWORD *)&v56[1] )
  {
LABEL_20:
    v9 = v41;
    goto LABEL_21;
  }
  a2 = v46;
  v7 = v16 + *((_QWORD *)v5 + 1);
  v9 = v41;
  v14 = v40;
  v13 = v44;
  v11 = v47;
  v12 = v48;
LABEL_12:
  v8 = v50;
LABEL_13:
  if ( a3 )
    *a3 = v14 != 0;
  if ( v7 )
  {
LABEL_90:
    if ( !(unsigned int)RIMGetDisplayMonitor(v7, v5, &v52) )
      goto LABEL_95;
    if ( v52 )
      v35 = *v52;
    else
      v35 = 0LL;
    *(_QWORD *)(a1 + 1352) = v35;
    *(_QWORD *)(a1 + 1876) = *(_QWORD *)(v7 + 16);
    *(_DWORD *)(a1 + 1888) = *(_DWORD *)(v7 + 28);
    result = *(unsigned int *)(v7 + 24);
    *(_DWORD *)(a1 + 1884) = result;
    goto LABEL_102;
  }
  if ( v9 )
  {
    v7 = v9;
    *(_DWORD *)(a1 + 1360) = 5;
    goto LABEL_90;
  }
  if ( v10 )
  {
    v7 = v10;
    *(_DWORD *)(a1 + 1360) = 1;
    goto LABEL_90;
  }
  if ( v13 && v42 == 1 )
  {
    v7 = v13;
    goto LABEL_86;
  }
  if ( v8 && v43 == 1 )
  {
    v7 = v8;
    goto LABEL_86;
  }
  v34 = *(_DWORD *)(a1 + 2128);
  if ( v34 )
  {
    if ( v34 != 1 || !v12 || v14 != 1 )
      goto LABEL_87;
    v7 = v12;
LABEL_86:
    *(_DWORD *)(a1 + 1360) = 2;
    goto LABEL_90;
  }
  if ( v11 && v38 == 1 )
  {
    v7 = v11;
    goto LABEL_86;
  }
LABEL_87:
  if ( a2 )
  {
    *(_DWORD *)(a1 + 1360) = 3;
    v7 = (__int64)a2;
    if ( a3 )
      UserLogError(-2147483385);
    goto LABEL_90;
  }
LABEL_95:
  if ( a3 )
    UserLogError(-2147483385);
  result = gpDispInfo;
  v37 = *(__int64 **)(gpDispInfo + 96);
  if ( v37 )
    v35 = *v37;
  else
    v35 = 0LL;
  *(_QWORD *)(a1 + 1352) = v35;
  *(_DWORD *)(a1 + 1360) = 4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 3;
    result = WPP_RECORDER_SF_(
               (_DWORD)gRimLog,
               (_DWORD)a2,
               1,
               12,
               (__int64)&WPP_516b30da09af3a4d670a255114438942_Traceguids);
    v35 = *(_QWORD *)(a1 + 1352);
  }
LABEL_102:
  if ( !v35 )
    return MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1101);
  return result;
}
