/*
 * XREFs of MiWakePageZeroing @ 0x14027F7A8
 * Callers:
 *     MiInsertLargePageInNodeList @ 0x14027F0D0 (MiInsertLargePageInNodeList.c)
 *     MiWorkingSetManager @ 0x14033BC70 (MiWorkingSetManager.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     MiWakeZeroingThreads @ 0x14027FA50 (MiWakeZeroingThreads.c)
 *     MiNodeLargeFreeZeroPages @ 0x1402994C0 (MiNodeLargeFreeZeroPages.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWakePageZeroing(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  __int64 result; // rax
  _BYTE *i; // rbx
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // r14
  unsigned __int64 OldIrql; // r14
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v15; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  _DWORD *v20; // r9
  int v21; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  CurrentIrql = 17;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 )
  {
    result = *(unsigned int *)(a1 + 4);
    if ( (result & 0x40) != 0 )
      return result;
    v6 = a2;
    v7 = a2 + 4544;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = v6 + 4544LL * (unsigned __int16)KeNumberNodes;
  }
  result = *(unsigned int *)(a1 + 6340);
  if ( !(_DWORD)result && v6 < v7 )
  {
    for ( i = (_BYTE *)(v6 + 4490); (unsigned __int64)(i - 4490) < v7; i += 4544 )
    {
      if ( !*i )
      {
        if ( !a2 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            a3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
            SchedulerAssist[5] = a3;
          }
LABEL_17:
          if ( *(_BYTE *)(a1 + 6297) )
          {
            v11 = *(_QWORD *)(i - 58);
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v11 + 24), &LockHandle);
            if ( !*i )
            {
              *i = 1;
              MiWakeZeroingThreads(v11, 2LL);
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            OldIrql = LockHandle.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v13 = KeGetCurrentIrql();
                if ( v13 <= 0xFu && LockHandle.OldIrql <= 0xFu && v13 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v15 = CurrentPrcb->SchedulerAssist;
                  v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                  v17 = (v16 & v15[5]) == 0;
                  a3 = (unsigned int)v16 & v15[5];
                  v15[5] = a3;
                  if ( v17 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
            }
            __writecr8(OldIrql);
          }
          else
          {
            LockHandle.LockQueue.Next = 0LL;
            LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 4928);
            KxAcquireQueuedSpinLock(&LockHandle, a1 + 4928, a3);
            if ( !*i )
            {
              *i = 1;
              KeSetEvent((PRKEVENT)(a1 + 6272), 0, 0);
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          }
          if ( !a2 )
          {
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v18 = KeGetCurrentIrql();
                if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
                {
                  v19 = KeGetCurrentPrcb();
                  v20 = v19->SchedulerAssist;
                  v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v17 = (v21 & v20[5]) == 0;
                  a3 = (unsigned int)v21 & v20[5];
                  v20[5] = a3;
                  if ( v17 )
                    KiRemoveSystemWorkPriorityKick(v19);
                }
              }
            }
            __writecr8(CurrentIrql);
          }
          goto LABEL_40;
        }
        if ( (unsigned __int64)MiNodeLargeFreeZeroPages(i - 4490, 4LL, 1LL) >= 0x400
          && (unsigned __int64)MiNodeLargeFreeZeroPages(i - 4490, 4LL, 0LL) < 0x100000 )
        {
          goto LABEL_17;
        }
      }
LABEL_40:
      result = 2LL;
    }
  }
  return result;
}
