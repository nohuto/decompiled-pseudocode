/*
 * XREFs of PpmEventTraceControlCallback @ 0x140864680
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x140224C00 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopExecuteOnTargetProcessors @ 0x140293A88 (PopExecuteOnTargetProcessors.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     PpmEventHgsHardwareTable @ 0x1405D997C (PpmEventHgsHardwareTable.c)
 *     PpmEventHgsNormalizedTable @ 0x1405D9B84 (PpmEventHgsNormalizedTable.c)
 *     PpmEventPlatformVetoRundown @ 0x1405DA68C (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRundown @ 0x1405DA9A8 (PpmEventProcessorVetoRundown.c)
 *     PpmEventTraceLPIState @ 0x1405DB010 (PpmEventTraceLPIState.c)
 *     PpmEventVetoReasonRundown @ 0x1405DB7EC (PpmEventVetoReasonRundown.c)
 *     PpmEventQosClassPolicy @ 0x14069DF5C (PpmEventQosClassPolicy.c)
 *     PpmEventQosSupport @ 0x14069DFF4 (PpmEventQosSupport.c)
 *     PpmEventHeteroPolicy @ 0x140849D6C (PpmEventHeteroPolicy.c)
 *     PpmEventTraceProfiles @ 0x140855034 (PpmEventTraceProfiles.c)
 *     PpmInfoTraceProfileSettings @ 0x140997A1C (PpmInfoTraceProfileSettings.c)
 *     PpmEventStaticPolicyRundown @ 0x14099A514 (PpmEventStaticPolicyRundown.c)
 *     PpmEventTraceAccountingBucketIntervalsRundown @ 0x14099A6CC (PpmEventTraceAccountingBucketIntervalsRundown.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x14099A7A4 (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventTraceParkNodeRundown @ 0x14099AA08 (PpmEventTraceParkNodeRundown.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x14099AB34 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTracePpmProfileStatusRundown @ 0x14099AD7C (PpmEventTracePpmProfileStatusRundown.c)
 *     PpmEventTraceProcessorIdle @ 0x14099AE0C (PpmEventTraceProcessorIdle.c)
 *     PpmEventTraceProcessorPerformance @ 0x14099B030 (PpmEventTraceProcessorPerformance.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x14099B3D8 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 *     PpmEventTraceProcessorPerformanceRundownHv @ 0x14099B674 (PpmEventTraceProcessorPerformanceRundownHv.c)
 */

void __fastcall PpmEventTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 Prcb; // rax
  __int64 i; // rbx
  unsigned int j; // edi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int k; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rbx
  unsigned __int16 *v30; // [rsp+20h] [rbp-20h] BYREF
  __int64 v31; // [rsp+28h] [rbp-18h]
  __int16 v32; // [rsp+30h] [rbp-10h]
  int v33; // [rsp+32h] [rbp-Eh]
  __int16 v34; // [rsp+36h] [rbp-Ah]
  unsigned int v35; // [rsp+78h] [rbp+38h] BYREF

  if ( (ControlCode & 0xFFFFFFFD) == 0 )
  {
    v33 = 0;
    v34 = 0;
    v35 = 0;
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    v31 = qword_140D06E48[0];
    v32 = 0;
    v30 = (unsigned __int16 *)KeActiveProcessors;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v35, &v30) )
    {
      Prcb = KeGetPrcb(v35);
      PpmEventTraceProcessorPerformance(Prcb);
    }
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      if ( ControlCode == 2 )
      {
        PpmEventTraceProcessorPerformanceDomainRundown(i);
        PpmEventQosClassPolicy(i, 1);
      }
      for ( j = 0; j < *(_DWORD *)(i + 296); ++j )
      {
        v8 = *(_QWORD *)(i + 312) + 136LL * j;
        if ( *(_DWORD *)(v8 + 16) == 1 )
          PpmEventTraceProcessorPerformanceRundownHv(*(_QWORD *)v8);
      }
    }
    if ( ControlCode == 2 )
    {
      PpmEventTraceLPIState();
      PpmEventStaticPolicyRundown(v10, v9, v11);
      PpmEventQosSupport(1);
      PpmEventHeteroPolicy(1);
      if ( PpmHeteroHgsEnabled || PpmHeteroHgsThreadEnabled )
      {
        PpmEventHgsHardwareTable(1);
        PpmEventHgsNormalizedTable();
      }
    }
    for ( k = 0; k < PpmParkNumNodes; ++k )
      PpmEventTraceParkNodeRundown(PpmParkNodes + 336LL * k);
    PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
    PpmEventTracePpmProfileStatusRundown(v14, v13, v15);
    PpmEventTraceProfiles(1);
    if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_SETTING_RUNDOWN) )
      PpmInfoTraceProfileSettings(v17, v16, v18);
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
    PpmReleaseLock(&PpmPerfPolicyLock);
    if ( ControlCode == 2 )
    {
      PpmEventTraceAccountingBucketIntervalsRundown(v20, v19, v21);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&PpmIdlePolicyLock, 0LL);
      PpmEventTraceCoordinatedIdleStates(v24, v23, v25);
      PpmEventTracePlatformIdleAccounting(v27, v26, v28);
      PpmEventVetoReasonRundown();
      PpmEventPlatformVetoRundown();
      v31 = qword_140D06E48[0];
      v32 = 0;
      v30 = (unsigned __int16 *)KeActiveProcessors;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v35, &v30) )
      {
        v29 = KeGetPrcb(v35);
        PpmEventProcessorVetoRundown(v29);
        PpmEventTraceProcessorIdle(v29);
      }
      PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmEventTraceProcessorIdleAccounting, 0LL, 0LL);
      PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
    }
  }
}
