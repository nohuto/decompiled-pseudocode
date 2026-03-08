/*
 * XREFs of KiAbPropagateBoosts @ 0x1402395C0
 * Callers:
 *     KiProcessDeferredReadyList @ 0x140226BD0 (KiProcessDeferredReadyList.c)
 *     KiAbDeferredProcessingWorker @ 0x1402391E0 (KiAbDeferredProcessingWorker.c)
 *     KiAbProcessContextSwitch @ 0x140239508 (KiAbProcessContextSwitch.c)
 *     KiCheckForThreadDispatch @ 0x14023A168 (KiCheckForThreadDispatch.c)
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KeSetUserAffinityThread @ 0x1402B0FA0 (KeSetUserAffinityThread.c)
 *     KiReadyOutSwappedThreads @ 0x1402C02E8 (KiReadyOutSwappedThreads.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1402D9A60 (KiAbThreadUnboostCpuPriority.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402F2018 (KeSetSchedulingGroupRankBias.c)
 *     KiSetLegacyAffinityThread @ 0x1402FDE2C (KiSetLegacyAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x140301184 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x140301A54 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeBoostPriorityThread @ 0x140359A88 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140369500 (KeSetBasePriorityThread.c)
 *     KeSetCpuSetsProcess @ 0x140398C34 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x140399998 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403A8A60 (KeSetUserGroupAffinityThread.c)
 *     KiAbForceProcessLockEntry @ 0x1403C7578 (KiAbForceProcessLockEntry.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140572DE4 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140573640 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x1405755E4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiAbProcessThreadLocks @ 0x140239A40 (KiAbProcessThreadLocks.c)
 */

__int64 __fastcall KiAbPropagateBoosts(__int64 **a1, __int64 a2, __int64 a3)
{
  __int64 *i; // r9
  __int64 result; // rax
  volatile signed __int16 *v8; // rdi
  signed __int32 v9[8]; // [rsp+0h] [rbp-48h] BYREF

  for ( i = *a1; i; i = *a1 )
  {
    result = *i;
    v8 = (volatile signed __int16 *)(i - 101);
    *a1 = (__int64 *)*i;
    *i = 1LL;
    _InterlockedOr(v9, 0);
    if ( *((_BYTE *)i - 15) )
      result = KiAbProcessThreadLocks((_DWORD)v8, 0, 1, 0, a3, (__int64)a1, a2);
    _InterlockedDecrement16(v8 + 434);
  }
  return result;
}
