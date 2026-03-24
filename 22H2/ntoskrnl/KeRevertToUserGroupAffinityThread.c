/*
 * XREFs of KeRevertToUserGroupAffinityThread @ 0x14035C8F0
 * Callers:
 *     KeStallExecutionProcessor @ 0x14022A1F0 (KeStallExecutionProcessor.c)
 *     ExpWorkerThread @ 0x1402417F0 (ExpWorkerThread.c)
 *     KeGenericProcessorCallback @ 0x14035C6D8 (KeGenericProcessorCallback.c)
 *     MiSetIdealProcessorThread @ 0x14035E380 (MiSetIdealProcessorThread.c)
 *     PnpSendIrp @ 0x140361498 (PnpSendIrp.c)
 *     KeMaskInterrupt @ 0x1403769B0 (KeMaskInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x140376B1C (KiDisconnectInterruptCommon.c)
 *     KiConnectInterrupt @ 0x1403773AC (KiConnectInterrupt.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403916E8 (ExpSaPageGroupDescriptorAllocate.c)
 *     MiTimeSingleLargePageZero @ 0x1403AB330 (MiTimeSingleLargePageZero.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403B1468 (HalpTimerStallExecutionProcessor.c)
 *     MakeGdtReadOnly @ 0x1403B48D0 (MakeGdtReadOnly.c)
 *     KiInitMachineDependent @ 0x1403B522C (KiInitMachineDependent.c)
 *     HalGetEnvironmentVariableEx @ 0x1403BA5F0 (HalGetEnvironmentVariableEx.c)
 *     PpmInstallFeedbackCounters @ 0x1403C0ED8 (PpmInstallFeedbackCounters.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403C8090 (ExAllocateCacheAwarePushLock.c)
 *     HalpCreateMachineCheckErrorRecord @ 0x1404B9A40 (HalpCreateMachineCheckErrorRecord.c)
 *     HalQueryEnvironmentVariableInfoEx @ 0x1404BBB00 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalSetEnvironmentVariableEx @ 0x1404BBCE0 (HalSetEnvironmentVariableEx.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x1404BBE70 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     HalpAllocatePmcCounterSet @ 0x1404BE7B0 (HalpAllocatePmcCounterSet.c)
 *     HalpFreePmcCounterSet @ 0x1404BEBA0 (HalpFreePmcCounterSet.c)
 *     EmonMarkCountersReserved @ 0x1404D3614 (EmonMarkCountersReserved.c)
 *     EmonReleaseReservedCounters @ 0x1404D41D8 (EmonReleaseReservedCounters.c)
 *     HalpQueryCapsuleCapabilities @ 0x1404D7500 (HalpQueryCapsuleCapabilities.c)
 *     HalpUpdateCapsule @ 0x1404D75E0 (HalpUpdateCapsule.c)
 *     IopPassiveInterruptWorker @ 0x14050D4F0 (IopPassiveInterruptWorker.c)
 *     KiDynamicProcessorInitialization @ 0x14051237C (KiDynamicProcessorInitialization.c)
 *     KeRevertToUserAffinityThread @ 0x140513180 (KeRevertToUserAffinityThread.c)
 *     KeRevertToUserAffinityThreadEx @ 0x1405131C0 (KeRevertToUserAffinityThreadEx.c)
 *     KiDeregisterNmiSxCallback @ 0x1405148A4 (KiDeregisterNmiSxCallback.c)
 *     KiInterruptDispatchCommon @ 0x140521368 (KiInterruptDispatchCommon.c)
 *     KiAttemptBugcheckRecovery @ 0x140524CC4 (KiAttemptBugcheckRecovery.c)
 *     PpmClearSimulatedIdle @ 0x14056578C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1405676E4 (PpmSetSimulatedIdle.c)
 *     MiCombineAllPhysicalMemory @ 0x140727470 (MiCombineAllPhysicalMemory.c)
 *     PnpCallAddDevice @ 0x14073ADCC (PnpCallAddDevice.c)
 *     PpmIdleInitializeConcurrency @ 0x1407BB2E8 (PpmIdleInitializeConcurrency.c)
 *     HalpCmcWorkerRoutine @ 0x140864490 (HalpCmcWorkerRoutine.c)
 *     HalpLoadMicrocode @ 0x140866070 (HalpLoadMicrocode.c)
 *     CmInitializeProcessor @ 0x1408734C0 (CmInitializeProcessor.c)
 *     PnpReplacePartitionUnit @ 0x1408AC2C0 (PnpReplacePartitionUnit.c)
 *     HalpMceInit @ 0x1409A0B8C (HalpMceInit.c)
 *     HalpCmciInit @ 0x1409A0EB4 (HalpCmciInit.c)
 *     HalpHandlePreviousMcaErrors @ 0x1409A6DF4 (HalpHandlePreviousMcaErrors.c)
 *     IopLiveDumpUncorralProcessors @ 0x1409AD728 (IopLiveDumpUncorralProcessors.c)
 *     ViIsBTSSupported @ 0x1409D8638 (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x1409D876C (ViSetupBTSPerProcNoEnable.c)
 *     KiComputeNumaCosts @ 0x140A4D2E0 (KiComputeNumaCosts.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A58C04 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x140230540 (KiProcessDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x1402F1590 (KiReleaseThreadLockSafe.c)
 *     KiSetSystemAffinityThread @ 0x14035CE24 (KiSetSystemAffinityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x1405A7784 (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x1405A8280 (EtwTraceThreadAffinity.c)
 */

void __stdcall KeRevertToUserGroupAffinityThread(PGROUP_AFFINITY PreviousAffinity)
{
  __int64 v1; // r8
  _DWORD *SchedulerAssist; // r9
  PGROUP_AFFINITY p_UserAffinity; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rdx
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *v8; // rcx
  unsigned int IdealProcessor; // esi
  __int64 UserIdealProcessor; // r8
  unsigned int v11; // ebp
  int Group; // ecx
  __int64 v13; // rax
  bool v14; // zf
  int v15; // eax
  _DWORD *v16; // rcx
  int v17; // eax
  int v18; // [rsp+58h] [rbp+10h] BYREF
  __int64 v19; // [rsp+60h] [rbp+18h] BYREF

  p_UserAffinity = PreviousAffinity;
  v19 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 8) != 0 )
  {
    v5 = PreviousAffinity->Reserved[2];
    LOWORD(v5) = PreviousAffinity->Reserved[0] | PreviousAffinity->Reserved[1] | v5;
    if ( !(_WORD)v5 )
    {
      if ( !PreviousAffinity->Mask
        || (Group = PreviousAffinity->Group, (unsigned __int16)Group < (unsigned int)KeActiveProcessors[0])
        && (v13 = qword_140CFC848[Group], v14 = (v13 & p_UserAffinity->Mask) == 0, p_UserAffinity->Mask &= v13, !v14) )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          v5 = (-1LL << (CurrentIrql + 1)) & 4;
          v1 = (unsigned int)v5 | SchedulerAssist[5];
          SchedulerAssist[5] = v1;
        }
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = 0;
        while ( 1 )
        {
          v8 = CurrentPrcb->SchedulerAssist;
          if ( v8 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v15 = v8[6];
              v8[6] = v15 + 1;
              if ( v15 == -1 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
            break;
          v16 = CurrentPrcb->SchedulerAssist;
          if ( v16 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v17 = v16[6] - 1;
              v16[6] = v17;
              if ( !v17 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v18, v5, v1, (__int64)SchedulerAssist);
          while ( CurrentThread->ThreadLock );
        }
        IdealProcessor = CurrentThread->IdealProcessor;
        if ( p_UserAffinity->Mask )
        {
          UserIdealProcessor = 1280LL;
        }
        else
        {
          UserIdealProcessor = CurrentThread->UserIdealProcessor;
          p_UserAffinity = &CurrentThread->UserAffinity;
          CurrentThread->MiscFlags &= ~8u;
        }
        KiSetSystemAffinityThread(CurrentPrcb, p_UserAffinity, UserIdealProcessor, &v19);
        v11 = CurrentThread->IdealProcessor;
        KiReleaseThreadLockSafe((__int64)CurrentThread);
        if ( (xmmword_140CFC490 & 0x8000000) != 0 )
          EtwTraceIdealProcessor(CurrentThread, 1350LL, IdealProcessor, v11);
        if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
          EtwTraceThreadAffinity(CurrentThread, p_UserAffinity);
        KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v19, CurrentIrql);
      }
    }
  }
}
