char __fastcall IoInitSystemPreDrivers(__int64 a1)
{
  __int64 v2; // rax
  int v3; // r14d
  unsigned __int64 v4; // r8
  int v5; // eax
  ULONG ActiveProcessorCount; // ebx
  __int64 v7; // rcx
  _DWORD *v8; // rbx
  unsigned int v9; // eax
  bool v10; // al
  bool IsStateSeparationDevModeEnabled; // bl
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r8
  KIRQL v18; // bl
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // ebx
  int v27; // eax
  __int64 v28; // r8
  int v29; // ebx
  ULONG v30; // ebx
  int SystemDlls; // eax
  __int64 v32; // r8
  int inited; // eax
  __int64 v35; // r8
  size_t Size; // [rsp+28h] [rbp-99h]
  _BYTE OutputBuffer[8]; // [rsp+48h] [rbp-79h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-71h] BYREF
  __int64 v39; // [rsp+58h] [rbp-69h] BYREF
  PVOID Object; // [rsp+60h] [rbp-61h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-29h] BYREF
  _QWORD v43[2]; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-1h] BYREF
  __int128 v46; // [rsp+D0h] [rbp+Fh] BYREF
  __int128 v47; // [rsp+E0h] [rbp+1Fh]

  v43[0] = 0x1000000LL;
  v44 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v43[1] = IoInitSystem_deviceNameBuffer;
  v2 = *(_QWORD *)(a1 + 240);
  DestinationString = 0LL;
  KeyHandle = 0LL;
  IoStatusBlock = 0LL;
  v3 = *(_DWORD *)(v2 + 132) & 0x80000;
  OutputBuffer[0] = 0;
  v46 = 0LL;
  v47 = 0LL;
  ExInitializeResourceLite(&IopDriverLoadResource);
  ExInitializeResourceLite(&IopDatabaseResource);
  ExInitializeResourceLite(&IopSecurityResource);
  ExInitializeResourceLite(&IopCrashDumpLock);
  ExInitializeResourceLite(&IopLiveDumpLock);
  ExInitializePushLock(&IopFilesystemDatabaseShutdownRundown);
  IopPerfIoTrackingLock = 0LL;
  qword_140C5D578 = (__int64)&IopDiskFileSystemQueueHead;
  IopDiskFileSystemQueueHead = (__int64)&IopDiskFileSystemQueueHead;
  qword_140C5D618 = (__int64)&IopCdRomFileSystemQueueHead;
  IopCdRomFileSystemQueueHead = (__int64)&IopCdRomFileSystemQueueHead;
  qword_140C5D628 = (__int64)&IopTapeFileSystemQueueHead;
  IopTapeFileSystemQueueHead = (__int64)&IopTapeFileSystemQueueHead;
  qword_140C5D5F8 = (__int64)&IopNetworkFileSystemQueueHead;
  IopNetworkFileSystemQueueHead = (__int64)&IopNetworkFileSystemQueueHead;
  qword_140C5D608 = (__int64)&IopBootDriverReinitializeQueueHead;
  IopBootDriverReinitializeQueueHead = (__int64)&IopBootDriverReinitializeQueueHead;
  qword_140C5D658 = (__int64)&IopDriverReinitializeQueueHead;
  IopDriverReinitializeQueueHead = (__int64)&IopDriverReinitializeQueueHead;
  qword_140C5D668 = (__int64)&IopNotifyShutdownQueueHead;
  IopNotifyShutdownQueueHead = &IopNotifyShutdownQueueHead;
  qword_140C5D638 = (__int64)&IopNotifyLastChanceShutdownQueueHead;
  IopNotifyLastChanceShutdownQueueHead = &IopNotifyLastChanceShutdownQueueHead;
  qword_140C5D648 = (__int64)&IopFsNotifyChangeQueueHead;
  IopFsNotifyChangeQueueHead = (__int64)&IopFsNotifyChangeQueueHead;
  qword_140C5D688 = (__int64)&IopPerfIoTrackingListHead;
  IopPerfIoTrackingListHead = (__int64)&IopPerfIoTrackingListHead;
  IoStatisticsLock = 0LL;
  IopFunctionPointerLock = 0LL;
  IopDiskIoAttributionTree = 0LL;
  IopUniqueDeviceObjectNumber = 0;
  IopIrpStackProfilerFlags = 0;
  v4 = __rdtsc() >> 4;
  v5 = 0;
  IopUniqueDriverObjectNumber = v4 % 0x64 + 10;
  if ( !IopLargeIrpStackLocations )
  {
    IopLargeIrpStackLocations = 14;
    v5 = 1;
    IopIrpStackProfilerFlags = 1;
  }
  if ( !IopMediumIrpStackLocations )
  {
    IopMediumIrpStackLocations = 4;
    IopIrpStackProfilerFlags = v5 | 2;
  }
  if ( (unsigned int)(IopIrpCompletionTimeoutInSeconds - 2) > 0x12A )
    IopIrpCompletionTimeoutInSeconds = 300;
  IopQueryProcessorInitValues((__int64)&v46);
  ExInitializeSystemLookasideList(
    (__int64)&IopCompletionLookasideList,
    512,
    56,
    544236361,
    SWORD3(v46),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopLargeIrpLookasideList,
    512,
    SDWORD1(v47),
    1819308617,
    SWORD2(v46),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMediumIrpLookasideList,
    512,
    v47,
    1836085833,
    SWORD1(v46),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopSmallIrpLookasideList,
    512,
    SHIDWORD(v46),
    1936749129,
    v46,
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMdlLookasideList,
    512,
    SDWORD2(v47),
    543974477,
    SWORD4(v46),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeNPagedLookasideList(&IopSafeCompletionLookasideList, 0LL, 0LL, 0x200u, 0x20uLL, 0x73556F49u, 0);
  FsRtlInitExtraCreateParameterLookasideList(&IopSymlinkInfoLookasideList, 0, 0x11EuLL, 0x69536F49u);
  ExInitializeNPagedLookasideList(
    (PNPAGED_LOOKASIDE_LIST)&IopOplockFoExtLookasideList,
    0LL,
    0LL,
    0x200u,
    0x30uLL,
    0x7443704Fu,
    0);
  LODWORD(v39) = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    v7 = 0LL;
    do
    {
      IoInitializeProcessor(KiProcessorBlock[v7], &v46);
      v7 = (unsigned int)(v39 + 1);
      LODWORD(v39) = v7;
    }
    while ( (unsigned int)v7 < ActiveProcessorCount );
  }
  IopErrorLogLock = 0LL;
  qword_140C5D6C8 = (__int64)&IopErrorLogListHead;
  IopErrorLogListHead = (__int64)&IopErrorLogListHead;
  if ( !(unsigned __int8)IopInitializeReserveIrps() )
  {
    LODWORD(IopInitFailCode) = 1;
    return 0;
  }
  if ( (IopIrpStackProfilerFlags & 3) != 0 )
  {
    IopIrpStackProfilerMinSizeThreshold = 400;
    qword_140C5D7F8 = (__int64)IopIrpStackProfilerDpcRoutine;
    IopIrpStackProfilerFlags |= 4u;
    IopIrpStackProfilerSampleSize = 2000;
    LODWORD(IopIrpStackProfilerDpc) = 275;
    qword_140C5D800 = 0LL;
    qword_140C5D818 = 0LL;
    qword_140C5D7F0 = 0LL;
  }
  v8 = IopRevocationExtension;
  memset(IopRevocationExtension, 0, 0x60uLL);
  *v8 = 4;
  v9 = IopDiskIoAttributionBaseIoSize;
  if ( (unsigned int)IopDiskIoAttributionBaseIoSize >= 0x400000 )
  {
    v9 = 0x400000;
    IopDiskIoAttributionBaseIoSize = 0x400000;
  }
  if ( v9 <= 0x1000 )
    IopDiskIoAttributionBaseIoSize = 4096;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSetServicesEventLog;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
  {
    IopErrorLogDisabledThisBoot = 1;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Start");
    LODWORD(Size) = 32;
    v10 = (int)NtQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 2u,
                 (unsigned __int64)IoInitSystem_valueBuffer,
                 Size,
                 (unsigned int *)&v39) < 0
       || dword_140D818BC != 4
       || dword_140D818C4 == 4;
    IopErrorLogDisabledThisBoot = v10;
    ObCloseHandle(KeyHandle, 0);
  }
  *(_QWORD *)&IopTimer.Header.Lock = 9LL;
  IopTimerQueueHead.Blink = &IopTimerQueueHead;
  IopTimerQueueHead.Flink = &IopTimerQueueHead;
  IopTimerLock = 0LL;
  IopTimerDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)IopTimerDispatch;
  IopTimerDpc.TargetInfoAsUlong = 275;
  IopTimerDpc.DeferredContext = &IopTimerCount;
  IopTimer.Header.WaitListHead.Blink = &IopTimer.Header.WaitListHead;
  IopTimer.Header.WaitListHead.Flink = &IopTimer.Header.WaitListHead;
  qword_140C5D848 = (__int64)&IopDeadIrps;
  IopDeadIrps = (__int64)&IopDeadIrps;
  IopHardError.WorkerRoutine = (void (__fastcall *)(void *))IopHardErrorThread;
  qword_140C5D988 = (__int64)&qword_140C5D980;
  qword_140C5D980 = (__int64)&qword_140C5D980;
  qword_140C5D9A8 = (__int64)&qword_140C5D9A0;
  qword_140C5D9A0 = (__int64)&qword_140C5D9A0;
  IopKeepAliveTracker.WorkerRoutine = (void (__fastcall *)(void *))IopKeepAliveWorker;
  qword_140C5D908 = (__int64)&qword_140C5D900;
  qword_140C5D900 = &qword_140C5D900;
  IopTimerDpc.DpcData = 0LL;
  IopTimerDpc.ProcessorHistory = 0LL;
  IopTimer.DueTime.QuadPart = 0LL;
  IopTimer.Period = 0;
  IopTimer.Processor = 0;
  IopHardError.Parameter = 0LL;
  IopHardError.List.Flink = 0LL;
  qword_140C5D990 = 0LL;
  byte_140C5D998 = 5;
  byte_140C5D99A = 8;
  dword_140C5D99C = 0;
  dword_140C5D9B0 = 0x7FFFFFFF;
  byte_140C5D9B8 = 0;
  IopKeepAliveTracker.Parameter = 0LL;
  IopKeepAliveTracker.List.Flink = 0LL;
  qword_140C5D910[0] = 0LL;
  byte_140C5D938 = 0;
  IopErrorLogSessionPending = 1;
  RtlInitUnicodeString(&DestinationString, L"\\Security\\TRKWKS_EVENT");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 528;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( (int)NtCreateEvent((unsigned __int64)&KeyHandle, 0x1F0003u, (int)&ObjectAttributes, NotificationEvent, 0) < 0 )
  {
    HeadlessKernelAddLogEntry();
    return 0;
  }
  Object = 0LL;
  ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  IopLinkTrackingServiceEvent = (__int64)Object;
  IopMountCompletionEvent.Header.WaitListHead.Blink = &IopMountCompletionEvent.Header.WaitListHead;
  IopMountCompletionEvent.Header.WaitListHead.Flink = &IopMountCompletionEvent.Header.WaitListHead;
  stru_140C5DA00.Header.WaitListHead.Blink = &stru_140C5DA00.Header.WaitListHead;
  stru_140C5DA00.Header.WaitListHead.Flink = &stru_140C5DA00.Header.WaitListHead;
  IopLinkTrackingPortObject.Header.WaitListHead.Blink = &IopLinkTrackingPortObject.Header.WaitListHead;
  IopLinkTrackingPortObject.Header.WaitListHead.Flink = &IopLinkTrackingPortObject.Header.WaitListHead;
  LOWORD(IopMountCompletionEvent.Header.Lock) = 0;
  IopMountCompletionEvent.Header.Size = 6;
  IopMountCompletionEvent.Header.SignalState = 0;
  LOWORD(stru_140C5DA00.Header.Lock) = 0;
  stru_140C5DA00.Header.Size = 6;
  stru_140C5DA00.Header.SignalState = 0;
  LOWORD(IopLinkTrackingPortObject.Header.Lock) = 1;
  IopLinkTrackingPortObject.Header.Size = 6;
  IopLinkTrackingPortObject.Header.SignalState = 1;
  ObCloseHandle(KeyHandle, 0);
  if ( !(unsigned __int8)IopCreateRootDirectories() )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 3;
    return 0;
  }
  if ( (int)IopInitializeSessionNotifications() < 0 )
  {
    LODWORD(IopInitFailCode) = 15;
    return 0;
  }
  if ( (int)IopInitializePlugPlayServices(a1, 0LL) < 0 )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 4;
    return 0;
  }
  if ( v3 )
    WheaSelLogCheckPoint();
  KseInitialize(a1, 0);
  PoInitDriverServices();
  off_140C02140[0]();
  PnpMarkHalDeviceNode();
  if ( !(unsigned __int8)WMIInitialize(0LL, a1) )
    return 0;
  if ( v3 )
    WheaSelLogCheckPoint();
  IsStateSeparationDevModeEnabled = CmIsStateSeparationDevModeEnabled();
  LOBYTE(v12) = RtlIsStateSeparationEnabled();
  LOBYTE(v13) = IsStateSeparationDevModeEnabled;
  v14 = ExpInitializeStateSeparationPhase0(v12, v13);
  if ( (int)(v14 + 0x80000000) >= 0 && v14 != -1073741637 )
    return 0;
  if ( (int)AstInitialize() < 0 )
  {
    LODWORD(IopInitFailCode) = 17;
    return 0;
  }
  EtwInitialize(1u, a1);
  if ( EtwRegister(&IoTraceProvider, (PETWENABLECALLBACK)IopEtwEnableCallback, 0LL, &IoTraceHandle) < 0 )
  {
    LODWORD(IopInitFailCode) = 16;
    return 0;
  }
  if ( McGenEventRegister_EtwRegister((const GUID *)IoMgrProvider, v15, IoMgrProvider_Context, IoMgrProvider_Context) < 0 )
  {
    LODWORD(IopInitFailCode) = 11;
    return 0;
  }
  if ( (int)MmRegisterEtwProvider() < 0 )
  {
    LODWORD(IopInitFailCode) = 22;
    return 0;
  }
  EtwRegister(&DumpProvGuid, (PETWENABLECALLBACK)IopDumpTracingControlCallback, 0LL, &IopDumpEtwRegHandle);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C06248, 0LL, 0LL);
  IopInitializeDumpPolicySettings(1);
  TlgRegisterAggregateProvider(&dword_140C03848);
  SeAuditBootConfiguration(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 2880LL));
  BootApplicationPersistentDataProcess(1LL);
  BapdRecordFirmwareBootStats();
  KdInitialize(2LL, 0LL, &KdpContext, v16);
  KeInitSystem(2LL);
  if ( !IopErrorLogDisabledThisBoot )
  {
    v18 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
    if ( (__int64 *)IopErrorLogListHead == &IopErrorLogListHead )
    {
      IopErrorLogSessionPending = 0;
    }
    else
    {
      IopErrorLogWorkItem.Parameter = 0LL;
      IopErrorLogWorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopErrorLogThread;
      IopErrorLogWorkItem.List.Flink = 0LL;
      ExQueueWorkItem(&IopErrorLogWorkItem, DelayedWorkQueue);
    }
    KeReleaseSpinLock(&IopErrorLogLock, v18);
  }
  if ( v3 )
    WheaSelLogCheckPoint();
  if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
    McTemplateK0q_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)WheaInitializeStart, v17, 0);
  WheaInitialize(a1, 0);
  if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
    McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)WheaInitializeStop);
  if ( v3 )
    WheaSelLogCheckPoint();
  if ( (int)IopStoreArcInformation(a1) < 0 )
    return 0;
  if ( (int)IopInitializePlugPlayServices(a1, 1LL) < 0 )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 5;
    return 0;
  }
  RtlInitializeGenericTableAvl(
    &IoStatusBlockRangeTable,
    (PRTL_AVL_COMPARE_ROUTINE)IopCompareIosbRanges,
    (PRTL_AVL_ALLOCATE_ROUTINE)IopAllocateGenericTableEntry,
    (PRTL_AVL_FREE_ROUTINE)IopFreeGenericTableEntry,
    0LL);
  IoStatusBlockRangeTableLock.Count = 1;
  IoStatusBlockRangeTableLock.Event.Header.WaitListHead.Blink = &IoStatusBlockRangeTableLock.Event.Header.WaitListHead;
  IoStatusBlockRangeTableLock.Event.Header.WaitListHead.Flink = &IoStatusBlockRangeTableLock.Event.Header.WaitListHead;
  IoStatusBlockRangeTableLock.Owner = 0LL;
  IoStatusBlockRangeTableLock.Contention = 0;
  LOWORD(IoStatusBlockRangeTableLock.Event.Header.Lock) = 1;
  IoStatusBlockRangeTableLock.Event.Header.Size = 6;
  IoStatusBlockRangeTableLock.Event.Header.SignalState = 0;
  KitpInitAitSampleRate(a1);
  if ( EtwRegister(&MS_Windows_AIT_Provider, 0LL, 0LL, &KitEtwHandle) < 0 )
    KitEtwHandle = 0LL;
  KseInitialize(a1, 1);
  if ( HvlPhase2Initialize(a1, v19, v20, v21) < 0 )
    return 0;
  if ( v3 )
    WheaSelLogCheckPoint();
  KeOptimizeSpecCtrlSettings();
  PsInitializeSyscallProviders();
  VslpIumPhase4Initialize();
  if ( v3 )
    WheaSelLogCheckPoint();
  if ( PnpEtwHandle )
    EtwWriteStartScenario(
      (ULONG_PTR *)PnpEtwHandle,
      &KMPnPEvt_DriverInitPhase_Start,
      &PnpDriverInitPhaseActivityId,
      0,
      0LL);
  LOWORD(ActiveConnectListLock.Header.Lock) = 1;
  qword_140C5D008 = (__int64)&ActiveConnectList;
  ActiveConnectList = (__int64)&ActiveConnectList;
  ActiveConnectListLock.Header.WaitListHead.Blink = &ActiveConnectListLock.Header.WaitListHead;
  ActiveConnectListLock.Header.WaitListHead.Flink = &ActiveConnectListLock.Header.WaitListHead;
  ActiveConnectListLock.Header.Size = 6;
  ActiveConnectListLock.Header.SignalState = 1;
  if ( (int)IopInitializePassiveInterruptServices() < 0 )
    return 0;
  SecureDump_PrepareForInit(v22, OutputBuffer);
  if ( ForceDumpDisabled || OutputBuffer[0] || !AllowCrashDump )
    CapsuleDumpAllowed = 0;
  else
    IopInitDumpCapsuleSupport();
  if ( ExLeapSecondDataLastParseResult )
    EtwTraceLeapSecondDataParseFailure(ExLeapSecondDataLastParseResult);
  EtwTraceLeapSecondDataUpdate(0, *(unsigned __int8 *)ExLeapSecondData, *((_DWORD *)ExLeapSecondData + 1), 0);
  IopInitializeIoRate(v24, v23);
  PsAltSystemCallRegistrationLock = 0LL;
  PsAltSystemCallHandlers[0] = (__int64)PsPicoAltSystemCallDispatch;
  IopReportBugCheckProgress = (__int64)HalSetEnvironmentVariableEx;
  if ( (*(_DWORD *)(a1 + 264) & 2) != 0 )
    IopReportBugCheckProgress = (__int64)VslReportBugCheckProgress;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x100000) != 0 )
  {
    if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
      McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)CrashDumpInitializeStart);
    LOBYTE(v25) = 1;
    inited = IopInitCrashDumpDuringSysInit(a1, v25);
    if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
      McTemplateK0q_EtwWriteTransfer(
        IoMgrProvider_Context,
        (const EVENT_DESCRIPTOR *)CrashDumpInitializeStop,
        v35,
        inited);
  }
  if ( !(unsigned int)IopInitializeBootDrivers(a1, &v44) )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 6;
    return 0;
  }
  if ( (Microsoft_Windows_Kernel_IOEnableBits & 8) != 0 )
    McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)LoadBootHotPatchesStart);
  v26 = MmRegisterHotPatches(a1);
  if ( (Microsoft_Windows_Kernel_IOEnableBits & 8) != 0 )
    McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)LoadBootHotPatchesStop);
  if ( v26 < 0 )
  {
    LODWORD(IopInitFailCode) = 21;
    return 0;
  }
  if ( !(unsigned __int8)PoInitSystem(2LL, a1) )
    KeBugCheck(0xA0u);
  if ( v3 )
    WheaSelLogCheckPoint();
  SmInitSystem(1LL);
  EtwInitialize(2u, a1);
  OutputBuffer[0] = 0;
  if ( VslVsmEnabled && NtPowerInformation(PlatformInformation, 0LL, 0, OutputBuffer, 1u) >= 0 && OutputBuffer[0] )
  {
    ExSubscribeWnfStateChange(
      (__int64)&VslpIumCsWnfSubscription,
      (__int64)&WNF_PO_SCENARIO_CHANGE,
      1,
      0,
      (__int64)VslpConnectedStandbyWnfCallback,
      0LL);
    PoRegisterPowerSettingCallback(
      0LL,
      &GUID_LOW_POWER_EPOCH,
      (PPOWER_SETTING_CALLBACK)VslpConnectedStandbyPoCallback,
      0LL,
      0LL);
    PoRegisterPowerSettingCallback(
      0LL,
      &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
      (PPOWER_SETTING_CALLBACK)VslpConnectedStandbyPoCallback,
      0LL,
      0LL);
  }
  IopInitializeSystemVariableService();
  SecureDump_ProvisionCrashDumpKey();
  if ( !ForceDumpDisabled || (IopDumpTraceForceDumpDisabled(), !ForceDumpDisabled) )
  {
    IoInitializeLiveDump();
    if ( !AllowLiveDump )
      IopLiveDumpTraceDumpDisabledOnBoot();
  }
  IopInitializeBugCheckDriverData();
  IopInitializeTriageDumpData();
  if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
    McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)CrashDumpInitializeStart);
  v27 = IopInitCrashDumpDuringSysInit(a1, 0LL);
  v29 = v27;
  if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
    McTemplateK0q_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)CrashDumpInitializeStop, v28, v27);
  if ( v3 )
    WheaSelLogCheckPoint();
  if ( v29 < 0 )
  {
    if ( !AllowCrashDump )
      IopTraceCrashDumpDisabledOnBoot();
  }
  else
  {
    IopRemoveDumpCapsuleSupport();
  }
  if ( !RtlIsStateSeparationEnabled() )
    PpLastGoodDoBootProcessing();
  v30 = NtGlobalFlag;
  NtGlobalFlag |= 0x40000u;
  SystemDlls = PsLocateSystemDlls();
  NtGlobalFlag = v30;
  if ( SystemDlls < 0 )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 7;
    return 0;
  }
  PfSnBeginBootPhase(0);
  if ( !(unsigned __int8)IopReassignSystemRoot(a1, v43) )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 9;
    return 0;
  }
  if ( !(unsigned __int8)IopProtectSystemPartition(a1) )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 10;
    return 0;
  }
  ObjectAttributes.ObjectName = (PUNICODE_STRING)((char *)PsLoadedModuleList + 72);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&KeyHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 1u, 0) >= 0 )
  {
    Object = 0LL;
    if ( ObReferenceObjectByHandle(KeyHandle, 0x80u, 0LL, 0, &Object, 0LL) >= 0 )
    {
      PpPagePathAssign(Object);
      ObfDereferenceObject(Object);
    }
    ZwClose(KeyHandle);
  }
  if ( !(unsigned __int8)WMIInitialize(1LL, 0LL) )
    return 0;
  if ( v3 )
    WheaSelLogCheckPoint();
  if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
    McTemplateK0q_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)WheaInitializeStart, v32, 1);
  WheaInitialize(a1, 1u);
  if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
    McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)WheaInitializeStop);
  if ( v3 )
    WheaSelLogCheckPoint();
  return 1;
}
