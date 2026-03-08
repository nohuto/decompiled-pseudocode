/*
 * XREFs of KiReadyDeferredReadyList @ 0x140226FA0
 * Callers:
 *     KiDeferredReadyThread @ 0x140226178 (KiDeferredReadyThread.c)
 *     KiProcessDeferredReadyList @ 0x140226BD0 (KiProcessDeferredReadyList.c)
 *     KiRemoveBoostThread @ 0x140229890 (KiRemoveBoostThread.c)
 *     KiAbProcessContextSwitch @ 0x140239508 (KiAbProcessContextSwitch.c)
 *     KiAbApplyWakeupBoost @ 0x140239F90 (KiAbApplyWakeupBoost.c)
 *     KiCheckForThreadDispatch @ 0x14023A168 (KiCheckForThreadDispatch.c)
 *     KiQuantumEnd @ 0x140254F30 (KiQuantumEnd.c)
 *     KiDispatchInterrupt @ 0x140255DA0 (KiDispatchInterrupt.c)
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KiSwapThread @ 0x14025F500 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x140260460 (KiSearchForNewThread.c)
 *     KiNormalPriorityReadyScan @ 0x1402AC070 (KiNormalPriorityReadyScan.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402AC810 (KiSearchForNewThreadOnProcessor.c)
 *     KeSetUserAffinityThread @ 0x1402B0FA0 (KeSetUserAffinityThread.c)
 *     KiReadyOutSwappedThreads @ 0x1402C02E8 (KiReadyOutSwappedThreads.c)
 *     KiInswapAndReadyThread @ 0x1402C06E8 (KiInswapAndReadyThread.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1402D9A60 (KiAbThreadUnboostCpuPriority.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402F2018 (KeSetSchedulingGroupRankBias.c)
 *     KiSetLegacyAffinityThread @ 0x1402FDE2C (KiSetLegacyAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x140301184 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x140301A54 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KiDirectSwitchThread @ 0x1403414A0 (KiDirectSwitchThread.c)
 *     KeBoostPriorityThread @ 0x140359A88 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140369500 (KeSetBasePriorityThread.c)
 *     KeSetCpuSetsProcess @ 0x140398C34 (KeSetCpuSetsProcess.c)
 *     KeCpuSetReportParkedProcessors @ 0x140399388 (KeCpuSetReportParkedProcessors.c)
 *     KeUpdateThreadCpuSets @ 0x140399998 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403A8A60 (KeSetUserGroupAffinityThread.c)
 *     KiAbForceProcessLockEntry @ 0x1403C7578 (KiAbForceProcessLockEntry.c)
 *     KeSetThreadSchedulerAssist @ 0x14056AE2C (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14056BAF0 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140572DE4 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140573640 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x1405755E4 (KiSetHeteroPolicyThread.c)
 *     KiSoftParkElectionDpcRoutine @ 0x14057BEC0 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x140230C90 (HalRequestIpiSpecifyVector.c)
 *     KiDeferredReadySingleThread @ 0x140259FB0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402B7960 (KiFlushSoftwareInterruptBatch.c)
 *     KiSendSoftwareInterrupt @ 0x1402B7A00 (KiSendSoftwareInterrupt.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall KiReadyDeferredReadyList(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // rbx
  char v3; // r14
  unsigned __int8 *v6; // rsi
  __int64 result; // rax
  _QWORD *v8; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v10; // r8

  v2 = *a2;
  v3 = 0;
  if ( *a2 )
  {
    *a2 = (_QWORD *)*v2;
    do
    {
      KiDeferredReadySingleThread(a1, v2 - 27, a2);
      v2 = *a2;
      ++v3;
      if ( *a2 )
        *a2 = (_QWORD *)*v2;
      v6 = (unsigned __int8 *)(a1 + 12760);
      if ( (v3 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(a1 + 12760);
    }
    while ( v2 );
  }
  else
  {
    v6 = (unsigned __int8 *)(a1 + 12760);
  }
  result = v6[1];
  if ( (_BYTE)result )
  {
    if ( (_BYTE)result == 1 )
    {
      result = KiSendSoftwareInterrupt(*((unsigned int *)v6 + 1), *v6);
      v8 = v6 + 8;
    }
    else
    {
      v8 = v6 + 8;
      CurrentPrcb = KeGetCurrentPrcb();
      v10 = 47LL;
      if ( *v6 == 1 )
        v10 = 31LL;
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      result = HalRequestIpiSpecifyVector(0LL, v6 + 8, v10);
    }
    if ( v6[1] == 2 )
    {
      *v8 = 2097153LL;
      result = (__int64)memset(v8 + 1, 0, 0x100uLL);
    }
    v6[1] = 0;
    *((_DWORD *)v6 + 1) = 0xFFFF;
  }
  return result;
}
