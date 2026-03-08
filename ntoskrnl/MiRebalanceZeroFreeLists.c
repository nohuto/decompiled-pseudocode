/*
 * XREFs of MiRebalanceZeroFreeLists @ 0x14064F140
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     MiFreeZeroPagesNeeded @ 0x140464858 (MiFreeZeroPagesNeeded.c)
 *     MiPruneStandbyPages @ 0x140464A50 (MiPruneStandbyPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiRebalanceZeroFreeLists(__int64 a1)
{
  unsigned int i; // ebx
  unsigned int j; // edi
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    for ( j = 0; j < MmNumberOfChannels; ++j )
    {
      v4 = MiFreeZeroPagesNeeded(a1, i, j);
      if ( v4 )
        MiPruneStandbyPages(a1, i, j, v4);
    }
  }
  v5 = *(_QWORD *)(a1 + 200);
  KeAcquireInStackQueuedSpinLock(&qword_140C67000, &LockHandle);
  *(_QWORD *)(a1 + 16464) = 0LL;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  PsDereferencePartition(v5);
}
