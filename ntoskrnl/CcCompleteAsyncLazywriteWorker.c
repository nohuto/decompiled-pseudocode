/*
 * XREFs of CcCompleteAsyncLazywriteWorker @ 0x140538D80
 * Callers:
 *     CcCompleteAsyncLazywriteWorkerThread @ 0x140538F10 (CcCompleteAsyncLazywriteWorkerThread.c)
 * Callees:
 *     CcFindNextWorkQueueEntry @ 0x14021746C (CcFindNextWorkQueueEntry.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     CcCompleteAsyncWriteBehind @ 0x140539048 (CcCompleteAsyncWriteBehind.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CcCompleteAsyncLazywriteWorker(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v2; // r8
  __int64 v3; // rsi
  KSPIN_LOCK *v4; // r14
  __int64 v5; // rcx
  struct _SLIST_ENTRY *NextWorkQueueEntry; // r15
  unsigned __int64 OldIrql; // rbp
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  unsigned __int64 v13; // rbx
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  _DWORD *v16; // r8
  int v17; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 40);
    v2 = *(_QWORD *)(a1 + 56);
    v3 = *(_QWORD *)(a1 + 72);
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( v1 < *(_DWORD *)(*(_QWORD *)(a1 + 64) + 1596LL) )
    {
      v4 = (KSPIN_LOCK *)(v2 + 832);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 832), &LockHandle);
      while ( *(_QWORD *)(v3 + 424) != v3 + 424 )
      {
        NextWorkQueueEntry = (struct _SLIST_ENTRY *)CcFindNextWorkQueueEntry(v5, v3, (_QWORD *)(v3 + 424));
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v11 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v12 = (v11 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v11;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(OldIrql);
        CcCompleteAsyncWriteBehind(NextWorkQueueEntry);
        KeAcquireInStackQueuedSpinLock(v4, &LockHandle);
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      v13 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        v14 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && LockHandle.OldIrql <= 0xFu && v14 >= 2u )
        {
          v15 = KeGetCurrentPrcb();
          v16 = v15->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v12 = (v17 & v16[5]) == 0;
          v16[5] &= v17;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(v15);
        }
      }
      __writecr8(v13);
    }
  }
}
