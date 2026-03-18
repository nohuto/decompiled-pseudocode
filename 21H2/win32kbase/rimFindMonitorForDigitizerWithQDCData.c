/*
 * XREFs of rimFindMonitorForDigitizerWithQDCData @ 0x1C01990C8
 * Callers:
 *     RIMOnDisplayStateChange @ 0x1C0043F38 (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0182990 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0190190 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0196000 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMFindMonitorForDigitizer @ 0x1C01980A0 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C019B9FC (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C0070820 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     RIMGetPanelId @ 0x1C00A1AB8 (RIMGetPanelId.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1C00D61F8 (_wcsnicmp.c)
 *     wcsnlen @ 0x1C00D63CC (wcsnlen.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     UserLogError @ 0x1C0166FA0 (UserLogError.c)
 *     RIMGetContainerId @ 0x1C0192030 (RIMGetContainerId.c)
 *     RIMGetDisplayMonitor @ 0x1C0198218 (RIMGetDisplayMonitor.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFindMonitorForDigitizerWithQDCData(__int64 a1, unsigned int *a2, unsigned __int64 a3)
{
  unsigned int v3; // r12d
  _DWORD *v4; // r13
  unsigned int *v5; // r15
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rsi
  int v19; // edx
  int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  unsigned __int16 *v28; // rax
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned __int16 *v32; // rax
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  int v38; // esi
  int v39; // eax
  _DWORD *v40; // rcx
  unsigned int *v41; // rcx
  unsigned int v42; // eax
  int v43; // eax
  __int64 result; // rax
  __int64 *v45; // rcx
  unsigned int v46; // [rsp+40h] [rbp-C0h]
  __int64 v47; // [rsp+48h] [rbp-B8h]
  int v48; // [rsp+50h] [rbp-B0h]
  int v49; // [rsp+54h] [rbp-ACh]
  int v50; // [rsp+58h] [rbp-A8h]
  unsigned int v51; // [rsp+5Ch] [rbp-A4h]
  __int64 v52; // [rsp+60h] [rbp-A0h]
  struct _DEVICE_OBJECT *v53; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v54; // [rsp+78h] [rbp-88h]
  __int64 v55; // [rsp+80h] [rbp-80h]
  __int64 v56; // [rsp+88h] [rbp-78h]
  __int64 v57; // [rsp+90h] [rbp-70h]
  __int64 v58; // [rsp+98h] [rbp-68h]
  PVOID Object; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v60; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v61[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-48h]
  int v63; // [rsp+C0h] [rbp-40h]
  _DWORD v64[3]; // [rsp+C4h] [rbp-3Ch] BYREF
  __int128 v65; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v66; // [rsp+E0h] [rbp-20h]
  _DWORD v67[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v68; // [rsp+F8h] [rbp-8h]
  int v69; // [rsp+100h] [rbp+0h]
  _WORD v70[206]; // [rsp+104h] [rbp+4h] BYREF
  wchar_t Src[64]; // [rsp+2A0h] [rbp+1A0h] BYREF

  v3 = 0;
  v4 = (_DWORD *)a3;
  v5 = a2;
  v7 = 0LL;
  v60 = 0LL;
  if ( !*(_DWORD *)(a1 + 1336) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !v5 )
    goto LABEL_101;
  v47 = 0LL;
  a2 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v57 = 0LL;
  v11 = 0LL;
  v54 = 0LL;
  v12 = 0LL;
  v55 = 0LL;
  v13 = 0LL;
  v56 = 0LL;
  a3 = 0LL;
  v58 = 0LL;
  v52 = 0LL;
  v50 = 0;
  v46 = 0;
  v49 = 0;
  v48 = 0;
  v66 = 0LL;
  v51 = 0;
  if ( !*v5 )
    goto LABEL_13;
  while ( (*(_DWORD *)(a1 + 184) & 0x40) == 0 )
  {
LABEL_30:
    v22 = *((_QWORD *)v5 + 1);
    Object = 0LL;
    v53 = 0LL;
    v23 = 216LL * v3;
    v65 = 0LL;
    if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, struct _DEVICE_OBJECT **))qword_1C0296828)(
                v23 + v22 + 16,
                *(unsigned int *)(v22 + v23 + 28),
                &Object,
                &v53) >= 0 )
    {
      if ( (int)RIMGetContainerId(v53, &v65, 0LL) < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
      RIMGetPanelId(v53, Src, v26);
      ObfDereferenceObject(Object);
    }
    memset(v70, 0, 0x190uLL);
    v27 = *((_QWORD *)v5 + 1);
    v68 = *(_QWORD *)(v27 + v23 + 16);
    v69 = *(_DWORD *)(v27 + v23 + 28);
    v67[1] = 420;
    v67[0] = 2;
    if ( (int)DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v67, 0) >= 0 && v70[72] )
    {
      v28 = &v70[72];
      v29 = a1 + 1612 - (_QWORD)&v70[72];
      do
      {
        v30 = *(unsigned __int16 *)((char *)v28 + v29);
        v31 = *v28 - (unsigned int)v30;
        if ( (_DWORD)v31 )
          break;
        ++v28;
      }
      while ( (_DWORD)v30 );
      if ( !(_DWORD)v31 )
      {
        if ( v9 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v31, v29);
        v47 = v23 + *((_QWORD *)v5 + 1);
      }
      v32 = &v70[72];
      v33 = a1 + 1356 - (_QWORD)&v70[72];
      do
      {
        v34 = *(unsigned __int16 *)((char *)v32 + v33);
        v35 = *v32 - (unsigned int)v34;
        if ( (_DWORD)v35 )
          break;
        ++v32;
      }
      while ( (_DWORD)v34 );
      if ( !(_DWORD)v35 )
      {
        if ( v10 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v35, v33);
        v57 = v23 + *((_QWORD *)v5 + 1);
      }
    }
    v36 = *(_QWORD *)(a1 + 2120) - v65;
    if ( !v36 )
      v36 = *(_QWORD *)(a1 + 2128) - *((_QWORD *)&v65 + 1);
    if ( !v36 )
    {
      v37 = v66 - *(_QWORD *)(a1 + 2120);
      if ( (_QWORD)v66 == *(_QWORD *)(a1 + 2120) )
        v37 = *((_QWORD *)&v66 + 1) - *(_QWORD *)(a1 + 2128);
      if ( v37 )
      {
        ++v49;
        v58 = v23 + *((_QWORD *)v5 + 1);
      }
    }
    v38 = wcsnlen((const wchar_t *)(a1 + 2140), 0x39uLL);
    v39 = wcsnlen(Src, 0x39uLL);
    if ( v38 && v38 == v39 && !wcsnicmp((const wchar_t *)(a1 + 2140), Src, 0x39uLL) )
    {
      v13 = v23 + *((_QWORD *)v5 + 1);
      ++v48;
      v52 = v13;
    }
    else
    {
      v13 = v52;
    }
    if ( *(_DWORD *)(a1 + 1352) == 6 )
    {
      v40 = (_DWORD *)(v23 + *((_QWORD *)v5 + 1));
      if ( *(_DWORD *)(a1 + 1868) == v40[4] && *(_DWORD *)(a1 + 1872) == v40[5] && *(_DWORD *)(a1 + 1876) == v40[6] )
        v7 = v23 + *((_QWORD *)v5 + 1);
    }
    v41 = (unsigned int *)(v23 + *((_QWORD *)v5 + 1));
    v42 = v41[20];
    if ( v42 == 0x80000000 || v42 == 11 || v42 == 13 )
    {
      ++v50;
      v11 = v23 + *((_QWORD *)v5 + 1);
      a3 = v46;
      v12 = v56;
      v55 = v11;
    }
    else
    {
      v12 = v23 + *((_QWORD *)v5 + 1);
      v11 = v55;
      a3 = ++v46;
      v56 = v12;
    }
    a2 = v54;
    if ( !v54 && !v41[29] )
    {
      if ( !v41[30] )
        a2 = v41;
      v54 = a2;
    }
    v9 = v47;
    v3 = v51 + 1;
    v10 = v57;
    v51 = v3;
    if ( v3 >= *v5 )
      goto LABEL_12;
  }
  if ( !isChildPartition() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
  v17 = *((_QWORD *)v5 + 1);
  memset(v64, 0, sizeof(v64));
  v61[1] = 32;
  v18 = 216LL * v3;
  v62 = *(_QWORD *)(v17 + v18 + 16);
  v63 = *(_DWORD *)(v17 + v18 + 28);
  v61[0] = -24;
  if ( (int)DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v61, 0) < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      LOBYTE(v19) = 0;
    }
    else
    {
      v19 = 1;
    }
    if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v19,
        v20,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        12,
        11,
        (__int64)&WPP_887cd155f3483272104c7a04c9c6159b_Traceguids);
    }
    goto LABEL_29;
  }
  if ( *(_DWORD *)(a1 + 1868) != v64[0]
    || __PAIR64__(*(_DWORD *)(a1 + 1880), *(_DWORD *)(a1 + 1872)) != *(_QWORD *)&v64[1] )
  {
LABEL_29:
    v9 = v47;
    goto LABEL_30;
  }
  a2 = v54;
  v7 = v18 + *((_QWORD *)v5 + 1);
  v9 = v47;
  a3 = v46;
  v13 = v52;
  v11 = v55;
  v12 = v56;
LABEL_12:
  v8 = v58;
LABEL_13:
  if ( v4 )
    *v4 = a3 != 0;
  if ( v7 )
  {
LABEL_18:
    if ( !(unsigned int)RIMGetDisplayMonitor(v7, v5, &v60) )
      goto LABEL_101;
    if ( v60 )
      v21 = *v60;
    else
      v21 = 0LL;
    *(_QWORD *)(a1 + 1344) = v21;
    *(_QWORD *)(a1 + 1868) = *(_QWORD *)(v7 + 16);
    *(_DWORD *)(a1 + 1880) = *(_DWORD *)(v7 + 28);
    result = *(unsigned int *)(v7 + 24);
    *(_DWORD *)(a1 + 1876) = result;
    goto LABEL_113;
  }
  if ( v9 )
  {
    v7 = v9;
    *(_DWORD *)(a1 + 1352) = 5;
    goto LABEL_18;
  }
  if ( v10 )
  {
    v7 = v10;
    *(_DWORD *)(a1 + 1352) = 1;
    goto LABEL_18;
  }
  if ( v13 && v48 == 1 )
  {
    v7 = v13;
    goto LABEL_95;
  }
  if ( v8 && v49 == 1 )
  {
    v7 = v8;
    goto LABEL_95;
  }
  v43 = *(_DWORD *)(a1 + 2136);
  if ( v43 )
  {
    if ( v43 != 1 || !v12 || (_DWORD)a3 != 1 )
      goto LABEL_96;
    v7 = v12;
LABEL_95:
    *(_DWORD *)(a1 + 1352) = 2;
    goto LABEL_18;
  }
  if ( v11 && v50 == 1 )
  {
    v7 = v11;
    goto LABEL_95;
  }
LABEL_96:
  if ( a2 )
  {
    *(_DWORD *)(a1 + 1352) = 3;
    v7 = (__int64)a2;
    if ( v4 )
      UserLogError(-2147483385);
    goto LABEL_18;
  }
LABEL_101:
  if ( v4 )
    UserLogError(-2147483385);
  v45 = (__int64 *)*((_QWORD *)gpDispInfo + 12);
  if ( v45 )
    v21 = *v45;
  else
    v21 = 0LL;
  *(_QWORD *)(a1 + 1344) = v21;
  *(_DWORD *)(a1 + 1352) = 4;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
  {
    LOBYTE(a2) = 0;
  }
  result = (__int64)&WPP_RECORDER_INITIALIZED;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    result = WPP_RECORDER_AND_TRACE_SF_(
               WPP_GLOBAL_Control->AttachedDevice,
               (_DWORD)a2,
               a3,
               (_DWORD)gRimLog,
               3,
               1,
               12,
               (__int64)&WPP_887cd155f3483272104c7a04c9c6159b_Traceguids);
    v21 = *(_QWORD *)(a1 + 1344);
  }
LABEL_113:
  if ( !v21 )
    return MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3);
  return result;
}
