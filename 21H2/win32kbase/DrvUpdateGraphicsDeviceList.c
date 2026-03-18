/*
 * XREFs of DrvUpdateGraphicsDeviceList @ 0x1C006ADB0
 * Callers:
 *     DrvInitConsole @ 0x1C0068750 (DrvInitConsole.c)
 *     UpdateGraphicsDeviceList @ 0x1C006A194 (UpdateGraphicsDeviceList.c)
 *     DrvSetGraphicsDevices @ 0x1C00C53C0 (DrvSetGraphicsDevices.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0146B18 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014790C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?DrvSortGraphicsDeviceList@@YAXXZ @ 0x1C0069B28 (-DrvSortGraphicsDeviceList@@YAXXZ.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C0069DB0 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C006A51C (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C006A5AC (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C006A740 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C006AC74 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     bSetDeviceSessionUsage @ 0x1C006ACE0 (bSetDeviceSessionUsage.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C006BAAC (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C006CFA0 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     UserIsWddmConnectedSession @ 0x1C0071CE0 (UserIsWddmConnectedSession.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0072BC8 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0072CC4 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00D1F30 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00D4218 (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     wcsncmp @ 0x1C00D6268 (wcsncmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall DrvUpdateGraphicsDeviceList(int a1)
{
  int v1; // esi
  BOOL v2; // r15d
  _BOOL8 v3; // r14
  char v4; // di
  unsigned int v5; // edi
  int v6; // eax
  struct tagGRAPHICS_DEVICE *v7; // rsi
  wchar_t *v8; // rdi
  NTSTATUS DeviceObjectPointer; // eax
  PVOID v10; // rdi
  __int64 Pool2; // rbx
  int v12; // edi
  int v13; // eax
  struct _DEVICE_OBJECT *v14; // rcx
  __int64 v15; // rax
  int v16; // r12d
  struct _DEVICE_OBJECT *v17; // r13
  __int64 v18; // r15
  PVOID v19; // rsi
  unsigned __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // r9
  __int64 v23; // r8
  PVOID v24; // rdx
  wchar_t *v25; // rcx
  int PruneFlag; // eax
  int v27; // ecx
  unsigned int v28; // ecx
  bool v29; // zf
  int v30; // r15d
  unsigned int v31; // edi
  wchar_t *v33; // rcx
  unsigned int v34; // r8d
  int v35; // edx
  unsigned int v36; // edx
  wchar_t *v37; // rdx
  char v38; // r9
  int v39; // r8d
  wchar_t *i; // rcx
  const wchar_t *v41; // r9
  void *RegistryHandleFromDeviceMap; // rax
  __int64 v43; // rax
  void *v44; // rax
  __int64 *v45; // rdx
  __int64 v46; // rax
  int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // ecx
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  int v54; // eax
  int updated; // eax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  char v59; // r14
  struct _DEVICE_OBJECT *v60; // rcx
  PVOID Environment; // [rsp+28h] [rbp-E0h]
  char v62; // [rsp+58h] [rbp-B0h]
  int v64; // [rsp+60h] [rbp-A8h] BYREF
  NTSTATUS v65; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v66; // [rsp+68h] [rbp-A0h] BYREF
  PVOID v67; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v68[2]; // [rsp+78h] [rbp-90h] BYREF
  void *DeviceRegKey; // [rsp+80h] [rbp-88h] BYREF
  int v70; // [rsp+88h] [rbp-80h]
  PFILE_OBJECT FileObject; // [rsp+90h] [rbp-78h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+98h] [rbp-70h] BYREF
  _BOOL8 v73; // [rsp+A0h] [rbp-68h]
  int v74; // [rsp+A8h] [rbp-60h]
  PVOID P; // [rsp+B0h] [rbp-58h] BYREF
  __int128 InputBuffer; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v77; // [rsp+C8h] [rbp-40h]
  __int64 v78; // [rsp+D8h] [rbp-30h]
  __int128 v79; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v80; // [rsp+F0h] [rbp-18h]
  struct _UNICODE_STRING DestinationString; // [rsp+100h] [rbp-8h] BYREF
  PVOID BackTrace[20]; // [rsp+118h] [rbp+10h] BYREF
  PVOID v83[20]; // [rsp+1B8h] [rbp+B0h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+258h] [rbp+150h] BYREF
  __int64 v85; // [rsp+290h] [rbp+188h]
  int v86; // [rsp+298h] [rbp+190h]
  __int128 v87; // [rsp+2A0h] [rbp+198h]
  __int128 v88; // [rsp+2B0h] [rbp+1A8h]
  __int64 v89; // [rsp+2C0h] [rbp+1B8h]

  v1 = a1;
  v2 = gProtocolType == 0;
  LODWORD(v66) = 0;
  DeviceObject = 0LL;
  v78 = 0LL;
  FileObject = 0LL;
  v74 = v2;
  P = 0LL;
  DeviceRegKey = 0LL;
  InputBuffer = 0LL;
  v70 = 1;
  v77 = 0LL;
  v3 = gProtocolType == 0;
  v73 = v3;
  WdLogSingleEntry2(4LL, a1, v3);
  v62 = 0;
  v4 = 0;
  if ( v2 )
  {
    gcNextGlobalDeviceNumber = gcLocalNextGlobalDeviceNumber;
    gpGraphicsDeviceList = (wchar_t *)gpLocalGraphicsDeviceList;
    gpGraphicsDeviceListLast = gpLocalGraphicsDeviceListLast;
    gcNextGlobalPhysicalOutputNumber = gcLocalNextGlobalPhysicalOutputNumber;
    gcNextGlobalVirtualOutputNumber = gcLocalNextGlobalVirtualOutputNumber;
    QueryTable.Name = L"MaxObjectNumber";
    QueryTable.EntryContext = &v66;
    QueryTable.DefaultData = v68;
    v89 = 0LL;
    v68[0] = 0;
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Flags = 288;
    QueryTable.DefaultType = 67108868;
    QueryTable.DefaultLength = 4;
    v85 = 0LL;
    v86 = 0;
    v87 = 0LL;
    v88 = 0LL;
    RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
    goto LABEL_3;
  }
  gcNextGlobalDeviceNumber = gcRemoteNextGlobalDeviceNumber;
  gpGraphicsDeviceList = (wchar_t *)gpRemoteGraphicsDeviceList;
  gpGraphicsDeviceListLast = gpRemoteGraphicsDeviceListLast;
  gcNextGlobalPhysicalOutputNumber = gcRemoteNextGlobalPhysicalOutputNumber;
  gcNextGlobalVirtualOutputNumber = gcRemoteNextGlobalVirtualOutputNumber;
  if ( !(unsigned int)((__int64 (*)(void))UserIsWddmConnectedSession)() )
  {
    if ( gProtocolType != -1 )
      LODWORD(v66) = gRemoteContext - 1;
    if ( !dword_1C0297080 )
      goto LABEL_3;
    updated = DrvUpdateRemoteAdapterInfo(0LL);
    if ( updated >= 0 )
      goto LABEL_3;
    return 0LL;
  }
  v65 = 0;
  v50 = ((__int64 (__fastcall *)(NTSTATUS *, __int64 *))qword_1C0296960)(&v65, &v66);
  if ( v50 < 0 )
  {
    WdLogSingleEntry1(2LL, v50);
    LODWORD(v66) = gcNextGlobalDeviceNumber;
  }
  v54 = gcNextGlobalDeviceNumber;
  if ( v65 > (unsigned int)gcNextGlobalDeviceNumber )
  {
    v54 = v65;
    gcNextGlobalDeviceNumber = v65;
  }
  if ( (unsigned int)v66 >= v54 + 16 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v52, v51, v53);
  while ( 1 )
  {
LABEL_3:
    if ( gProtocolType == -1 )
      goto LABEL_76;
    v5 = gcNextGlobalDeviceNumber;
    if ( gcNextGlobalDeviceNumber > (unsigned int)v66 )
      goto LABEL_75;
    if ( !v1 )
    {
      WdLogSingleEntry0(5LL);
      return 0LL;
    }
    if ( (unsigned int)UserIsWddmConnectedSession(0xFFFFLL) )
    {
      if ( v3 )
      {
        v6 = StringCchPrintfW((unsigned __int16 *)&QueryTable, 50LL, L"\\Device\\Video%d", v5);
        goto LABEL_9;
      }
      v41 = L"RemoteVideo";
    }
    else
    {
      v41 = (const wchar_t *)qword_1C0297078;
    }
    LODWORD(Environment) = v5;
    v6 = StringCchPrintfW((unsigned __int16 *)&QueryTable, 50LL, L"\\Device\\%s%d", v41, Environment);
LABEL_9:
    if ( v6 < 0 )
      return 0LL;
    v7 = gpRemoteGraphicsDeviceListLast;
    v8 = gpGraphicsDeviceList;
    if ( v3 )
      v7 = gpLocalGraphicsDeviceListLast;
    while ( v8 )
    {
      if ( !wcsncmp((const wchar_t *)&QueryTable, v8, 0x40uLL) )
        goto LABEL_85;
      if ( v8 == (wchar_t *)v7 )
        break;
      v8 = (wchar_t *)*((_QWORD *)v8 + 16);
    }
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)&QueryTable);
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
    if ( DeviceObjectPointer < 0 )
      break;
LABEL_17:
    v10 = gpLeakTrackingAllocator;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x76646747) != 0x76646747
      || (v57 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_18:
      Pool2 = ExAllocatePool2(260LL, 312LL);
LABEL_19:
      v4 = v62;
      v1 = a1;
      if ( !Pool2 )
        continue;
      goto LABEL_20;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v57) != 1986291527 )
    {
      if ( ++v57 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_18;
    }
    Pool2 = ExAllocatePool2(260LL, 328LL);
    if ( !Pool2 )
      goto LABEL_86;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                               v10,
                               Pool2,
                               BackTrace) )
      {
LABEL_162:
        ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_86:
        v4 = v62;
LABEL_74:
        v1 = a1;
        continue;
      }
      Pool2 += 16LL;
      goto LABEL_19;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                             v10,
                             Pool2,
                             BackTrace) )
      goto LABEL_162;
LABEL_20:
    *(_DWORD *)(Pool2 + 216) = 0;
    *(_QWORD *)(Pool2 + 224) = 0LL;
    *(_QWORD *)(Pool2 + 136) = DeviceObject;
    *(_WORD *)(Pool2 + 220) = gProtocolType;
    *(_QWORD *)(Pool2 + 272) = 0LL;
    if ( !v3 )
      *(_DWORD *)(Pool2 + 160) |= 0x4000000u;
    *(_QWORD *)(Pool2 + 232) = FileObject;
    if ( v3 || gRemoteSessionUseWddm )
      *(_DWORD *)(Pool2 + 260) = 0;
    v12 = 0;
    if ( !v3 && !gRemoteSessionUseWddm )
    {
      *(_QWORD *)(Pool2 + 248) = 0xFFFFFFFFLL;
      *(_DWORD *)(Pool2 + 256) = gcNextGlobalDeviceNumber;
      *(_QWORD *)(Pool2 + 240) = 0LL;
      goto LABEL_37;
    }
    *((_QWORD *)&InputBuffer + 1) = VideoPortCallout;
    v78 = 0LL;
    v77 = 0LL;
    *(_QWORD *)&InputBuffer = Pool2;
    v13 = GreDeviceIoControlImpl(
            *(PDEVICE_OBJECT *)(Pool2 + 136),
            0x23201Fu,
            &InputBuffer,
            0x28u,
            &InputBuffer,
            0x28u,
            v68,
            1u,
            1);
    if ( v13 < 0 )
    {
      WdLogSingleEntry1(5LL, v13);
      goto LABEL_169;
    }
    if ( (_DWORD)v77 )
      *(_DWORD *)(Pool2 + 160) |= 0x40000000u;
    if ( (v78 & 0xC0000001) != 0 )
    {
      WdLogSingleEntry2(5LL, (unsigned int)v78, -1073741637LL);
LABEL_169:
      DrvCleanupOneGraphicsDevice((_QWORD *)Pool2);
LABEL_85:
      ++gcNextGlobalDeviceNumber;
      goto LABEL_86;
    }
    if ( (v78 & 0x20000000) != 0 )
      *(_DWORD *)(Pool2 + 160) |= 0x100000u;
    v14 = *(struct _DEVICE_OBJECT **)(Pool2 + 136);
    *(_QWORD *)(Pool2 + 144) = *((_QWORD *)&v77 + 1);
    *(_DWORD *)(Pool2 + 256) = 0;
    v79 = 0LL;
    v80 = 0LL;
    if ( (int)GreDeviceIoControlImpl(v14, 0x232033u, 0LL, 0, &v79, 0x20u, v68, 1u, 1) < 0 )
    {
      if ( !v3 )
        goto LABEL_169;
    }
    else
    {
      if ( (_DWORD)v79 != 2 )
        WdLogSingleEntry0(1LL);
      if ( gRemoteTerminalLuid != *((_QWORD *)&v80 + 1) )
        goto LABEL_169;
      v15 = *((_QWORD *)&v79 + 1);
      if ( !*((_QWORD *)&v79 + 1) )
        goto LABEL_169;
      *(_DWORD *)(Pool2 + 160) |= 0x800000u;
      *(_QWORD *)(Pool2 + 240) = v15;
      *(_DWORD *)(Pool2 + 256) = DWORD1(v79);
      *(_QWORD *)(Pool2 + 248) = v80;
    }
LABEL_37:
    v65 = DrvForceChildDeviceReenumeration(DeviceObject, (struct _DEVICE_RELATIONS **)&P);
    v16 = v65;
    if ( v65 >= 0 )
    {
      v17 = (struct _DEVICE_OBJECT *)*((_QWORD *)P + 1);
      ExFreePoolWithTag(P, 0);
      v65 = IoOpenDeviceRegistryKey(v17, 2u, 0x2000000u, &DeviceRegKey);
      v16 = v65;
      if ( v65 < 0 )
      {
LABEL_60:
        ObfDereferenceObject(v17);
        goto LABEL_61;
      }
      v67 = 0LL;
      LODWORD(v18) = 0;
      if ( (int)GreDeviceIoControlImpl(DeviceObject, 0x23201Bu, 0LL, 0, &v67, 8u, v68, 1u, 1) >= 0 )
      {
        if ( v67 )
        {
          v12 = 1;
          if ( (*(_DWORD *)v67 & 0x20000000) != 0 )
          {
            do
              v18 = (unsigned int)(v18 + 1);
            while ( (*((_DWORD *)v67 + 5 * v18) & 0x20000000) != 0 );
          }
        }
      }
      DrvGetDeviceConfigurationInformation((PVOID)Pool2, (PCWSTR)DeviceRegKey, 1);
      if ( !v12 )
      {
LABEL_59:
        ZwClose(DeviceRegKey);
        goto LABEL_60;
      }
      if ( !(_DWORD)v18 )
      {
LABEL_58:
        ExFreePoolWithTag(v67, 0);
        goto LABEL_59;
      }
      *(_DWORD *)(Pool2 + 216) = v18;
      if ( 20 * (_DWORD)v18 )
      {
        v19 = gpLeakTrackingAllocator;
        v20 = (unsigned int)(20 * v18);
        if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x76646747) != 0x76646747
          || (v58 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
        {
LABEL_47:
          v21 = ExAllocatePool2(260LL, v20);
          goto LABEL_48;
        }
        while ( *((_DWORD *)gpLeakTrackingAllocator + v58) != 1986291527 )
        {
          if ( ++v58 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_47;
        }
        v59 = 0;
        if ( v20 < 0x1000 || ((20 * (_WORD)v18) & 0xFFF) != 0 )
        {
          v59 = 1;
          v20 += 16LL;
        }
        v21 = ExAllocatePool2(260LL, v20);
        if ( v21 )
        {
          memset(v83, 0, sizeof(v83));
          RtlCaptureStackBackTrace(0, 0x14u, v83, 0LL);
          if ( v59 && (unsigned __int64)(v21 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v19,
                                    v21,
                                    v83) )
            {
              v21 += 16LL;
LABEL_182:
              v3 = v73;
              goto LABEL_48;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v19,
                                       v21,
                                       v83) )
          {
            goto LABEL_182;
          }
          ExFreePoolWithTag((PVOID)v21, 0);
        }
        v3 = v73;
      }
      v21 = 0LL;
LABEL_48:
      *(_QWORD *)(Pool2 + 224) = v21;
      v22 = (unsigned int)v18;
      v23 = 0LL;
      do
      {
        *(_DWORD *)(v23 + *(_QWORD *)(Pool2 + 224)) = 0;
        v24 = v67;
        if ( (*(_DWORD *)((_BYTE *)v67 + v23) & 1) != 0 )
        {
          *(_DWORD *)(v23 + *(_QWORD *)(Pool2 + 224)) |= 1u;
          v24 = v67;
        }
        if ( (*(_DWORD *)((_BYTE *)v24 + v23) & 2) == 0 )
        {
          *(_DWORD *)(v23 + *(_QWORD *)(Pool2 + 224)) |= 2u;
          v24 = v67;
        }
        if ( *(int *)((char *)v24 + v23) >= 0 )
        {
          *(_DWORD *)(v23 + *(_QWORD *)(Pool2 + 224)) |= 0x80000000;
          v24 = v67;
        }
        if ( (*(_DWORD *)((_BYTE *)v24 + v23) & 0x40000000) == 0 )
        {
          *(_DWORD *)(v23 + *(_QWORD *)(Pool2 + 224)) |= 0x40000000u;
          v24 = v67;
        }
        *(_DWORD *)(v23 + *(_QWORD *)(Pool2 + 224) + 4) = *(_DWORD *)((char *)v24 + v23 + 4);
        *(_QWORD *)(v23 + *(_QWORD *)(Pool2 + 224) + 8) = *(_QWORD *)((char *)v67 + v23 + 8);
        *(_BYTE *)(v23 + *(_QWORD *)(Pool2 + 224) + 16) = *((_BYTE *)v67 + v23 + 16);
        v23 += 20LL;
        --v22;
      }
      while ( v22 );
      goto LABEL_58;
    }
    if ( (*(_DWORD *)(Pool2 + 160) & 0x20000000) != 0 )
    {
      v60 = *(struct _DEVICE_OBJECT **)(Pool2 + 144);
      if ( v60 )
      {
        v65 = IoOpenDeviceRegistryKey(v60, 2u, 0x2000000u, &DeviceRegKey);
        v16 = v65;
        if ( v65 >= 0 )
        {
          DrvGetDeviceConfigurationInformation((PVOID)Pool2, (PCWSTR)DeviceRegKey, 1);
          ZwClose(DeviceRegKey);
        }
      }
    }
LABEL_61:
    swprintf_s((wchar_t *)Pool2, 0x20uLL, (const wchar_t *)&QueryTable);
    ++gcNextGlobalDeviceNumber;
    if ( v16 < 0 )
    {
      RegistryHandleFromDeviceMap = (void *)DrvGetRegistryHandleFromDeviceMap(Pool2, 0LL, 0LL, 0LL, 0, &v65);
      v16 = v65;
      DeviceRegKey = RegistryHandleFromDeviceMap;
      if ( v65 < 0 )
        goto LABEL_63;
      DrvGetDeviceConfigurationInformation((PVOID)Pool2, (PCWSTR)RegistryHandleFromDeviceMap, 0);
      ZwClose(DeviceRegKey);
    }
    if ( !*(_QWORD *)(Pool2 + 208) )
    {
      v43 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
              (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
              260LL,
              0x20uLL,
              1936876615);
      *(_QWORD *)(Pool2 + 208) = v43;
      if ( v43 )
      {
        v44 = (void *)DrvGetRegistryHandleFromDeviceMap(Pool2, 0LL, 0LL, v43, 16, &v65);
        DeviceRegKey = v44;
        if ( v44 )
          ZwClose(v44);
        v16 = v65;
      }
      else
      {
        v16 = -1073741670;
      }
    }
LABEL_63:
    v25 = (wchar_t *)(Pool2 + 64);
    if ( (*(_DWORD *)(Pool2 + 160) & 8) != 0 )
    {
      ++gcNextGlobalVirtualOutputNumber;
      swprintf_s(v25, 0x20uLL, L"\\\\.\\DISPLAYV%d");
    }
    else
    {
      ++gcNextGlobalPhysicalOutputNumber;
      swprintf_s(v25, 0x20uLL, L"\\\\.\\DISPLAY%d");
    }
    PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)Pool2);
    v27 = *(_DWORD *)(Pool2 + 160);
    if ( PruneFlag )
      v28 = v27 & 0xFFF7FFFF;
    else
      v28 = v27 | 0x80000;
    *(_DWORD *)(Pool2 + 160) = v28;
    if ( (unsigned int)bSetDeviceSessionUsage(Pool2, 1) )
    {
      if ( !v3 && !gRemoteSessionUseWddm )
      {
LABEL_128:
        *(_QWORD *)(Pool2 + 280) = 0LL;
        v45 = (__int64 *)(Pool2 + 296);
        if ( dword_1C0297080 )
          v46 = qword_1C0297084;
        else
          v46 = 0LL;
        *v45 = v46;
        *(_QWORD *)(Pool2 + 304) = 0LL;
        LOBYTE(v64) = 0;
        if ( (int)((__int64 (__fastcall *)(__int64, __int64 *, __int64, __int64, int *))qword_1C02967E8)(
                    Pool2 + 280,
                    v45,
                    Pool2 + 304,
                    Pool2 + 288,
                    &v64) >= 0 )
        {
          v47 = *(_DWORD *)(Pool2 + 164);
          if ( (_BYTE)v64 )
            v48 = v47 | 4;
          else
            v48 = v47 & 0xFFFFFFFB;
          *(_DWORD *)(Pool2 + 164) = v48;
          DrvUpdateRemoteAdapterInfo((struct tagGRAPHICS_DEVICE *)Pool2);
        }
        if ( !gRemoteSessionUseWddm && v16 < 0 )
        {
          DrvCleanupOneGraphicsDevice((_QWORD *)Pool2);
          --gcNextGlobalPhysicalOutputNumber;
          v4 = v62;
          v70 = 0;
          goto LABEL_74;
        }
      }
      if ( gpGraphicsDeviceList )
        *((_QWORD *)gpGraphicsDeviceListLast + 16) = Pool2;
      else
        gpGraphicsDeviceList = (wchar_t *)Pool2;
      v29 = (*(_DWORD *)(Pool2 + 160) & 0x800000) == 0;
      gpGraphicsDeviceListLast = (struct tagGRAPHICS_DEVICE *)Pool2;
      if ( !v29 )
        DrvAddAdapterLuid(*(struct _LUID *)(Pool2 + 248));
      v4 = 1;
      v62 = 1;
      goto LABEL_74;
    }
    if ( !v3 && !gRemoteSessionUseWddm )
      goto LABEL_128;
    DrvCleanupOneGraphicsDevice((_QWORD *)Pool2);
    v4 = v62;
    v1 = a1;
  }
  if ( v3 || gRemoteSessionUseWddm || gRemoteContext != 1 )
  {
    WdLogSingleEntry1(5LL, DeviceObjectPointer);
    goto LABEL_85;
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
        FileObject = 0LL;
        goto LABEL_17;
      }
    }
  }
LABEL_75:
  v4 = v62;
LABEL_76:
  v30 = v74;
  if ( !v74 && !gRemoteSessionUseWddm )
  {
    v33 = gpGraphicsDeviceList;
    v34 = 0;
    while ( v33 )
    {
      v35 = *((_DWORD *)v33 + 40);
      if ( (v35 & 0x4000000) != 0 )
      {
        v36 = v35 & 0xFFFFFFFB;
        *((_DWORD *)v33 + 40) = v36;
        *((_DWORD *)v33 + 65) = v34 < gRemoteContext;
        if ( v34 == dword_1C0297044 )
          *((_DWORD *)v33 + 40) = v36 | 4;
        ++v34;
      }
      v33 = (wchar_t *)*((_QWORD *)v33 + 16);
    }
  }
  DrvSetDisconnectedGraphicsDevice(v30);
  WdLogSingleEntry0(5LL);
  if ( v4 )
    DrvSortGraphicsDeviceList();
  if ( v30 )
  {
    gcLocalNextGlobalDeviceNumber = gcNextGlobalDeviceNumber;
    gpLocalGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    gpLocalGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcLocalNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcLocalNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
  }
  else
  {
    v37 = gpGraphicsDeviceList;
    v38 = 0;
    gcRemoteNextGlobalDeviceNumber = gcNextGlobalDeviceNumber;
    v39 = 0;
    gpRemoteGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcRemoteNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcRemoteNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
    gpRemoteGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    if ( gpGraphicsDeviceList )
    {
      do
      {
        if ( (*((_DWORD *)v37 + 40) & 0x4000000) != 0 )
        {
          v49 = *((_DWORD *)v37 + 64);
          ++v38;
          if ( v49 > 0x10 || ((1 << v49) & v39) != 0 )
            goto LABEL_201;
          v39 |= 1 << v49;
        }
        v37 = (wchar_t *)*((_QWORD *)v37 + 16);
      }
      while ( v37 );
      if ( v39 == (1 << v38) - 1 )
        goto LABEL_81;
LABEL_201:
      WdLogSingleEntry0(1LL);
    }
  }
LABEL_81:
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    DrvAddMirrorDriversToRemoteList();
    if ( !gbVideoInitialized )
    {
      WdLogSingleEntry0(4LL);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
      {
        for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
        {
          if ( (*((_DWORD *)i + 40) & 8) != 0 )
            *((_DWORD *)i + 65) = 0;
        }
      }
    }
  }
  v31 = v70;
  WdLogSingleEntry1(5LL, v70);
  return v31;
}
