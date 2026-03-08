/*
 * XREFs of CcUpdateSharedCacheMapFlag @ 0x1402E0460
 * Callers:
 *     CcUpdateReadHistory @ 0x14020CF04 (CcUpdateReadHistory.c)
 *     CcApplyLowIoPriorityToThread @ 0x140219DB8 (CcApplyLowIoPriorityToThread.c)
 *     CcCopyReadEx @ 0x14021E070 (CcCopyReadEx.c)
 *     CcPurgeAndClearCacheSection @ 0x14029FCE4 (CcPurgeAndClearCacheSection.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140300D74 (CcBoostLowPriorityWorkerThread.c)
 *     CcMdlRead @ 0x1406A3B50 (CcMdlRead.c)
 *     CcUnmapVacb @ 0x1406A7150 (CcUnmapVacb.c)
 *     CcMapAndCopyFromCache @ 0x1406A7510 (CcMapAndCopyFromCache.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcUpdateSharedCacheMapFlag(__int64 a1, int a2, char a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf
  struct _KLOCK_QUEUE_HANDLE v12; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 536);
  memset(&v12, 0, sizeof(v12));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 768), &v12);
  if ( a3 )
    *(_DWORD *)(a1 + 152) |= a2;
  else
    *(_DWORD *)(a1 + 152) &= ~a2;
  result = KxReleaseQueuedSpinLock(&v12);
  OldIrql = v12.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && v12.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (v12.OldIrql + 1));
      v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v11 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
