/*
 * XREFs of KeRevertToUserGroupAffinityThread @ 0x1402AA110
 * Callers:
 *     PnpSendIrp @ 0x140202E04 (PnpSendIrp.c)
 *     HalpTimerStallExecutionProcessor @ 0x14022CA90 (HalpTimerStallExecutionProcessor.c)
 *     KeMaskInterrupt @ 0x14028E5A8 (KeMaskInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x14028E714 (KiDisconnectInterruptCommon.c)
 *     KiConnectInterrupt @ 0x14028FC8C (KiConnectInterrupt.c)
 *     KeGenericProcessorCallback @ 0x1402A9E48 (KeGenericProcessorCallback.c)
 *     HalGetEnvironmentVariableEx @ 0x1402AF770 (HalGetEnvironmentVariableEx.c)
 *     ExpWorkerThread @ 0x140352200 (ExpWorkerThread.c)
 *     PpmInstallFeedbackCounters @ 0x14038F058 (PpmInstallFeedbackCounters.c)
 *     KiInitMachineDependent @ 0x140396928 (KiInitMachineDependent.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x140398850 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     KiInterruptDispatchCommon @ 0x14039E224 (KiInterruptDispatchCommon.c)
 *     IopPassiveInterruptWorker @ 0x14039E620 (IopPassiveInterruptWorker.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403A28D0 (ExAllocateCacheAwarePushLock.c)
 *     MakeGdtReadOnly @ 0x1403A90CC (MakeGdtReadOnly.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403BFEBC (ExpSaPageGroupDescriptorAllocate.c)
 *     KeRevertToUserAffinityThreadEx @ 0x1404578C0 (KeRevertToUserAffinityThreadEx.c)
 *     HalpCreateMachineCheckErrorRecord @ 0x140500730 (HalpCreateMachineCheckErrorRecord.c)
 *     HalQueryEnvironmentVariableInfoEx @ 0x1405028B0 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalSetEnvironmentVariableEx @ 0x140502A90 (HalSetEnvironmentVariableEx.c)
 *     HalpAllocatePmcCounterSetEx @ 0x140504F80 (HalpAllocatePmcCounterSetEx.c)
 *     HalpFreePmcCounterSet @ 0x140505680 (HalpFreePmcCounterSet.c)
 *     HalpQueryCapsuleCapabilities @ 0x14051EE50 (HalpQueryCapsuleCapabilities.c)
 *     HalpUpdateCapsule @ 0x14051EF30 (HalpUpdateCapsule.c)
 *     Amd64InitializeUncoreProfiling @ 0x140527450 (Amd64InitializeUncoreProfiling.c)
 *     KiDynamicProcessorInitialization @ 0x140569868 (KiDynamicProcessorInitialization.c)
 *     KiDeregisterNmiSxCallback @ 0x14056A694 (KiDeregisterNmiSxCallback.c)
 *     KeRevertToUserAffinityThread @ 0x14056C9A0 (KeRevertToUserAffinityThread.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x140578960 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiStallBugcheckThread @ 0x140579138 (KiStallBugcheckThread.c)
 *     PpmClearSimulatedIdle @ 0x140581BAC (PpmClearSimulatedIdle.c)
 *     PpmIdleInstallNewVetoList @ 0x140582BD8 (PpmIdleInstallNewVetoList.c)
 *     PpmSetSimulatedIdle @ 0x1405837CC (PpmSetSimulatedIdle.c)
 *     MiSetIdealProcessorThread @ 0x140664A8C (MiSetIdealProcessorThread.c)
 *     PnpCallAddDevice @ 0x14078CA58 (PnpCallAddDevice.c)
 *     HalpCmcWorkerRoutine @ 0x14080C020 (HalpCmcWorkerRoutine.c)
 *     PpmIdleInitializeConcurrency @ 0x1408258E4 (PpmIdleInitializeConcurrency.c)
 *     HalpLoadMicrocodeSerialized @ 0x140931D78 (HalpLoadMicrocodeSerialized.c)
 *     PnpReplacePartitionUnit @ 0x140961B80 (PnpReplacePartitionUnit.c)
 *     CmInitializeProcessor @ 0x140A0CCAC (CmInitializeProcessor.c)
 *     HalpCmciInit @ 0x140A8795C (HalpCmciInit.c)
 *     HalpMceInit @ 0x140A87B68 (HalpMceInit.c)
 *     HalpHandlePreviousMcaErrors @ 0x140A91F70 (HalpHandlePreviousMcaErrors.c)
 *     IopLiveDumpUncorralProcessors @ 0x140A99588 (IopLiveDumpUncorralProcessors.c)
 *     ViIsBTSSupported @ 0x140AD0ADC (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x140AD0C10 (ViSetupBTSPerProcNoEnable.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140B520BC (CmpInitializeMachineDependentConfiguration.c)
 *     KiComputeNumaCosts @ 0x140B727C4 (KiComputeNumaCosts.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x140226BD0 (KiProcessDeferredReadyList.c)
 *     KiSetSystemAffinityThread @ 0x1402AC3AC (KiSetSystemAffinityThread.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     EtwTraceThreadAffinity @ 0x14045F1AC (EtwTraceThreadAffinity.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall KeRevertToUserGroupAffinityThread(PGROUP_AFFINITY PreviousAffinity)
{
  _KAFFINITY_EX *UserAffinity; // rbp
  PGROUP_AFFINITY v2; // r14
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r15
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  int UserIdealProcessor; // r9d
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rax
  int Group; // ecx
  __int64 v12; // rax
  bool v13; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  _DWORD *v16; // r8
  int v17; // eax
  int v18; // [rsp+68h] [rbp+10h] BYREF
  __int64 v19; // [rsp+70h] [rbp+18h] BYREF

  v19 = 0LL;
  UserAffinity = 0LL;
  v2 = 0LL;
  KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 8) == 0
    || PreviousAffinity->Reserved[0] | (unsigned __int16)(PreviousAffinity->Reserved[1] | PreviousAffinity->Reserved[2]) )
  {
    return;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v10) = 4;
    if ( CurrentIrql != 2 )
      v10 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v10;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !PreviousAffinity->Mask )
  {
    Next = CurrentThread->SystemAffinityTokenListHead.Next;
    if ( Next )
    {
      UserAffinity = (_KAFFINITY_EX *)Next[3].Next;
      BYTE2(Next[2].Next) = BYTE3(Next[2].Next) & 2;
    }
    goto LABEL_7;
  }
  Group = PreviousAffinity->Group;
  if ( (unsigned __int16)Group < (unsigned __int16)KeActiveProcessors )
  {
    v12 = qword_140D1EFE8[Group];
    v13 = (v12 & PreviousAffinity->Mask) == 0;
    PreviousAffinity->Mask &= v12;
    if ( !v13 )
    {
      v2 = PreviousAffinity;
LABEL_7:
      v18 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v18);
        while ( CurrentThread->ThreadLock );
      }
      if ( UserAffinity || v2 )
      {
        UserIdealProcessor = 2048;
      }
      else
      {
        UserAffinity = CurrentThread->UserAffinity;
        UserIdealProcessor = CurrentThread->UserIdealProcessor;
        CurrentThread->MiscFlags &= ~8u;
      }
      KiSetSystemAffinityThread(
        (_DWORD)CurrentPrcb,
        (_DWORD)UserAffinity,
        (_DWORD)v2,
        UserIdealProcessor,
        (__int64)&v19);
      if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
        EtwTraceThreadAffinity(CurrentThread, PreviousAffinity);
      KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v19, CurrentIrql);
      return;
    }
  }
  if ( KiIrqlFlags )
  {
    v14 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
    {
      v15 = KeGetCurrentPrcb();
      v16 = v15->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v13 = (v17 & v16[5]) == 0;
      v16[5] &= v17;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(v15);
    }
  }
  __writecr8(CurrentIrql);
}
