/*
 * XREFs of MiEmptyDecayClusterTimers @ 0x14033AE10
 * Callers:
 *     MiWorkingSetManager @ 0x14033BC70 (MiWorkingSetManager.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x140217870 (MiUnlinkPageFromList.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140253F54 (KiQueryUnbiasedInterruptTime.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     MiRemoveDecayClusterTimer @ 0x140303788 (MiRemoveDecayClusterTimer.c)
 *     MiRelinkStandbyPage @ 0x14033AFE8 (MiRelinkStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiEmptyDecayClusterTimers(__int64 a1)
{
  __int64 result; // rax
  char v3; // r14
  __int64 v4; // r14
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // rax
  ULONG_PTR v7; // rdx
  ULONG_PTR v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int v12; // ebx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v16; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  result = KiQueryUnbiasedInterruptTime();
  if ( (unsigned __int64)(result - *(_QWORD *)(a1 + 4832)) >= 0x989680 )
  {
    v3 = *(_DWORD *)(a1 + 4824) + 1;
    *(_QWORD *)(a1 + 4832) = result;
    v4 = v3 & 3;
    result = *(_QWORD *)(a1 + 8 * v4 + 4792) >> 33;
    if ( result != 0x7FFFFFFF )
    {
      while ( 1 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 2664);
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 2664));
        v6 = *(_QWORD *)(a1 + 8LL * (unsigned int)v4 + 4792) >> 33;
        if ( v6 == 0x7FFFFFFF )
          break;
        v7 = v6 + qword_140C4E9A0;
        v8 = 48 * (v6 + qword_140C4E9A0) - 0x58000000000LL;
        v9 = *(_QWORD *)(v8 + 16);
        if ( qword_140C4DF40 && (v9 & 0x10) == 0 )
          v9 &= ~qword_140C4DF40;
        v10 = (v9 >> 12) & 0xFFFFFFFFFLL;
        if ( v10 == v7 )
        {
          MiUnlinkPageFromList(v8, 1);
          *(_BYTE *)(v8 + 35) &= ~8u;
          MiRemoveDecayClusterTimer(v8);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
        else
        {
          v11 = 48 * v10 - 0x58000000000LL;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          }
          else
          {
            v12 = *(_BYTE *)(v11 + 35) & 7;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            MiRelinkStandbyPage(v11, v12);
            _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v14 = KeGetCurrentIrql();
            if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v16 = CurrentPrcb->SchedulerAssist;
              v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v18 = (v17 & v16[5]) == 0;
              v16[5] &= v17;
              if ( v18 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v19 = KeGetCurrentIrql();
          if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
          {
            v20 = KeGetCurrentPrcb();
            v21 = v20->SchedulerAssist;
            v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v18 = (v22 & v21[5]) == 0;
            v21[5] &= v22;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(v20);
          }
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
    *(_DWORD *)(a1 + 4824) = v4;
  }
  return result;
}
