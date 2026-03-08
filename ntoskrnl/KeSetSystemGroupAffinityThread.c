/*
 * XREFs of KeSetSystemGroupAffinityThread @ 0x1402ABED0
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x140202EAC (PnpSetDeviceAffinityThread.c)
 *     HalpTimerStallExecutionProcessor @ 0x14022CA90 (HalpTimerStallExecutionProcessor.c)
 *     KiAcquireInterruptConnectLock @ 0x14028FEA0 (KiAcquireInterruptConnectLock.c)
 *     KeGenericProcessorCallback @ 0x1402A9E48 (KeGenericProcessorCallback.c)
 *     HalGetEnvironmentVariableEx @ 0x1402AF770 (HalGetEnvironmentVariableEx.c)
 *     PpmInstallFeedbackCounters @ 0x14038F058 (PpmInstallFeedbackCounters.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x140396BD0 (KiSetSystemAffinityThreadToProcessor.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x140398850 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     KiInterruptDispatchCommon @ 0x14039E224 (KiInterruptDispatchCommon.c)
 *     IopPassiveInterruptWorker @ 0x14039E620 (IopPassiveInterruptWorker.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403A28D0 (ExAllocateCacheAwarePushLock.c)
 *     MakeGdtReadOnly @ 0x1403A90CC (MakeGdtReadOnly.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403BFEBC (ExpSaPageGroupDescriptorAllocate.c)
 *     HalpCreateMachineCheckErrorRecord @ 0x140500730 (HalpCreateMachineCheckErrorRecord.c)
 *     HalQueryEnvironmentVariableInfoEx @ 0x1405028B0 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalSetEnvironmentVariableEx @ 0x140502A90 (HalSetEnvironmentVariableEx.c)
 *     HalpAllocatePmcCounterSetEx @ 0x140504F80 (HalpAllocatePmcCounterSetEx.c)
 *     HalpFreePmcCounterSet @ 0x140505680 (HalpFreePmcCounterSet.c)
 *     HalpQueryCapsuleCapabilities @ 0x14051EE50 (HalpQueryCapsuleCapabilities.c)
 *     HalpUpdateCapsule @ 0x14051EF30 (HalpUpdateCapsule.c)
 *     Amd64InitializeUncoreProfiling @ 0x140527450 (Amd64InitializeUncoreProfiling.c)
 *     KiDynamicProcessorInitialization @ 0x140569868 (KiDynamicProcessorInitialization.c)
 *     KeSetSystemAffinityThreadEx @ 0x14056CA70 (KeSetSystemAffinityThreadEx.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x140578960 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiStallBugcheckThread @ 0x140579138 (KiStallBugcheckThread.c)
 *     PpmClearSimulatedIdle @ 0x140581BAC (PpmClearSimulatedIdle.c)
 *     PpmIdleInstallNewVetoList @ 0x140582BD8 (PpmIdleInstallNewVetoList.c)
 *     PpmSetSimulatedIdle @ 0x1405837CC (PpmSetSimulatedIdle.c)
 *     MiSetIdealProcessorThread @ 0x140664A8C (MiSetIdealProcessorThread.c)
 *     HalpCmcWorkerRoutine @ 0x14080C020 (HalpCmcWorkerRoutine.c)
 *     PpmIdleInitializeConcurrency @ 0x1408258E4 (PpmIdleInitializeConcurrency.c)
 *     HalpLoadMicrocodeSerialized @ 0x140931D78 (HalpLoadMicrocodeSerialized.c)
 *     PnpReplacePartitionUnit @ 0x140961B80 (PnpReplacePartitionUnit.c)
 *     CmInitializeProcessor @ 0x140A0CCAC (CmInitializeProcessor.c)
 *     HalpCmciInit @ 0x140A8795C (HalpCmciInit.c)
 *     HalpMceInit @ 0x140A87B68 (HalpMceInit.c)
 *     HalpInitializeMce @ 0x140A87FF0 (HalpInitializeMce.c)
 *     HalpHandlePreviousMcaErrors @ 0x140A91F70 (HalpHandlePreviousMcaErrors.c)
 *     IopLiveDumpCorralProcessors @ 0x140A97E30 (IopLiveDumpCorralProcessors.c)
 *     PopEndMirroring @ 0x140A9F6B0 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x140AA542C (PopInvokeSystemStateHandler.c)
 *     ViIsBTSSupported @ 0x140AD0ADC (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x140AD0C10 (ViSetupBTSPerProcNoEnable.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140B520BC (CmpInitializeMachineDependentConfiguration.c)
 *     KiComputeNumaCosts @ 0x140B727C4 (KiComputeNumaCosts.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x140226BD0 (KiProcessDeferredReadyList.c)
 *     KiSetSystemAffinityThread @ 0x1402AC3AC (KiSetSystemAffinityThread.c)
 *     KeFirstGroupAffinityEx @ 0x1402AEC40 (KeFirstGroupAffinityEx.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     EtwTraceThreadAffinity @ 0x14045F1AC (EtwTraceThreadAffinity.c)
 */

void __stdcall KeSetSystemGroupAffinityThread(PGROUP_AFFINITY Affinity, PGROUP_AFFINITY PreviousAffinity)
{
  __int64 Group; // rcx
  char v5; // bp
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _KTHREAD *CurrentThread; // rbx
  int MiscFlags; // eax
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rax
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  struct _GROUP_AFFINITY v13; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF

  Group = Affinity->Group;
  v15 = 0LL;
  v13 = 0LL;
  if ( (unsigned __int16)Group >= LOWORD(KeActiveProcessors[0])
    || (*(_QWORD *)&KeActiveProcessors[2 * Group + 2] & Affinity->Mask) == 0
    || Affinity->Reserved[0] | (unsigned __int16)(Affinity->Reserved[1] | Affinity->Reserved[2]) )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    Affinity->Mask &= *(_QWORD *)&KeActiveProcessors[2 * Affinity->Group + 2];
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v11) = 4;
    if ( CurrentIrql != 2 )
      v11 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v11;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v14);
    while ( CurrentThread->ThreadLock );
  }
  MiscFlags = CurrentThread->MiscFlags;
  if ( (MiscFlags & 8) == 0 )
  {
    CurrentThread->MiscFlags = MiscFlags | 8;
    goto LABEL_10;
  }
  Next = CurrentThread->SystemAffinityTokenListHead.Next;
  if ( !Next )
    goto LABEL_23;
  if ( BYTE2(Next[2].Next) )
  {
    if ( BYTE2(Next[2].Next) == 1 )
    {
LABEL_23:
      KeFirstGroupAffinityEx(&v13, CurrentThread->Affinity);
      goto LABEL_10;
    }
    if ( BYTE2(Next[2].Next) != 2 )
    {
LABEL_10:
      if ( v5 )
      {
LABEL_11:
        KiSetSystemAffinityThread((_DWORD)CurrentPrcb, 0, (_DWORD)Affinity, 2048, (__int64)&v15);
        goto LABEL_12;
      }
      goto LABEL_32;
    }
  }
  if ( v5 )
  {
    BYTE2(Next[2].Next) = 1;
    goto LABEL_11;
  }
LABEL_32:
  CurrentThread->ThreadLock = 0LL;
LABEL_12:
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    EtwTraceThreadAffinity(CurrentThread, Affinity);
  KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v15, CurrentIrql);
  if ( PreviousAffinity )
    *PreviousAffinity = v13;
  KeGetCurrentIrql();
}
