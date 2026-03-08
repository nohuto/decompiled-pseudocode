/*
 * XREFs of MiReduceCommitLimits @ 0x140653F84
 * Callers:
 *     MiAttemptPageFileReductionApc @ 0x140635960 (MiAttemptPageFileReductionApc.c)
 *     MiInsertPartitionPages @ 0x140657EB8 (MiInsertPartitionPages.c)
 *     MiCreatePagingFile @ 0x140834F7C (MiCreatePagingFile.c)
 *     MiMapNewPfns @ 0x140A29C20 (MiMapNewPfns.c)
 *     MiRemovePhysicalMemory @ 0x140A29F5C (MiRemovePhysicalMemory.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     MiComputeCommitThresholds @ 0x140392978 (MiComputeCommitThresholds.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReduceCommitLimits(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE v11; // [rsp+20h] [rbp-28h] BYREF

  memset(&v11, 0, sizeof(v11));
  KeAcquireInStackQueuedSpinLock(a1 + 2053, &v11);
  if ( a3 )
    a1[2049] -= a3;
  if ( a2 )
    a1[2227] -= a2;
  MiComputeCommitThresholds(a1);
  result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&v11);
  OldIrql = v11.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && v11.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (v11.OldIrql + 1));
      v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v10 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
