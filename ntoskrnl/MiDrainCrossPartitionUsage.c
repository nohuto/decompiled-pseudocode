/*
 * XREFs of MiDrainCrossPartitionUsage @ 0x14065745C
 * Callers:
 *     MiDeletePartition @ 0x140626F80 (MiDeletePartition.c)
 * Callees:
 *     MiDecrementControlAreaCount @ 0x1402150F8 (MiDecrementControlAreaCount.c)
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x14028E0C0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     CcExitPartition @ 0x140536FC8 (CcExitPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140622788 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiDecrementCloneHeaderCount @ 0x14066182C (MiDecrementCloneHeaderCount.c)
 */

void __fastcall MiDrainCrossPartitionUsage(__int64 a1)
{
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf
  unsigned __int64 v8; // rsi
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  int v13; // eax
  _DWORD *v14; // r8
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v15; // rcx
  struct _KEVENT Object; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF

  Object.Header.LockNV = 393216;
  Object.Header.SignalState = 0;
  Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
  Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C67000, &LockHandle);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 1408));
  *(_DWORD *)(a1 + 4) |= 1u;
  *(_QWORD *)(a1 + 2416) = &Object;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1408));
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v6 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v7 = (v6 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v6;
      if ( v7 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  MiDecrementControlAreaCount(a1, (volatile signed __int64 *)(a1 + 1424));
  MiDecrementControlAreaCount(a1, (volatile signed __int64 *)(a1 + 1416));
  MiMakeUnusedSegmentDeleteOnClose(a1);
  CcExitPartition(*(_QWORD **)(a1 + 200), 0);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1408));
  v9 = (_QWORD *)(a1 + 2344);
  v10 = 7LL;
  while ( !*v9 )
  {
    ++v10;
    v9 += 4;
    if ( v10 >= 9 )
      goto LABEL_13;
  }
  KeResetEvent(&Object);
  *(_QWORD *)(a1 + 2408) = &Object;
LABEL_13:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1408));
  if ( KiIrqlFlags )
  {
    v11 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v11 >= 2u )
    {
      v12 = KeGetCurrentPrcb();
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v14 = v12->SchedulerAssist;
      v7 = (v13 & v14[5]) == 0;
      v14[5] &= v13;
      if ( v7 )
        KiRemoveSystemWorkPriorityKick((__int64)v12);
    }
  }
  __writecr8(v8);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  KeResetEvent(&Object);
  *(_QWORD *)(a1 + 2424) = &Object;
  MiDecrementCloneHeaderCount(a1);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v15 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 2432);
  if ( v15 )
    ExWaitForRundownProtectionReleaseCacheAware(v15);
}
