/*
 * XREFs of KiFlushSoftwareInterruptBatch @ 0x140252640
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140203570 (KiRescheduleThreadAfterAffinityChange.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     KiExitDispatcher @ 0x14023CD50 (KiExitDispatcher.c)
 *     KiSearchForNewThread @ 0x140240330 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240C70 (KiSearchForNewThreadOnProcessor.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KiExecuteAllDpcs @ 0x1402444A0 (KiExecuteAllDpcs.c)
 *     KeYieldExecution @ 0x1402469D0 (KeYieldExecution.c)
 *     KiEnterLongDpcProcessing @ 0x1402479E0 (KiEnterLongDpcProcessing.c)
 *     KiQuantumEnd @ 0x1402486D0 (KiQuantumEnd.c)
 *     KiReadyDeferredReadyList @ 0x140249C70 (KiReadyDeferredReadyList.c)
 *     KiProcessThreadWaitList @ 0x140253CA0 (KiProcessThreadWaitList.c)
 *     KiSetPriorityThread @ 0x1402B05A0 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E40 (KiProcessDeferredReadyList.c)
 *     KiDirectSwitchThread @ 0x1402B1870 (KiDirectSwitchThread.c)
 *     KeSetBasePriorityThread @ 0x1402B9D70 (KeSetBasePriorityThread.c)
 *     KiRemoveBoostThread @ 0x1402BB220 (KiRemoveBoostThread.c)
 *     KiDeferredReadyThread @ 0x1402BBA30 (KiDeferredReadyThread.c)
 *     KiAbDeferredProcessingWorker @ 0x1402BBAC0 (KiAbDeferredProcessingWorker.c)
 *     KiExitThreadWait @ 0x1402BBC60 (KiExitThreadWait.c)
 *     KiNormalPriorityReadyScan @ 0x140306CC0 (KiNormalPriorityReadyScan.c)
 *     KiSetSystemAffinityThread @ 0x14030702C (KiSetSystemAffinityThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307454 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140307E24 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140308178 (KiGroupSchedulingGenerationEnd.c)
 *     KiHandleDeferredPreemption @ 0x140309098 (KiHandleDeferredPreemption.c)
 *     KeWaitForMultipleObjects @ 0x140310FC0 (KeWaitForMultipleObjects.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140317CE0 (KiAbThreadUnboostCpuPriority.c)
 *     KiInswapAndReadyThread @ 0x14034D43C (KiInswapAndReadyThread.c)
 *     KiApplyForegroundBoostThread @ 0x14034FED8 (KiApplyForegroundBoostThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036BAC8 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14036C524 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x14039C834 (KeSetCpuSetsProcess.c)
 *     KeCpuSetReportParkedProcessors @ 0x14039D3C4 (KeCpuSetReportParkedProcessors.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039DBFC (KiUpdateGlobalCpuSetConfiguration.c)
 *     KeUpdateThreadCpuSets @ 0x14039DDF8 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AA6BC (KeSetUserGroupAffinityThread.c)
 *     KiProcessPendingForegroundBoosts @ 0x1403D0240 (KiProcessPendingForegroundBoosts.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140461BE4 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D2BC (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14056E0E0 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1405752F4 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140575BD0 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577A9C (KiSetHeteroPolicyThread.c)
 *     KiParkCurrentProcessor @ 0x14057DF2C (KiParkCurrentProcessor.c)
 *     KiSoftParkElectionDpcRoutine @ 0x14057E2E0 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x140254570 (HalRequestIpiSpecifyVector.c)
 *     HalSendSoftwareInterrupt @ 0x140254610 (HalSendSoftwareInterrupt.c)
 *     memset @ 0x140435400 (memset.c)
 */

__int64 __fastcall KiFlushSoftwareInterruptBatch(unsigned __int8 *a1)
{
  __int64 result; // rax
  bool v3; // zf
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  __int64 v8; // r8

  result = a1[1];
  if ( (_BYTE)result )
  {
    v3 = (_BYTE)result == 1;
    CurrentPrcb = KeGetCurrentPrcb();
    if ( v3 )
    {
      v5 = *a1;
      v6 = *((unsigned int *)a1 + 1);
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      result = HalSendSoftwareInterrupt(v6, v5);
      v7 = a1 + 8;
    }
    else
    {
      v7 = a1 + 8;
      v8 = 47LL;
      if ( *a1 == 1 )
        v8 = 31LL;
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      result = HalRequestIpiSpecifyVector(0LL, a1 + 8, v8);
    }
    if ( a1[1] == 2 )
    {
      *v7 = 2097153LL;
      result = (__int64)memset(v7 + 1, 0, 0x100uLL);
    }
    a1[1] = 0;
    *((_DWORD *)a1 + 1) = 0xFFFF;
  }
  return result;
}
