/*
 * XREFs of rimFindMonitorForDigitizerWithQDCData @ 0x1C01BE49C
 * Callers:
 *     RIMOnDisplayStateChange @ 0x1C0036980 (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C01A46A0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C01BA8B0 (RIMVirtCreatePointerDeviceInfo.c)
 *     rimInUserCritCreatePointerDeviceInfo @ 0x1C01BC3D8 (rimInUserCritCreatePointerDeviceInfo.c)
 *     RIMFindMonitorForDigitizer @ 0x1C01BD310 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01C21B8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C002834C (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     RIMGetContainerId @ 0x1C0030264 (RIMGetContainerId.c)
 *     DrvDxgkGetMonitorDeviceObject @ 0x1C00303C0 (DrvDxgkGetMonitorDeviceObject.c)
 *     RIMGetPanelId @ 0x1C0030420 (RIMGetPanelId.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     isChildPartition @ 0x1C0078FF0 (isChildPartition.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1C00DACB8 (_wcsnicmp.c)
 *     wcsnlen @ 0x1C00DAE9C (wcsnlen.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     UserLogError @ 0x1C017CC90 (UserLogError.c)
 *     RIMGetDisplayMonitor @ 0x1C01BD4AC (RIMGetDisplayMonitor.c)
 */

void __fastcall rimFindMonitorForDigitizerWithQDCData(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  unsigned int v3; // r15d
  _DWORD *v4; // r13
  unsigned int *v5; // r14
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r11
  __int64 v11; // r12
  __int64 v12; // r10
  int v13; // r9d
  __int64 *v14; // r12
  __int64 v15; // rcx
  __int64 v16; // rsi
  int v17; // edx
  int v18; // r8d
  __int64 v19; // r15
  __int64 v20; // rax
  ULONG v21; // r8d
  __int64 v22; // rcx
  unsigned __int16 *v23; // rax
  int v24; // ecx
  int v25; // edx
  unsigned __int16 *v26; // rax
  int v27; // ecx
  int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // esi
  int v32; // eax
  _DWORD *v33; // rcx
  unsigned int *v34; // rcx
  unsigned int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 *v38; // rcx
  int v39; // [rsp+40h] [rbp-C0h]
  unsigned int v40; // [rsp+44h] [rbp-BCh]
  int v41; // [rsp+48h] [rbp-B8h]
  __int64 v42; // [rsp+50h] [rbp-B0h]
  int v43; // [rsp+58h] [rbp-A8h]
  int v44; // [rsp+5Ch] [rbp-A4h]
  _DWORD *v45; // [rsp+70h] [rbp-90h]
  __int64 v46; // [rsp+78h] [rbp-88h]
  struct _DEVICE_OBJECT *v47; // [rsp+88h] [rbp-78h] BYREF
  unsigned int *v48; // [rsp+90h] [rbp-70h]
  __int64 v49; // [rsp+98h] [rbp-68h]
  __int64 v50; // [rsp+A0h] [rbp-60h]
  __int64 v51; // [rsp+A8h] [rbp-58h]
  PVOID Object; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *v53; // [rsp+B8h] [rbp-48h]
  __int64 *v54; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v55[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v56; // [rsp+D0h] [rbp-30h]
  int v57; // [rsp+D8h] [rbp-28h]
  _DWORD v58[3]; // [rsp+DCh] [rbp-24h] BYREF
  __int128 v59; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v60; // [rsp+F8h] [rbp-8h]
  _DWORD v61[2]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v62; // [rsp+118h] [rbp+18h]
  int v63; // [rsp+120h] [rbp+20h]
  _WORD v64[206]; // [rsp+124h] [rbp+24h] BYREF
  wchar_t Src[64]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v3 = 0;
  v53 = a2;
  v4 = a3;
  v5 = a2;
  v7 = 0LL;
  v54 = 0LL;
  if ( !*(_DWORD *)(a1 + 1336) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 829);
  if ( !v5 )
    goto LABEL_102;
  v42 = 0LL;
  v8 = 0LL;
  a2 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v46 = 0LL;
  v11 = 0LL;
  v48 = 0LL;
  v12 = 0LL;
  v49 = 0LL;
  a3 = 0LL;
  v51 = 0LL;
  v13 = 0;
  v50 = 0LL;
  v45 = 0LL;
  v39 = 0;
  v41 = 0;
  v44 = 0;
  v43 = 0;
  v60 = 0LL;
  v40 = 0;
  if ( !*v5 )
    goto LABEL_72;
  v14 = (__int64 *)(v5 + 2);
  while ( (*(_DWORD *)(a1 + 184) & 0x40) == 0 )
  {
LABEL_14:
    v19 = 216LL * v3;
    v59 = 0LL;
    v20 = *v14;
    Object = 0LL;
    v47 = 0LL;
    if ( (int)DrvDxgkGetMonitorDeviceObject(
                v19 + v20 + 16,
                *(unsigned int *)(v20 + v19 + 28),
                (__int64)&Object,
                (__int64)&v47) >= 0 )
    {
      if ( (int)RIMGetContainerId(v47, &v59, 0LL) < 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 907);
      RIMGetPanelId(v47, Src, v21);
      ObfDereferenceObject(Object);
    }
    memset(v64, 0, 0x190uLL);
    v22 = *v14;
    v62 = *(_QWORD *)(v19 + *v14 + 16);
    v63 = *(_DWORD *)(v19 + v22 + 28);
    v61[0] = 2;
    v61[1] = 420;
    if ( (int)DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v61, 0) >= 0 && v64[72] )
    {
      v23 = &v64[72];
      do
      {
        v24 = *(unsigned __int16 *)((char *)v23 + a1 + 1612 - (_QWORD)&v64[72]);
        v25 = *v23 - v24;
        if ( v25 )
          break;
        ++v23;
      }
      while ( v24 );
      if ( !v25 )
      {
        if ( v9 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 939);
        v42 = v19 + *v14;
      }
      v26 = &v64[72];
      do
      {
        v27 = *(unsigned __int16 *)((char *)v26 + a1 + 1356 - (_QWORD)&v64[72]);
        v28 = *v26 - v27;
        if ( v28 )
          break;
        ++v26;
      }
      while ( v27 );
      if ( !v28 )
      {
        if ( v46 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 945);
        v46 = v19 + *v14;
      }
    }
    v29 = *(_QWORD *)(a1 + 2120) - v59;
    if ( !v29 )
      v29 = *(_QWORD *)(a1 + 2128) - *((_QWORD *)&v59 + 1);
    if ( !v29 )
    {
      v30 = v60 - *(_QWORD *)(a1 + 2120);
      if ( (_QWORD)v60 == *(_QWORD *)(a1 + 2120) )
        v30 = *((_QWORD *)&v60 + 1) - *(_QWORD *)(a1 + 2128);
      if ( v30 )
      {
        ++v44;
        v50 = v19 + *v14;
      }
    }
    v31 = wcsnlen((const wchar_t *)(a1 + 2140), 0x39uLL);
    v32 = wcsnlen(Src, 0x39uLL);
    if ( v31 && v31 == v32 && !wcsnicmp((const wchar_t *)(a1 + 2140), Src, 0x39uLL) )
    {
      a3 = (_DWORD *)(v19 + *v14);
      ++v43;
      v45 = a3;
    }
    else
    {
      a3 = v45;
    }
    if ( *(_DWORD *)(a1 + 1352) == 6 )
    {
      v33 = (_DWORD *)(v19 + *v14);
      if ( *(_DWORD *)(a1 + 1868) == v33[4] && *(_DWORD *)(a1 + 1872) == v33[5] && *(_DWORD *)(a1 + 1876) == v33[6] )
        v7 = v19 + *v14;
    }
    v34 = (unsigned int *)(v19 + *v14);
    v35 = v34[20];
    if ( v35 == 0x80000000 || v35 == 11 || v35 == 13 )
    {
      ++v39;
      v10 = v19 + *v14;
      v13 = v41;
      v49 = v10;
    }
    else
    {
      v10 = v49;
      v13 = ++v41;
      v51 = v19 + *v14;
    }
    a2 = v48;
    if ( !v48 && !v34[29] )
    {
      if ( !v34[30] )
        a2 = v34;
      v48 = a2;
    }
    v5 = v53;
    v3 = v40 + 1;
    v9 = v42;
    v40 = v3;
    if ( v3 >= *v53 )
      goto LABEL_71;
  }
  if ( !isChildPartition() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 859);
  v15 = *v14;
  memset(v58, 0, sizeof(v58));
  v55[1] = 32;
  v16 = 216LL * v3;
  v56 = *(_QWORD *)(v15 + v16 + 16);
  v57 = *(_DWORD *)(v15 + v16 + 28);
  v55[0] = -24;
  if ( (int)DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v55, 0) < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      LOBYTE(v17) = 0;
    }
    else
    {
      v17 = 1;
    }
    if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v17,
        v18,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        12,
        11,
        (__int64)&WPP_aa84a250efe730432bc7145be823620d_Traceguids);
    }
    v9 = v42;
    goto LABEL_14;
  }
  if ( *(_DWORD *)(a1 + 1868) != v58[0]
    || __PAIR64__(*(_DWORD *)(a1 + 1880), *(_DWORD *)(a1 + 1872)) != *(_QWORD *)&v58[1] )
  {
    v9 = v42;
    goto LABEL_14;
  }
  a2 = v48;
  v7 = v16 + *v14;
  v9 = v42;
  v5 = v53;
  a3 = v45;
  v13 = v41;
  v10 = v49;
LABEL_71:
  v11 = v51;
  v12 = v50;
  v8 = v46;
LABEL_72:
  if ( v4 )
    *v4 = v13 != 0;
  if ( v7 )
  {
LABEL_77:
    if ( !(unsigned int)RIMGetDisplayMonitor(v7, v5, &v54) )
      goto LABEL_102;
    if ( v54 )
      v36 = *v54;
    else
      v36 = 0LL;
    *(_QWORD *)(a1 + 1344) = v36;
    *(_QWORD *)(a1 + 1868) = *(_QWORD *)(v7 + 16);
    *(_DWORD *)(a1 + 1880) = *(_DWORD *)(v7 + 28);
    *(_DWORD *)(a1 + 1876) = *(_DWORD *)(v7 + 24);
    goto LABEL_114;
  }
  if ( v9 )
  {
    v7 = v9;
    *(_DWORD *)(a1 + 1352) = 5;
    goto LABEL_77;
  }
  if ( v8 )
  {
    v7 = v8;
    *(_DWORD *)(a1 + 1352) = 1;
    goto LABEL_77;
  }
  if ( a3 && v43 == 1 )
  {
    v7 = (__int64)a3;
    goto LABEL_85;
  }
  if ( v12 && v44 == 1 )
  {
    v7 = v12;
    goto LABEL_85;
  }
  v37 = *(_DWORD *)(a1 + 2136);
  if ( v37 )
  {
    if ( v37 != 1 || !v11 || v13 != 1 )
      goto LABEL_97;
    v7 = v11;
LABEL_85:
    *(_DWORD *)(a1 + 1352) = 2;
    goto LABEL_77;
  }
  if ( v10 && v39 == 1 )
  {
    v7 = v10;
    goto LABEL_85;
  }
LABEL_97:
  if ( a2 )
  {
    *(_DWORD *)(a1 + 1352) = 3;
    v7 = (__int64)a2;
    if ( v4 )
      UserLogError(-2147483385);
    goto LABEL_77;
  }
LABEL_102:
  if ( v4 )
    UserLogError(-2147483385);
  v38 = (__int64 *)*((_QWORD *)gpDispInfo + 12);
  if ( v38 )
    v36 = *v38;
  else
    v36 = 0LL;
  *(_QWORD *)(a1 + 1344) = v36;
  *(_DWORD *)(a1 + 1352) = 4;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      (_DWORD)gRimLog,
      3,
      1,
      12,
      (__int64)&WPP_aa84a250efe730432bc7145be823620d_Traceguids);
    v36 = *(_QWORD *)(a1 + 1344);
  }
LABEL_114:
  if ( !v36 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1125);
}
