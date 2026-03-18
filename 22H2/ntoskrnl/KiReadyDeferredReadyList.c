/*
 * XREFs of KiReadyDeferredReadyList @ 0x140249C70
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     KiExitDispatcher @ 0x14023CD50 (KiExitDispatcher.c)
 *     KiSwapThread @ 0x14023F3D0 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x140240330 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240C70 (KiSearchForNewThreadOnProcessor.c)
 *     KeYieldExecution @ 0x1402469D0 (KeYieldExecution.c)
 *     KiDispatchInterrupt @ 0x140249510 (KiDispatchInterrupt.c)
 *     KeRemoveQueueEx @ 0x1402A9F20 (KeRemoveQueueEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E40 (KiProcessDeferredReadyList.c)
 *     KeSetBasePriorityThread @ 0x1402B9D70 (KeSetBasePriorityThread.c)
 *     KiRemoveBoostThread @ 0x1402BB220 (KiRemoveBoostThread.c)
 *     KiAbProcessContextSwitch @ 0x1402BBDE8 (KiAbProcessContextSwitch.c)
 *     KiAbApplyWakeupBoost @ 0x1402BC870 (KiAbApplyWakeupBoost.c)
 *     KiCheckForThreadDispatch @ 0x1402BCA48 (KiCheckForThreadDispatch.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140317CE0 (KiAbThreadUnboostCpuPriority.c)
 *     KiReadyOutSwappedThreads @ 0x14034CBF4 (KiReadyOutSwappedThreads.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036BAC8 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14036C524 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x14039C834 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x14039DDF8 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AA6BC (KeSetUserGroupAffinityThread.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1405752F4 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140575BD0 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577A9C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiDeferredReadySingleThread @ 0x14023A2B0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252640 (KiFlushSoftwareInterruptBatch.c)
 *     HalRequestIpiSpecifyVector @ 0x140254570 (HalRequestIpiSpecifyVector.c)
 *     KiSendSoftwareInterrupt @ 0x140318764 (KiSendSoftwareInterrupt.c)
 *     memset @ 0x140435400 (memset.c)
 */

__int64 __fastcall KiReadyDeferredReadyList(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  char v3; // r14
  unsigned __int8 *v6; // rsi
  __int64 result; // rax
  _QWORD *v8; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v10; // r8

  v2 = (_QWORD *)*a2;
  v3 = 0;
  if ( *a2 )
  {
    *a2 = *v2;
    do
    {
      KiDeferredReadySingleThread(a1, (unsigned __int64)(v2 - 27), (__int64)a2);
      v2 = (_QWORD *)*a2;
      ++v3;
      if ( *a2 )
        *a2 = *v2;
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
