__int64 __fastcall DpiFdoInitializeFdo(_QWORD *StartContext)
{
  __int64 v1; // rbx
  char v3; // r12
  char v4; // si
  char v5; // r15
  int v6; // eax
  int DevicePropertyString; // eax
  __int64 v8; // rdi
  int v9; // eax
  struct _DEVICE_OBJECT *v10; // rcx
  NTSTATUS v11; // eax
  __int64 v12; // rax
  NTSTATUS v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  _WORD *v16; // rsi
  int v17; // edi
  __int64 v18; // r8
  int MiniportInterface; // eax
  NTSTATUS v21; // eax
  __int64 v22; // rdi
  void *Pool2; // rax
  struct _DEVICE_OBJECT *v24; // rcx
  struct _DEVICE_OBJECT *v25; // rcx
  size_t v26; // r8
  void *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  void *v30; // rcx
  void *v31; // rcx
  void *v32; // rcx
  void *v33; // rcx
  struct SYSMM_ADAPTER *v34; // rcx
  int Data; // [rsp+48h] [rbp-C0h] BYREF
  ULONG RequiredSize; // [rsp+4Ch] [rbp-BCh] BYREF
  _QWORD Type[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+68h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+70h] [rbp-98h] BYREF
  void *ThreadHandle; // [rsp+78h] [rbp-90h] BYREF
  __int64 v41; // [rsp+88h] [rbp-80h] BYREF
  int v42; // [rsp+90h] [rbp-78h]
  const wchar_t *v43; // [rsp+98h] [rbp-70h]
  char *v44; // [rsp+A0h] [rbp-68h]
  int v45; // [rsp+A8h] [rbp-60h]
  char *v46; // [rsp+B0h] [rbp-58h]
  int v47; // [rsp+B8h] [rbp-50h]
  __int64 v48; // [rsp+C0h] [rbp-48h]
  int v49; // [rsp+C8h] [rbp-40h]
  const wchar_t *v50; // [rsp+D0h] [rbp-38h]
  unsigned int *v51; // [rsp+D8h] [rbp-30h]
  int v52; // [rsp+E0h] [rbp-28h]
  unsigned int *v53; // [rsp+E8h] [rbp-20h]
  int v54; // [rsp+F0h] [rbp-18h]
  __int64 v55; // [rsp+F8h] [rbp-10h]
  int v56; // [rsp+100h] [rbp-8h]
  const wchar_t *v57; // [rsp+108h] [rbp+0h]
  int *v58; // [rsp+110h] [rbp+8h]
  int v59; // [rsp+118h] [rbp+10h]
  int *v60; // [rsp+120h] [rbp+18h]
  int v61; // [rsp+128h] [rbp+20h]
  __int64 v62; // [rsp+130h] [rbp+28h]
  int v63; // [rsp+138h] [rbp+30h]
  const wchar_t *v64; // [rsp+140h] [rbp+38h]
  int *v65; // [rsp+148h] [rbp+40h]
  int v66; // [rsp+150h] [rbp+48h]
  int *v67; // [rsp+158h] [rbp+50h]
  int v68; // [rsp+160h] [rbp+58h]
  __int64 v69; // [rsp+168h] [rbp+60h]
  int v70; // [rsp+170h] [rbp+68h]
  const wchar_t *v71; // [rsp+178h] [rbp+70h]
  __int64 *v72; // [rsp+180h] [rbp+78h]
  int v73; // [rsp+188h] [rbp+80h]
  __int64 v74; // [rsp+190h] [rbp+88h]
  int v75; // [rsp+198h] [rbp+90h]
  __int64 v76; // [rsp+1A0h] [rbp+98h]
  int v77; // [rsp+1A8h] [rbp+A0h]
  __int128 v78; // [rsp+1B0h] [rbp+A8h]
  __int128 v79; // [rsp+1C0h] [rbp+B8h]
  __int64 v80; // [rsp+1D0h] [rbp+C8h]

  v1 = StartContext[8];
  RequiredSize = 0;
  LODWORD(Type[0]) = 0;
  ThreadHandle = 0LL;
  v3 = 0;
  *(_OWORD *)&Type[1] = 0LL;
  *(_QWORD *)(v1 + 112) = &DpiFdoDispatchInternalIoctl;
  *(_QWORD *)(v1 + 144) = DpiFdoDispatchSystemControl;
  v4 = 0;
  v5 = 0;
  *(_QWORD *)(v1 + 352) = &DpiFdoHandleQueryInterface;
  *(_QWORD *)(v1 + 344) = DpiFdoHandleQueryDeviceRelations;
  LODWORD(v38) = 0;
  v41 = 0LL;
  v43 = L"GpuVirtualizationFlags";
  v42 = 288;
  HIDWORD(Type[0]) = g_VgpuReplaceWarp != 0 ? 8 : 0;
  v44 = (char *)Type + 4;
  v45 = 67108868;
  v46 = (char *)Type + 4;
  v50 = L"DisableVaBackedVm";
  v51 = &g_VgpuDisableVaBackedVm;
  v53 = &g_VgpuDisableVaBackedVm;
  v57 = L"VirtualGpuOnly";
  v58 = &g_VirtualGpuOnly;
  v60 = &g_VirtualGpuOnly;
  v64 = L"LimitNumberOfVfs";
  v65 = &g_LimitNumberOfVfs;
  v67 = &g_LimitNumberOfVfs;
  v71 = L"DisableVersionMismatchCheck";
  v72 = &v38;
  v80 = 0LL;
  v47 = 4;
  v48 = 0LL;
  v49 = 288;
  v52 = 67108868;
  v54 = 4;
  v55 = 0LL;
  v56 = 288;
  v59 = 67108868;
  v61 = 4;
  v62 = 0LL;
  v63 = 288;
  v66 = 67108868;
  v68 = 4;
  v69 = 0LL;
  v70 = 288;
  v73 = 67108868;
  v74 = 0LL;
  v75 = 0;
  v76 = 0LL;
  v77 = 0;
  v78 = 0LL;
  v79 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v41, 0LL, 0LL);
  g_bCreateParavirtualizedGpu = BYTE4(Type[0]) & 1;
  g_VgpuReplaceWarp = (HIDWORD(Type[0]) >> 3) & 1;
  v6 = *(_DWORD *)(v1 + 504);
  g_ForceSecureVirtualMachine = (HIDWORD(Type[0]) >> 2) & 1;
  if ( v6 )
  {
    v22 = (unsigned int)(8 * v6);
    Pool2 = (void *)ExAllocatePool2(64LL, v22, 1953656900LL);
    *(_QWORD *)(v1 + 2728) = Pool2;
    if ( !Pool2 )
      goto LABEL_69;
    memset(Pool2, 0, (unsigned int)v22);
    **(_QWORD **)(v1 + 2728) = StartContext;
    *(_DWORD *)(v1 + 2736) = 1;
  }
  *(_DWORD *)(v1 + 3500) = -1;
  DevicePropertyString = DpiGetDevicePropertyString(
                           *(PDEVICE_OBJECT *)(v1 + 152),
                           DevicePropertyDeviceDescription,
                           (__int64)&RequiredSize);
  v8 = DevicePropertyString;
  if ( DevicePropertyString < 0 )
    goto LABEL_76;
  DpiGetDevicePropertyDataString(
    *(PDEVICE_OBJECT *)(v1 + 152),
    (DEVPROPKEY *)&DEVPKEY_Device_DriverVersion,
    v1 + 4840,
    (__int64)&RequiredSize);
  IoGetDevicePropertyData(
    *(PDEVICE_OBJECT *)(v1 + 152),
    &DEVPKEY_Device_DriverDate,
    0,
    0,
    8u,
    (PVOID)(v1 + 4848),
    &RequiredSize,
    (PDEVPROPTYPE)Type);
  IoGetDevicePropertyData(
    *(PDEVICE_OBJECT *)(v1 + 152),
    &DEVPKEY_Device_DriverRank,
    0,
    0,
    4u,
    (PVOID)(v1 + 4856),
    &RequiredSize,
    (PDEVPROPTYPE)Type);
  if ( !(_DWORD)v38 )
  {
    v9 = DpiFdoValidateKmdAndPnpVersionMatch(v1);
    v8 = v9;
    if ( v9 < 0 )
      goto LABEL_76;
  }
  v10 = *(struct _DEVICE_OBJECT **)(v1 + 152);
  LOBYTE(Data) = 0;
  if ( (int)DpiGetDevicePropertyDataBoolean(v10, &DEVPKEY_Device_InstallInProgress, (char *)&Data) >= 0 && (_BYTE)Data )
  {
    v24 = *(struct _DEVICE_OBJECT **)(v1 + 152);
    LOBYTE(Data) = 0;
    IoSetDevicePropertyData(v24, &DEVPKEY_Device_InstallInProgress, 0, 0, 0x11u, 1u, &Data);
  }
  if ( *(_BYTE *)(v1 + 1154) )
  {
    if ( *(_BYTE *)(v1 + 480) )
    {
      MiniportInterface = DpiQueryMiniportInterface(
                            (_DWORD)StartContext,
                            (unsigned int)&GUID_DEVINTERFACE_MSBDD_FALLBACK,
                            56,
                            1);
      LODWORD(v8) = MiniportInterface;
      if ( MiniportInterface < 0 || !*(_QWORD *)(v1 + 976) || !*(_QWORD *)(v1 + 984) || !*(_QWORD *)(v1 + 992) )
      {
        WdLogSingleEntry3(0LL, 275LL, 21LL, MiniportInterface);
        goto LABEL_42;
      }
    }
  }
  v3 = 1;
  if ( *(_BYTE *)(v1 + 1159) )
  {
    v25 = *(struct _DEVICE_OBJECT **)(v1 + 152);
    LOBYTE(Data) = 0;
    if ( IoGetDevicePropertyData(
           v25,
           &DEVPKEY_Gpu_IddVirtualMonitorDevice,
           0,
           0,
           1u,
           &Data,
           &RequiredSize,
           (PDEVPROPTYPE)Type) >= 0
      && LODWORD(Type[0]) == 17
      && RequiredSize == 1
      && (_BYTE)Data == 0xFF )
    {
      *(_BYTE *)(v1 + 1160) = 1;
    }
  }
  v11 = IoRegisterDeviceInterface(
          *(PDEVICE_OBJECT *)(v1 + 152),
          &GUID_COMPUTE_DEVICE_ARRIVAL,
          0LL,
          (PUNICODE_STRING)&Type[1]);
  v8 = v11;
  if ( v11 < 0 )
    goto LABEL_76;
  v4 = 1;
  v12 = ExAllocatePool2(64LL, WORD1(Type[1]), 1953656900LL);
  *(_QWORD *)(v1 + 2752) = v12;
  if ( !v12 )
    goto LABEL_69;
  *(_DWORD *)(v1 + 2744) = Type[1];
  RtlCopyUnicodeString((PUNICODE_STRING)(v1 + 2744), (PCUNICODE_STRING)&Type[1]);
  RtlFreeUnicodeString((PUNICODE_STRING)&Type[1]);
  if ( !*(_BYTE *)(v1 + 2698) )
  {
    v13 = IoRegisterDeviceInterface(
            *(PDEVICE_OBJECT *)(v1 + 152),
            &GUID_DISPLAY_DEVICE_ARRIVAL,
            0LL,
            (PUNICODE_STRING)&Type[1]);
    v8 = v13;
    if ( v13 >= 0 )
    {
      v14 = ExAllocatePool2(64LL, WORD1(Type[1]), 1953656900LL);
      *(_QWORD *)(v1 + 2768) = v14;
      if ( v14 )
      {
        *(_DWORD *)(v1 + 2760) = Type[1];
        RtlCopyUnicodeString((PUNICODE_STRING)(v1 + 2760), (PCUNICODE_STRING)&Type[1]);
        RtlFreeUnicodeString((PUNICODE_STRING)&Type[1]);
        goto LABEL_16;
      }
LABEL_69:
      LODWORD(v8) = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      goto LABEL_111;
    }
LABEL_76:
    WdLogSingleEntry1(2LL, v8);
    v4 = 0;
    goto LABEL_111;
  }
LABEL_16:
  *(_BYTE *)(v1 + 482) = 0;
  *(_BYTE *)(v1 + 484) = 0;
  *(_QWORD *)(v1 + 488) = 0LL;
  if ( !*(_BYTE *)(v1 + 480) )
  {
    KeInitializeEvent((PRKEVENT)(v1 + 3952), SynchronizationEvent, 0);
    *(_QWORD *)(v1 + 3992) = v1 + 3984;
    *(_QWORD *)(v1 + 3984) = v1 + 3984;
    KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 4096));
    KeInitializeEvent((PRKEVENT)(v1 + 4112), NotificationEvent, 1u);
    KeInitializeEvent((PRKEVENT)(v1 + 4136), NotificationEvent, 1u);
    *(_BYTE *)(v1 + 484) = 1;
    *(_QWORD *)(v1 + 4160) = 0LL;
    *(_DWORD *)(v1 + 4104) = 0;
    memset((void *)(v1 + 4008), 0, 0x58uLL);
    *(_DWORD *)(v1 + 4024) = 1953656900;
    *(_DWORD *)(v1 + 4028) = 11;
    *(_DWORD *)(v1 + 4048) = 64;
    KeInitializeTimer((PKTIMER)(v1 + 4176));
    KeInitializeDpc((PRKDPC)(v1 + 4240), (PKDEFERRED_ROUTINE)DpiSuspendAdapterDpc, (PVOID)v1);
    v21 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, DpiPowerArbiterThread, StartContext);
    v8 = v21;
    if ( v21 < 0 )
      goto LABEL_76;
    Object = 0LL;
    v8 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
    *(_QWORD *)(v1 + 3944) = Object;
    ZwClose(ThreadHandle);
    if ( (int)v8 < 0 )
      goto LABEL_76;
  }
  KeInitializeEvent((PRKEVENT)(v1 + 3712), NotificationEvent, 1u);
  *(_QWORD *)(v1 + 3488) = v1 + 3480;
  *(_QWORD *)(v1 + 3480) = v1 + 3480;
  ExInitializeResourceLite((PERESOURCE)(v1 + 3320));
  *(_QWORD *)(v1 + 3520) = v1 + 3512;
  *(_QWORD *)(v1 + 3512) = v1 + 3512;
  KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 3504));
  KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 3536));
  KeInitializeEvent((PRKEVENT)(v1 + 3544), NotificationEvent, 1u);
  *(_QWORD *)(v1 + 5344) = v1 + 5336;
  *(_QWORD *)(v1 + 5336) = v1 + 5336;
  KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 5352));
  IoCsqInitialize(
    (PIO_CSQ)(v1 + 5272),
    (PIO_CSQ_INSERT_IRP)DpiPendingIrpCancelQueueInsert,
    (PIO_CSQ_REMOVE_IRP)DpiPendingIrpCancelQueueRemove,
    (PIO_CSQ_PEEK_NEXT_IRP)DpiPendingIrpCancelQueuePick,
    (PIO_CSQ_ACQUIRE_LOCK)DpiPendingIrpCancelQueueAcquireLock,
    (PIO_CSQ_RELEASE_LOCK)DpiPendingIrpCancelQueueReleaseLock,
    (PIO_CSQ_COMPLETE_CANCELED_IRP)DpiPendingIrpCancelQueueComplete);
  *(_QWORD *)(v1 + 5424) = 0LL;
  *(_QWORD *)(v1 + 5432) = 0LL;
  KeInitializeEvent((PRKEVENT)(v1 + 5440), NotificationEvent, 0);
  *(_DWORD *)(v1 + 5416) = 1;
  *(_DWORD *)(v1 + 5384) = 0;
  KeInitializeMutex((PRKMUTEX)(v1 + 3424), 0);
  KeInitializeMutex((PRKMUTEX)(v1 + 3600), 0);
  *(_QWORD *)(v1 + 3672) = v1 + 3664;
  *(_QWORD *)(v1 + 3664) = v1 + 3664;
  *(_QWORD *)(v1 + 3696) = v1 + 3688;
  *(_QWORD *)(v1 + 3688) = v1 + 3688;
  *(_QWORD *)(v1 + 3592) = v1 + 3584;
  *(_QWORD *)(v1 + 3584) = v1 + 3584;
  ExInitializeResourceLite((PERESOURCE)(v1 + 3808));
  LODWORD(v8) = DpiFdoInitializeAdapterUniqueString(StartContext);
  v4 = 0;
  if ( (int)v8 < 0 )
  {
LABEL_110:
    ExDeleteResourceLite((PERESOURCE)(v1 + 3808));
    ExDeleteResourceLite((PERESOURCE)(v1 + 3320));
    goto LABEL_111;
  }
  v5 = 1;
  DpiQueryBusInterface(*(PDEVICE_OBJECT *)(v1 + 152), v1 + 2888);
  DpiQueryBusInterface(*(PDEVICE_OBJECT *)(v1 + 152), v1 + 2936);
  DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_I2C, 48, 1);
  v15 = *(_QWORD *)(v1 + 40);
  *(_DWORD *)(v1 + 3032) = 0;
  if ( !*(_BYTE *)(v15 + 133) || *(_BYTE *)(v1 + 1159) )
  {
    v16 = (_WORD *)(v1 + 3040);
    if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM_3, 128, 4) >= 0 )
    {
      if ( *v16 == 128
        && *(_WORD *)(v1 + 3042) == 4
        && *(_QWORD *)(v1 + 3072)
        && *(_QWORD *)(v1 + 3080)
        && *(_QWORD *)(v1 + 3088)
        && *(_QWORD *)(v1 + 3096)
        && *(_QWORD *)(v1 + 3104)
        && *(_QWORD *)(v1 + 3112)
        && *(_QWORD *)(v1 + 3120)
        && *(_QWORD *)(v1 + 3128)
        && *(_QWORD *)(v1 + 3136)
        && *(_QWORD *)(v1 + 3144)
        && *(_QWORD *)(v1 + 3152)
        && *(_QWORD *)(v1 + 3160) )
      {
        *(_DWORD *)(v1 + 3032) = 4;
        goto LABEL_25;
      }
      LODWORD(v8) = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      v26 = 128LL;
    }
    else
    {
      v17 = 3;
      if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM_2, 112, 3) < 0 )
      {
        v17 = 2;
        if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM_2_JTP, 120, 2) < 0 )
        {
          if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM, 104, 1) >= 0 )
            *(_DWORD *)(v1 + 3032) = 1;
          goto LABEL_25;
        }
        if ( *v16 != 120
          || *(_WORD *)(v1 + 3042) != 2
          || !*(_QWORD *)(v1 + 3072)
          || !*(_QWORD *)(v1 + 3080)
          || !*(_QWORD *)(v1 + 3088)
          || !*(_QWORD *)(v1 + 3096)
          || !*(_QWORD *)(v1 + 3104)
          || !*(_QWORD *)(v1 + 3112)
          || !*(_QWORD *)(v1 + 3120)
          || !*(_QWORD *)(v1 + 3128)
          || !*(_QWORD *)(v1 + 3136)
          || !*(_QWORD *)(v1 + 3152) )
        {
          LODWORD(v8) = -1073741811;
          WdLogSingleEntry1(2LL, -1073741811LL);
          v26 = 120LL;
          goto LABEL_94;
        }
LABEL_65:
        *(_DWORD *)(v1 + 3032) = v17;
        goto LABEL_25;
      }
      if ( *v16 == 112
        && *(_WORD *)(v1 + 3042) == 3
        && *(_QWORD *)(v1 + 3072)
        && *(_QWORD *)(v1 + 3080)
        && *(_QWORD *)(v1 + 3088)
        && *(_QWORD *)(v1 + 3096)
        && *(_QWORD *)(v1 + 3104)
        && *(_QWORD *)(v1 + 3112)
        && *(_QWORD *)(v1 + 3120)
        && *(_QWORD *)(v1 + 3128)
        && *(_QWORD *)(v1 + 3136)
        && *(_QWORD *)(v1 + 3144) )
      {
        goto LABEL_65;
      }
      LODWORD(v8) = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      v26 = 112LL;
    }
LABEL_94:
    memset(v16, 0, v26);
    v4 = 0;
    goto LABEL_110;
  }
LABEL_25:
  *(_DWORD *)(v1 + 3240) = -1;
  if ( !byte_1C013B496
    || *(_DWORD *)(*(_QWORD *)(StartContext[8] + 40LL) + 28LL) < 0x4000u
    || *(_BYTE *)(*(_QWORD *)(v1 + 40) + 133LL) && !*(_BYTE *)(v1 + 1159) )
  {
    goto LABEL_37;
  }
  v16 = (_WORD *)(v1 + 3168);
  if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_MIRACAST_DISPLAY, 64, 1) >= 0 )
  {
    if ( *v16 >= 0x40u
      && *(_WORD *)(v1 + 3170) == 1
      && *(_QWORD *)(v1 + 3200)
      && *(_QWORD *)(v1 + 3208)
      && *(_QWORD *)(v1 + 3216)
      && *(_QWORD *)(v1 + 3224) )
    {
      goto LABEL_37;
    }
    LODWORD(v8) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v26 = 64LL;
    goto LABEL_94;
  }
  memset((void *)(v1 + 3168), 0, 0x40uLL);
LABEL_37:
  if ( *(_BYTE *)(v1 + 1160) )
    *(_QWORD *)(v1 + 120) = DpiFdoDispatchIoctl;
  if ( *(_BYTE *)(v1 + 1159) )
  {
    *(_QWORD *)(v1 + 104) = DpiFdoDispatchCreate;
    *(_QWORD *)(v1 + 96) = DpiFdoDispatchCleanupAndClose;
  }
  memset((void *)(StartContext[8] + 4392LL), 0, 0x178uLL);
  LODWORD(v8) = DpiInitializeBlockList(StartContext);
LABEL_42:
  v5 = v3;
  if ( (int)v8 >= 0 )
    return (unsigned int)v8;
  v4 = 0;
  if ( v3 == 1 )
    goto LABEL_110;
LABEL_111:
  if ( *(_QWORD *)(v1 + 3944) )
    DpiRequestIoPowerState((__int64)StartContext, 7, v18, 0);
  if ( v4 == 1 )
    RtlFreeUnicodeString((PUNICODE_STRING)&Type[1]);
  if ( v5 )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4768));
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4784));
  }
  v27 = *(void **)(v1 + 3312);
  *(_DWORD *)(v1 + 3296) = 0;
  if ( v27 )
  {
    ExFreePoolWithTag(v27, 0);
    *(_QWORD *)(v1 + 3312) = 0LL;
  }
  v28 = *(void **)(v1 + 3304);
  if ( v28 )
  {
    ExFreePoolWithTag(v28, 0);
    *(_QWORD *)(v1 + 3304) = 0LL;
  }
  v29 = *(void **)(v1 + 4832);
  if ( v29 )
  {
    ExFreePoolWithTag(v29, 0);
    *(_QWORD *)(v1 + 4832) = 0LL;
  }
  v30 = *(void **)(v1 + 4840);
  if ( v30 )
  {
    ExFreePoolWithTag(v30, 0);
    *(_QWORD *)(v1 + 4840) = 0LL;
  }
  v31 = *(void **)(v1 + 2728);
  if ( v31 )
  {
    ExFreePoolWithTag(v31, 0);
    *(_QWORD *)(v1 + 2728) = 0LL;
  }
  v32 = *(void **)(v1 + 2752);
  if ( v32 )
  {
    ExFreePoolWithTag(v32, 0);
    *(_QWORD *)(v1 + 2752) = 0LL;
  }
  v33 = *(void **)(v1 + 2768);
  if ( v33 )
  {
    ExFreePoolWithTag(v33, 0);
    *(_QWORD *)(v1 + 2768) = 0LL;
  }
  v34 = *(struct SYSMM_ADAPTER **)(v1 + 5688);
  if ( v34 )
    SysMmDestroyAdapter(v34);
  return (unsigned int)v8;
}
