/*
 * XREFs of CcUpdateSharedCacheMapFlag @ 0x14031195C
 * Callers:
 *     CcPurgeAndClearCacheSection @ 0x14026F814 (CcPurgeAndClearCacheSection.c)
 *     CcApplyLowIoPriorityToThread @ 0x140276988 (CcApplyLowIoPriorityToThread.c)
 *     CcUpdateReadHistory @ 0x14027A400 (CcUpdateReadHistory.c)
 *     CcCopyReadEx @ 0x1402A0DB0 (CcCopyReadEx.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1403116A8 (CcBoostLowPriorityWorkerThread.c)
 *     CcUnmapVacb @ 0x140637A98 (CcUnmapVacb.c)
 *     CcMapAndCopyFromCache @ 0x14063CC70 (CcMapAndCopyFromCache.c)
 *     CcMdlRead @ 0x140701480 (CcMdlRead.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x140293E80 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcUpdateSharedCacheMapFlag(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char v4; // di
  int v5; // esi
  __int64 Partition; // rax
  int v8; // eax
  int v9; // eax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = a3;
  v5 = a2;
  Partition = CcGetPartition((_QWORD *)a1, a2, a3, a4);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  v8 = *(_DWORD *)(a1 + 152);
  if ( v4 )
    v9 = v5 | v8;
  else
    v9 = ~v5 & v8;
  *(_DWORD *)(a1 + 152) = v9;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v14 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
