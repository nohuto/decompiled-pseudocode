/*
 * XREFs of DrvUpdateGraphicsDeviceList @ 0x1C001F350
 * Callers:
 *     UpdateGraphicsDeviceList @ 0x1C001F2D8 (UpdateGraphicsDeviceList.c)
 *     DrvSetGraphicsDevices @ 0x1C0086C10 (DrvSetGraphicsDevices.c)
 *     DrvInitConsole @ 0x1C009ADD0 (DrvInitConsole.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01186D0 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01198F8 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C001713C (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C001BCCC (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C001E47C (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     UserIsWddmConnectedSession @ 0x1C001F320 (UserIsWddmConnectedSession.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0020020 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C002AC30 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM2 @ 0x1C002C278 (PALLOCMEM2.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C007E954 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C007EA40 (DrvCleanupOneGraphicsDevice.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00AE020 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     bSetDeviceSessionUsage @ 0x1C00AE270 (bSetDeviceSessionUsage.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C00B0EA8 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?DrvSortGraphicsDeviceList@@YAXXZ @ 0x1C00B37C4 (-DrvSortGraphicsDeviceList@@YAXXZ.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00C3560 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00C4D4C (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     wcsncmp @ 0x1C00C58BC (wcsncmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C020005C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall DrvUpdateGraphicsDeviceList(int a1)
{
  __int64 v1; // rsi
  BOOL v2; // r12d
  int v3; // r13d
  __int64 v4; // rax
  char v5; // di
  unsigned int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  wchar_t *v12; // rdx
  unsigned __int64 i; // rcx
  __int64 v14; // rax
  int v16; // eax
  struct tagGRAPHICS_DEVICE *v17; // rsi
  wchar_t *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  int v22; // esi
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct _DEVICE_OBJECT *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  struct _DEVICE_OBJECT *v29; // r14
  __int64 v30; // rdi
  wchar_t *v31; // rcx
  int PruneFlag; // eax
  int v33; // ecx
  unsigned int v34; // ecx
  bool v35; // zf
  unsigned int v36; // r9d
  int v37; // r8d
  __int64 v38; // rax
  wchar_t *v39; // rcx
  unsigned int v40; // r8d
  int v41; // edx
  unsigned int v42; // edx
  __int64 v43; // r9
  __int64 v44; // r8
  PVOID v45; // rdx
  __int64 v46; // rax
  const wchar_t *v47; // r9
  void *v48; // rax
  __int64 v49; // rax
  void *RegistryHandleFromDeviceMap; // rax
  __int64 *v51; // rdx
  __int64 v52; // rax
  int v53; // eax
  unsigned int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rax
  unsigned int v57; // eax
  int updated; // eax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  struct _DEVICE_OBJECT *v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  PVOID Environment; // [rsp+20h] [rbp-E0h]
  int v66; // [rsp+30h] [rbp-D0h]
  char v67; // [rsp+50h] [rbp-B0h]
  NTSTATUS DeviceObjectPointer; // [rsp+54h] [rbp-ACh] BYREF
  _BYTE v69[4]; // [rsp+58h] [rbp-A8h] BYREF
  int v70; // [rsp+5Ch] [rbp-A4h]
  unsigned int v71; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v72; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID v73; // [rsp+68h] [rbp-98h] BYREF
  void *DeviceRegKey; // [rsp+70h] [rbp-90h] BYREF
  PFILE_OBJECT FileObject; // [rsp+78h] [rbp-88h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  __int128 InputBuffer; // [rsp+90h] [rbp-70h] BYREF
  __int128 v79; // [rsp+A0h] [rbp-60h]
  __int64 v80; // [rsp+B0h] [rbp-50h]
  __int128 v81; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v82; // [rsp+C8h] [rbp-38h]
  struct _UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-28h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v85; // [rsp+128h] [rbp+28h]
  int v86; // [rsp+130h] [rbp+30h]
  __int128 v87; // [rsp+138h] [rbp+38h]
  __int128 v88; // [rsp+148h] [rbp+48h]
  __int64 v89; // [rsp+158h] [rbp+58h]

  v1 = a1;
  v70 = a1;
  v2 = gProtocolType == 0;
  v72 = 0;
  DeviceObject = 0LL;
  v80 = 0LL;
  v3 = 1;
  FileObject = 0LL;
  P = 0LL;
  DeviceObjectPointer = 0;
  DeviceRegKey = 0LL;
  InputBuffer = 0LL;
  v79 = 0LL;
  v4 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v4 + 24) = v1;
  *(_QWORD *)(v4 + 32) = v2;
  WdLogEvent5_WdEvent(v4);
  v67 = 0;
  v5 = 0;
  if ( v2 )
  {
    gcNextGlobalDeviceNumber = gcLocalNextGlobalDeviceNumber;
    gpGraphicsDeviceList = (wchar_t *)gpLocalGraphicsDeviceList;
    gpGraphicsDeviceListLast = gpLocalGraphicsDeviceListLast;
    gcNextGlobalPhysicalOutputNumber = gcLocalNextGlobalPhysicalOutputNumber;
    v6 = gcLocalNextGlobalVirtualOutputNumber;
  }
  else
  {
    gcNextGlobalDeviceNumber = gcRemoteNextGlobalDeviceNumber;
    gpGraphicsDeviceList = (wchar_t *)gpRemoteGraphicsDeviceList;
    gpGraphicsDeviceListLast = gpRemoteGraphicsDeviceListLast;
    gcNextGlobalPhysicalOutputNumber = gcRemoteNextGlobalPhysicalOutputNumber;
    v6 = gcRemoteNextGlobalVirtualOutputNumber;
  }
  gcNextGlobalVirtualOutputNumber = v6;
  if ( v2 )
  {
    v71 = 0;
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Name = L"MaxObjectNumber";
    QueryTable.Flags = 288;
    QueryTable.EntryContext = &v72;
    QueryTable.DefaultType = 67108868;
    QueryTable.DefaultData = &v71;
    QueryTable.DefaultLength = 4;
    v89 = 0LL;
    v85 = 0LL;
    v86 = 0;
    v87 = 0LL;
    v88 = 0LL;
    RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
  }
  else if ( (unsigned int)UserIsWddmConnectedSession() )
  {
    v71 = 0;
    DeviceObjectPointer = ((__int64 (__fastcall *)(unsigned int *, unsigned int *))qword_1C0250BB0)(&v71, &v72);
    if ( DeviceObjectPointer < 0 )
    {
      v56 = WdLogNewEntry5_WdError(v55, v7);
      *(_QWORD *)(v56 + 24) = DeviceObjectPointer;
      WdLogEvent5_WdError(v56);
      v72 = gcNextGlobalDeviceNumber;
    }
    v57 = gcNextGlobalDeviceNumber;
    if ( v71 > gcNextGlobalDeviceNumber )
    {
      v57 = v71;
      gcNextGlobalDeviceNumber = v71;
    }
    if ( v72 >= v57 + 16 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
  }
  else
  {
    if ( gProtocolType != -1 )
      v72 = gRemoteContext - 1;
    if ( dword_1C02512E0 )
    {
      updated = DrvUpdateRemoteAdapterInfo(0LL);
      DeviceObjectPointer = updated;
      if ( updated < 0 )
        return 0LL;
    }
  }
  while ( 2 )
  {
    if ( gProtocolType == -1 )
      goto LABEL_8;
    v8 = gcNextGlobalDeviceNumber;
    if ( gcNextGlobalDeviceNumber > v72 )
    {
      v5 = v67;
      goto LABEL_8;
    }
    if ( !(_DWORD)v1 )
    {
      v63 = WdLogNewEntry5_WdTrace(0xFFFFLL, v7);
      WdLogEvent5_WdTrace(v63);
      return 0LL;
    }
    if ( (unsigned int)UserIsWddmConnectedSession() )
    {
      if ( v2 )
      {
        v16 = StringCchPrintfW((wchar_t *)&QueryTable, 0x32uLL, L"\\Device\\Video%d", v8);
        goto LABEL_19;
      }
      v47 = L"RemoteVideo";
    }
    else
    {
      v47 = (const wchar_t *)qword_1C02512D8;
    }
    LODWORD(Environment) = v8;
    v16 = StringCchPrintfW((wchar_t *)&QueryTable, 0x32uLL, L"\\Device\\%s%d", v47, Environment);
LABEL_19:
    if ( v16 < 0 )
      return 0LL;
    v17 = gpRemoteGraphicsDeviceListLast;
    v18 = gpGraphicsDeviceList;
    if ( v2 )
      v17 = gpLocalGraphicsDeviceListLast;
    while ( v18 )
    {
      if ( !wcsncmp((const wchar_t *)&QueryTable, v18, 0x40uLL) )
      {
        ++gcNextGlobalDeviceNumber;
        goto LABEL_75;
      }
      if ( v18 == (wchar_t *)v17 )
        break;
      v18 = (wchar_t *)*((_QWORD *)v18 + 16);
    }
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)&QueryTable);
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
    if ( DeviceObjectPointer >= 0 )
    {
LABEL_27:
      v5 = v67;
      v21 = PALLOCMEM2(0x138uLL);
      LODWORD(v1) = v70;
      if ( !v21 )
        continue;
      *(_DWORD *)(v21 + 216) = 0;
      *(_QWORD *)(v21 + 224) = 0LL;
      *(_QWORD *)(v21 + 136) = DeviceObject;
      *(_WORD *)(v21 + 220) = gProtocolType;
      *(_QWORD *)(v21 + 272) = 0LL;
      if ( !v2 )
        *(_DWORD *)(v21 + 160) |= 0x4000000u;
      *(_QWORD *)(v21 + 232) = FileObject;
      if ( v2 || gRemoteSessionUseWddm )
        *(_DWORD *)(v21 + 260) = 0;
      v22 = 0;
      if ( !v2 && !gRemoteSessionUseWddm )
      {
        *(_QWORD *)(v21 + 248) = 0xFFFFFFFFLL;
        *(_DWORD *)(v21 + 256) = gcNextGlobalDeviceNumber;
        *(_QWORD *)(v21 + 240) = 0LL;
        goto LABEL_45;
      }
      v80 = 0LL;
      *((_QWORD *)&InputBuffer + 1) = VideoPortCallout;
      *(_QWORD *)&InputBuffer = v21;
      v79 = 0LL;
      DeviceObjectPointer = GreDeviceIoControlImpl(
                              *(PDEVICE_OBJECT *)(v21 + 136),
                              0x23201Fu,
                              &InputBuffer,
                              0x28u,
                              &InputBuffer,
                              0x28u,
                              &v71,
                              1u,
                              1);
      if ( DeviceObjectPointer < 0 )
      {
        v60 = WdLogNewEntry5_WdTrace(v24, v23);
        *(_QWORD *)(v60 + 24) = DeviceObjectPointer;
      }
      else
      {
        if ( (_DWORD)v79 )
          *(_DWORD *)(v21 + 160) |= 0x40000000u;
        if ( (v80 & 0xC0000001) == 0 )
        {
          if ( (v80 & 0x20000000) != 0 )
            *(_DWORD *)(v21 + 160) |= 0x100000u;
          v25 = *(struct _DEVICE_OBJECT **)(v21 + 136);
          *(_QWORD *)(v21 + 144) = *((_QWORD *)&v79 + 1);
          *(_DWORD *)(v21 + 256) = 0;
          v81 = 0LL;
          v82 = 0LL;
          DeviceObjectPointer = GreDeviceIoControlImpl(v25, 0x232033u, 0LL, 0, &v81, 0x20u, &v71, 1u, 1);
          if ( DeviceObjectPointer < 0 )
          {
            if ( v2 )
              goto LABEL_45;
          }
          else
          {
            if ( (_DWORD)v81 != 2 )
            {
              v61 = WdLogNewEntry5_WdAssertion(v27, v26);
              WdLogEvent5_WdAssertion(v61);
            }
            if ( gRemoteTerminalLuid == *((_QWORD *)&v82 + 1) )
            {
              v28 = *((_QWORD *)&v81 + 1);
              if ( *((_QWORD *)&v81 + 1) )
              {
                *(_DWORD *)(v21 + 160) |= 0x800000u;
                *(_QWORD *)(v21 + 240) = v28;
                *(_DWORD *)(v21 + 256) = DWORD1(v81);
                *(_QWORD *)(v21 + 248) = v82;
LABEL_45:
                DeviceObjectPointer = DrvForceChildDeviceReenumeration(DeviceObject, (struct _DEVICE_RELATIONS **)&P);
                if ( DeviceObjectPointer < 0 )
                {
                  if ( (*(_DWORD *)(v21 + 160) & 0x20000000) != 0 )
                  {
                    v62 = *(struct _DEVICE_OBJECT **)(v21 + 144);
                    if ( v62 )
                    {
                      DeviceObjectPointer = IoOpenDeviceRegistryKey(v62, 2u, 0x2000000u, &DeviceRegKey);
                      if ( DeviceObjectPointer >= 0 )
                      {
                        DrvGetDeviceConfigurationInformation((PVOID)v21, (WCHAR *)DeviceRegKey, 1);
                        ZwClose(DeviceRegKey);
                      }
                    }
                  }
                }
                else
                {
                  v29 = (struct _DEVICE_OBJECT *)*((_QWORD *)P + 1);
                  ExFreePoolWithTag(P, 0);
                  DeviceObjectPointer = IoOpenDeviceRegistryKey(v29, 2u, 0x2000000u, &DeviceRegKey);
                  if ( DeviceObjectPointer >= 0 )
                  {
                    v73 = 0LL;
                    LODWORD(v30) = 0;
                    if ( (int)GreDeviceIoControlImpl(DeviceObject, 0x23201Bu, 0LL, 0, &v73, 8u, &v71, 1u, 1) >= 0 )
                    {
                      if ( v73 )
                      {
                        v22 = 1;
                        if ( (*(_DWORD *)v73 & 0x20000000) != 0 )
                        {
                          do
                            v30 = (unsigned int)(v30 + 1);
                          while ( (*((_DWORD *)v73 + 5 * v30) & 0x20000000) != 0 );
                        }
                      }
                    }
                    DrvGetDeviceConfigurationInformation((PVOID)v21, (WCHAR *)DeviceRegKey, 1);
                    if ( v22 )
                    {
                      if ( (_DWORD)v30 )
                      {
                        *(_DWORD *)(v21 + 216) = v30;
                        *(_QWORD *)(v21 + 224) = PALLOCMEM2((unsigned int)(20 * v30));
                        v43 = (unsigned int)v30;
                        v44 = 0LL;
                        do
                        {
                          *(_DWORD *)(v44 + *(_QWORD *)(v21 + 224)) = 0;
                          v45 = v73;
                          if ( (*(_DWORD *)((_BYTE *)v73 + v44) & 1) != 0 )
                          {
                            *(_DWORD *)(v44 + *(_QWORD *)(v21 + 224)) |= 1u;
                            v45 = v73;
                          }
                          if ( (*(_DWORD *)((_BYTE *)v45 + v44) & 2) == 0 )
                          {
                            *(_DWORD *)(v44 + *(_QWORD *)(v21 + 224)) |= 2u;
                            v45 = v73;
                          }
                          if ( *(int *)((char *)v45 + v44) >= 0 )
                          {
                            *(_DWORD *)(v44 + *(_QWORD *)(v21 + 224)) |= 0x80000000;
                            v45 = v73;
                          }
                          if ( (*(_DWORD *)((_BYTE *)v45 + v44) & 0x40000000) == 0 )
                          {
                            *(_DWORD *)(v44 + *(_QWORD *)(v21 + 224)) |= 0x40000000u;
                            v45 = v73;
                          }
                          *(_DWORD *)(v44 + *(_QWORD *)(v21 + 224) + 4) = *(_DWORD *)((char *)v45 + v44 + 4);
                          *(_QWORD *)(v44 + *(_QWORD *)(v21 + 224) + 8) = *(_QWORD *)((char *)v73 + v44 + 8);
                          *(_BYTE *)(v44 + *(_QWORD *)(v21 + 224) + 16) = *((_BYTE *)v73 + v44 + 16);
                          v44 += 20LL;
                          --v43;
                        }
                        while ( v43 );
                      }
                      ExFreePoolWithTag(v73, 0);
                    }
                    ZwClose(DeviceRegKey);
                  }
                  ObfDereferenceObject(v29);
                }
                swprintf_s((wchar_t *)v21, 0x20uLL, (const wchar_t *)&QueryTable);
                ++gcNextGlobalDeviceNumber;
                if ( DeviceObjectPointer >= 0
                  || (v48 = (void *)DrvGetRegistryHandleFromDeviceMap(v21, 0LL, 0LL, 0LL, 0, &DeviceObjectPointer, v66),
                      DeviceRegKey = v48,
                      DeviceObjectPointer >= 0)
                  && (DrvGetDeviceConfigurationInformation((PVOID)v21, (WCHAR *)v48, 0),
                      ZwClose(DeviceRegKey),
                      DeviceObjectPointer >= 0) )
                {
                  if ( !*(_QWORD *)(v21 + 208) )
                  {
                    v49 = PALLOCMEM2(0x20uLL);
                    *(_QWORD *)(v21 + 208) = v49;
                    if ( v49 )
                    {
                      RegistryHandleFromDeviceMap = (void *)DrvGetRegistryHandleFromDeviceMap(
                                                              v21,
                                                              0LL,
                                                              0LL,
                                                              v49,
                                                              16,
                                                              &DeviceObjectPointer,
                                                              v66);
                      DeviceRegKey = RegistryHandleFromDeviceMap;
                      if ( RegistryHandleFromDeviceMap )
                        ZwClose(RegistryHandleFromDeviceMap);
                    }
                    else
                    {
                      DeviceObjectPointer = -1073741670;
                    }
                  }
                }
                v31 = (wchar_t *)(v21 + 64);
                if ( (*(_DWORD *)(v21 + 160) & 8) != 0 )
                {
                  ++gcNextGlobalVirtualOutputNumber;
                  swprintf_s(v31, 0x20uLL, L"\\\\.\\DISPLAYV%d");
                }
                else
                {
                  ++gcNextGlobalPhysicalOutputNumber;
                  swprintf_s(v31, 0x20uLL, L"\\\\.\\DISPLAY%d");
                }
                PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v21);
                v33 = *(_DWORD *)(v21 + 160);
                if ( PruneFlag )
                  v34 = v33 & 0xFFF7FFFF;
                else
                  v34 = v33 | 0x80000;
                *(_DWORD *)(v21 + 160) = v34;
                if ( (unsigned int)bSetDeviceSessionUsage(v21, 1LL) )
                {
                  if ( v2 || gRemoteSessionUseWddm )
                    goto LABEL_63;
                  goto LABEL_129;
                }
                if ( !v2 && !gRemoteSessionUseWddm )
                {
LABEL_129:
                  *(_QWORD *)(v21 + 280) = 0LL;
                  v51 = (__int64 *)(v21 + 296);
                  if ( dword_1C02512E0 )
                    v52 = qword_1C02512E4;
                  else
                    v52 = 0LL;
                  *v51 = v52;
                  *(_QWORD *)(v21 + 304) = 0LL;
                  v69[0] = 0;
                  if ( (int)((__int64 (__fastcall *)(__int64, __int64 *, __int64, __int64, _BYTE *))qword_1C0250A18)(
                              v21 + 280,
                              v51,
                              v21 + 304,
                              v21 + 288,
                              v69) >= 0 )
                  {
                    v53 = *(_DWORD *)(v21 + 164);
                    if ( v69[0] )
                      v54 = v53 | 4;
                    else
                      v54 = v53 & 0xFFFFFFFB;
                    *(_DWORD *)(v21 + 164) = v54;
                    DrvUpdateRemoteAdapterInfo((struct tagGRAPHICS_DEVICE *)v21);
                  }
                  if ( DeviceObjectPointer < 0 && !gRemoteSessionUseWddm )
                  {
                    DrvCleanupOneGraphicsDevice(v21);
                    --gcNextGlobalPhysicalOutputNumber;
                    v3 = 0;
                    v5 = v67;
                    goto LABEL_68;
                  }
LABEL_63:
                  if ( gpGraphicsDeviceList )
                    *((_QWORD *)gpGraphicsDeviceListLast + 16) = v21;
                  else
                    gpGraphicsDeviceList = (wchar_t *)v21;
                  v35 = (*(_DWORD *)(v21 + 160) & 0x800000) == 0;
                  gpGraphicsDeviceListLast = (struct tagGRAPHICS_DEVICE *)v21;
                  if ( !v35 )
                    DrvAddAdapterLuid(*(struct _LUID *)(v21 + 248));
                  v5 = 1;
                  v67 = 1;
                  goto LABEL_68;
                }
                DrvCleanupOneGraphicsDevice(v21);
LABEL_75:
                v5 = v67;
LABEL_68:
                LODWORD(v1) = v70;
                continue;
              }
            }
          }
LABEL_159:
          DrvCleanupOneGraphicsDevice(v21);
          ++gcNextGlobalDeviceNumber;
          goto LABEL_75;
        }
        DeviceObjectPointer = -1073741637;
        v60 = WdLogNewEntry5_WdTrace(v24, v23);
        *(_QWORD *)(v60 + 24) = (unsigned int)v80;
        *(_QWORD *)(v60 + 32) = DeviceObjectPointer;
      }
      WdLogEvent5_WdTrace(v60);
      goto LABEL_159;
    }
    break;
  }
  if ( v2 || gRemoteSessionUseWddm || gRemoteContext != 1 )
  {
    v38 = WdLogNewEntry5_WdTrace(v20, v19);
    *(_QWORD *)(v38 + 24) = DeviceObjectPointer;
    WdLogEvent5_WdTrace(v38);
    ++gcNextGlobalDeviceNumber;
    goto LABEL_75;
  }
  FileObject = ::FileObject;
  if ( ::FileObject )
  {
    RelatedDeviceObject = IoGetRelatedDeviceObject(::FileObject);
    DeviceObject = RelatedDeviceObject;
    if ( FileObject )
    {
      if ( RelatedDeviceObject )
      {
        DeviceObjectPointer = 0;
        FileObject = 0LL;
        goto LABEL_27;
      }
    }
  }
  v5 = v67;
  DeviceObjectPointer = -1073741772;
LABEL_8:
  if ( !v2 && !gRemoteSessionUseWddm )
  {
    v39 = gpGraphicsDeviceList;
    v40 = 0;
    while ( v39 )
    {
      v41 = *((_DWORD *)v39 + 40);
      if ( (v41 & 0x4000000) != 0 )
      {
        v42 = v41 & 0xFFFFFFFB;
        *((_DWORD *)v39 + 40) = v42;
        *((_DWORD *)v39 + 65) = v40 < gRemoteContext;
        if ( v40 == dword_1C02512A4 )
          *((_DWORD *)v39 + 40) = v42 | 4;
        ++v40;
      }
      v39 = (wchar_t *)*((_QWORD *)v39 + 16);
    }
  }
  DrvSetDisconnectedGraphicsDevice(v2);
  v11 = WdLogNewEntry5_WdTrace(v10, v9);
  WdLogEvent5_WdTrace(v11);
  if ( v5 )
    DrvSortGraphicsDeviceList();
  if ( v2 )
  {
    gcLocalNextGlobalDeviceNumber = gcNextGlobalDeviceNumber;
    gpLocalGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    gpLocalGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcLocalNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcLocalNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
  }
  else
  {
    v12 = gpGraphicsDeviceList;
    v36 = 0;
    gcRemoteNextGlobalDeviceNumber = gcNextGlobalDeviceNumber;
    v37 = 0;
    gpRemoteGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcRemoteNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcRemoteNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
    gpRemoteGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    while ( v12 )
    {
      if ( (*((_DWORD *)v12 + 40) & 0x4000000) != 0 )
      {
        i = *((unsigned int *)v12 + 64);
        ++v36;
        if ( (unsigned int)i > 0x10 || ((1 << i) & v37) != 0 )
          goto LABEL_176;
        v37 |= 1 << i;
      }
      v12 = (wchar_t *)*((_QWORD *)v12 + 16);
    }
    i = v36;
    if ( v37 == (1 << v36) - 1 )
      goto LABEL_13;
LABEL_176:
    v64 = WdLogNewEntry5_WdAssertion(i, v12);
    WdLogEvent5_WdAssertion(v64);
  }
LABEL_13:
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    DrvAddMirrorDriversToRemoteList();
    if ( !gbVideoInitialized )
    {
      v46 = WdLogNewEntry5_WdEvent();
      WdLogEvent5_WdEvent(v46);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
      {
        for ( i = (unsigned __int64)gpGraphicsDeviceList; i; i = *(_QWORD *)(i + 128) )
        {
          if ( (*(_DWORD *)(i + 160) & 8) != 0 )
            *(_DWORD *)(i + 260) = 0;
        }
      }
    }
  }
  v14 = WdLogNewEntry5_WdTrace(i, v12);
  *(_QWORD *)(v14 + 24) = v3;
  WdLogEvent5_WdTrace(v14);
  return (unsigned int)v3;
}
