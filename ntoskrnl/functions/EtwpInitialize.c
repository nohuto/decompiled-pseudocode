void __fastcall EtwpInitialize(int a1, int a2, __int64 a3)
{
  char v5; // di
  __int64 v6; // rcx
  unsigned int CurrentSiloMaxLoggers; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD **v9; // rbx
  _QWORD *i; // rdi
  unsigned int v11; // r14d
  int v12; // eax
  __int64 v13; // rcx
  _WORD *v14; // rdi
  unsigned int j; // edi
  __int64 Prcb; // rax
  __int64 v17; // rsi
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  int v27; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v28; // [rsp+C0h] [rbp+40h] BYREF

  if ( !a3 || (v5 = 1, *(_QWORD *)(a3 + 8) == a3 + 8) )
    v5 = 0;
  if ( !a1 )
  {
    KiInitializeMutant((__int64)&EtwpGroupMaskMutex, 0, 1, 0);
    KiInitializeMutant((__int64)&EtwpCrimsonMaskMutex, 0, 1, 0);
    EtwpSecurityLock = 0LL;
    EtwpInitializeStackLookasideList();
    dword_140D1F3CC |= 0x880000u;
    LOBYTE(v6) = v5;
    EtwpBootDeferredGroupMask |= 0x10000u;
    EtwpInitializeBootTimeStamps(v6);
    if ( !a3 || (CurrentSiloMaxLoggers = *(_DWORD *)a3) == 0 )
    {
      if ( a2 )
        CurrentSiloMaxLoggers = EtwpGetCurrentSiloMaxLoggers();
      else
        CurrentSiloMaxLoggers = 80;
    }
    if ( (int)EtwpPreInitializeSiloState(0LL, CurrentSiloMaxLoggers) < 0 )
      KeBugCheck(0x11Du);
    CurrentPrcb = KeGetCurrentPrcb();
    EtwpHostSiloState = qword_140D49D20;
    EtwInitializeProcessor((__int64)CurrentPrcb);
    qword_140C0B4B8 = *(_QWORD *)(EtwpHostSiloState + 456);
    qword_140C0B4C0 = EtwpHostSiloState;
    if ( a3 )
    {
      v9 = (_QWORD **)(a3 + 8);
      for ( i = *v9; i != v9; i = (_QWORD *)*i )
        EtwpStartBootLogger(i);
    }
LABEL_16:
    ++EtwpBootPhase;
    return;
  }
  if ( a1 != 1 )
  {
    if ( a1 != 2 )
      return;
    EtwpUpdateFileInfoDriverState(PerfGlobalGroupMask, PerfGlobalGroupMask, 1, (_QWORD *)EtwpHostSiloState, 0);
    goto LABEL_16;
  }
  v11 = KeNumberProcessors_0;
  if ( v5 )
    EtwpFixBootSystemTime();
  v12 = EtwpInitializeSecurity();
  if ( v12 < 0 )
    KeBugCheckEx(0x11Du, 1uLL, v12, 0LL, 0LL);
  EtwpFixBootLoggers();
  v13 = 9LL;
  v14 = (_WORD *)(MmWriteableSharedUserData + 896);
  while ( v13 )
  {
    *v14++ = 0;
    --v13;
  }
  for ( j = 0; j < v11; ++j )
  {
    Prcb = KeGetPrcb(j);
    v17 = Prcb;
    if ( !*(_QWORD *)(Prcb + 34472) )
    {
      v18 = EtwInitializeProcessor(Prcb);
      if ( v18 < 0 )
        KeBugCheckEx(0x11Du, 2uLL, v18, j, 0LL);
    }
    v19 = EtwInitializeProcessorActivityId(v17);
    if ( v19 < 0 )
      KeBugCheckEx(0x11Du, 2uLL, v19, j, 0LL);
  }
  EtwpReadConfigParameters();
  EtwpInitializeRegistration();
  EtwpInitializePrivateSessionDemuxObject();
  EtwpInitializeRealTimeConnection();
  EtwCPUSpeedInMHz = *(_DWORD *)(KeGetPrcb(0) + 68);
  EtwpInitializeLastBranchTracing();
  EtwpInitializeProcessorTrace(v21, v20);
  dword_140C317F0 = 0;
  EtwpAdjustBuffersWorkItem.WorkerRoutine = (void (__fastcall *)(void *))EtwpAdjustTraceBuffers;
  EtwpMdlTable = 0;
  qword_140C317E8 = 0LL;
  EtwpAdjustBuffersWorkItem.Parameter = &EtwpBufferAdjustmentActive;
  dword_140C317E4 = 12;
  EtwpBufferAdjustmentCount = 8;
  EtwpAdjustBuffersWorkItem.List.Flink = 0LL;
  word_140C32002 = 0;
  KiInitializeTimer2((unsigned __int64)&EtwpMemInfoTimer, (__int64)EtwpLogMemInfoTimerCallback, 0LL, 8);
  EtwpInitializeProviderTraits();
  if ( !ExRegisterCallback((PCALLBACK_OBJECT)ExCbPowerState, (PCALLBACK_FUNCTION)EtwpPowerStateCallback, 0LL) )
    goto LABEL_43;
  v28 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  if ( (int)KsrGetFirmwareInformation(&v28) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\SoftRestart");
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 80;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ExCreateCallback(&EtwpKsrCallbackObject, &ObjectAttributes, 0, 1u) >= 0 )
      ExRegisterCallback(EtwpKsrCallbackObject, (PCALLBACK_FUNCTION)EtwpKsrCallback, 0LL);
  }
  EtwpLoadMicroarchitecturalPmcs();
  EtwpSiloAllowedGroupMask |= 0x1600370Fu;
  dword_140D1EE9C |= 0x8206u;
  dword_140D1EEA0 |= 0x10040u;
  dword_140D1EEB0 |= 0x1FFFFFFFu;
  EtwpMapEnableFlags((__int64)&EtwpSiloAllowedGroupMask, 0);
  if ( (int)EtwpInitializeSiloState(0LL, a3) < 0 )
LABEL_43:
    KeBugCheck(0x11Du);
  EtwpBugCheckCallback.State = 0;
  KeRegisterBugCheckReasonCallback(
    &EtwpBugCheckCallback,
    (PKBUGCHECK_REASON_CALLBACK_ROUTINE)EtwpBugCheckMultiPartCallback,
    KbCallbackSecondaryMultiPartDumpData,
    (PUCHAR)"Etw");
  EtwRegister(
    &EventTracingProvGuid,
    (PETWENABLECALLBACK)EtwpTracingProvEnableCallback,
    0LL,
    &EtwpEventTracingProvRegHandle);
  WdipSemInitialize();
  PerfDiagInitialize();
  EtwpInitializeCoverage();
  EtwpInitializeCoverageSampler();
  EtwRegister(&KernelProvGuid, (PETWENABLECALLBACK)EtwpKernelProvEnableCallback, 0LL, &EtwKernelProvRegHandle);
  TlgRegisterAggregateProvider(&dword_140C06690);
  EtwRegister(&PsProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)1, &EtwpPsProvRegHandle);
  TlgRegisterAggregateProviderEx(
    &dword_140C042B8,
    (__int64)EtwpTraceLoggingProvEnableCallback,
    (__int64)PsProvTraceLoggingGuid);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C038B8, 0LL, 0LL);
  EtwRegister(&NetProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)0x10000, &EtwpNetProvRegHandle);
  EtwRegister(&DiskProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)0x100, &EtwpDiskProvRegHandle);
  EtwRegister(
    &FileProvGuid,
    (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback,
    (PVOID)0x2000000,
    &EtwpFileProvRegHandle);
  EtwRegister(&RegistryProvGuid, (PETWENABLECALLBACK)EtwpRegTraceEnableCallback, 0LL, &EtwpRegTraceHandle);
  EtwRegister(
    &MemoryProvGuid,
    (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback,
    (PVOID)0x20000001,
    &EtwpMemoryProvRegHandle);
  EtwRegister(&MS_Windows_Kernel_AppCompat_Provider, 0LL, 0LL, &EtwAppCompatProvRegHandle);
  EtwRegister(&KernelAuditApiCallsGuid, 0LL, 0LL, &EtwApiCallsProvRegHandle);
  EtwRegister(&CVEAuditProviderGuid, 0LL, 0LL, &EtwCVEAuditProvRegHandle);
  EtwRegister(&ThreatIntProviderGuid, 0LL, 0LL, &EtwThreatIntProvRegHandle);
  EtwRegister(&MS_Windows_Security_LPAC_Provider, 0LL, 0LL, &EtwLpacProvRegHandle);
  EtwRegister(&SecurityMitigationsProviderGuid, 0LL, 0LL, &EtwSecurityMitigationsRegHandle);
  EtwRegister(
    &CpuStarvationProvGuid,
    (PETWENABLECALLBACK)EtwpCpuStarvationProvEnableCallback,
    0LL,
    &EtwCpuStarvationProvRegHandle);
  ++EtwpBootPhase;
  ZwUpdateWnfStateData((__int64)&WNF_ETW_SUBSYSTEM_INITIALIZED, 0LL);
  EtwpTraceSystemInitialization(v23, v22, v24);
  v27 = 0;
  if ( ((int (__fastcall *)(__int64, __int64, char *, int *, _QWORD, _DWORD, _DWORD))off_140C020E8[0])(
         44LL,
         4LL,
         (char *)&NlsMbCodePageTag + 6,
         &v27,
         0LL,
         0,
         0) < 0 )
    *(_DWORD *)((char *)&NlsMbCodePageTag + 6) = 8;
  EtwpMaxProfilingSources = *(_DWORD *)((char *)&NlsMbCodePageTag + 6);
}
