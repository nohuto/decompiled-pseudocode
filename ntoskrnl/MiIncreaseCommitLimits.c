/*
 * XREFs of MiIncreaseCommitLimits @ 0x140392864
 * Callers:
 *     MiInitializeCommitment @ 0x140392394 (MiInitializeCommitment.c)
 *     MiInsertPartitionPages @ 0x140657EB8 (MiInsertPartitionPages.c)
 *     MiCreatePagingFile @ 0x140834F7C (MiCreatePagingFile.c)
 *     MiInsertPageFileInList @ 0x140835F30 (MiInsertPageFileInList.c)
 *     MiMapNewPfns @ 0x140A29C20 (MiMapNewPfns.c)
 *     MiExtendPagingFiles @ 0x140A2FD7C (MiExtendPagingFiles.c)
 *     MiFreePartitionPhysicalPages @ 0x140A41E90 (MiFreePartitionPhysicalPages.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUpdatePageFileList @ 0x140392600 (MiUpdatePageFileList.c)
 *     MiComputeCommitThresholds @ 0x140392978 (MiComputeCommitThresholds.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRestockOverCommit @ 0x140654060 (MiRestockOverCommit.c)
 */

__int64 __fastcall MiIncreaseCommitLimits(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v8; // ebp
  __int64 v10; // rcx
  unsigned __int64 OldIrql; // rbx
  __int64 v13; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // edx
  bool v18; // zf
  struct _KLOCK_QUEUE_HANDLE v19; // [rsp+20h] [rbp-28h] BYREF

  memset(&v19, 0, sizeof(v19));
  v8 = 1;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 16424), &v19);
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 16392) + a3) < *(_QWORD *)(a1 + 16392) )
  {
    v8 = 0;
  }
  else
  {
    if ( a2 )
    {
      if ( a4 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17576), a2);
      }
      else if ( *(_QWORD *)(a1 + 16440) )
      {
        v13 = MiRestockOverCommit(a1, a2);
        if ( a2 != v13 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17576), a2 - v13);
      }
      *(_QWORD *)(a1 + 17816) += a2;
    }
    if ( a3 )
      *(_QWORD *)(a1 + 16392) += a3;
    MiComputeCommitThresholds(a1);
    if ( a5 )
    {
      MiUpdatePageFileList(a5, 1);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17576), 2uLL);
      v10 = *(unsigned int *)(a1 + 17048);
      *(_QWORD *)(a1 + 8 * v10 + 17056) = a5;
      *(_DWORD *)(a1 + 17048) = v10 + 1;
    }
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v19);
  OldIrql = v19.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v19.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << (v19.OldIrql + 1));
      v18 = (v17 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v17;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return v8;
}
