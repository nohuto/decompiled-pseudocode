/*
 * XREFs of ExpTryToAcquireResourceExclusiveLite @ 0x140608B54
 * Callers:
 *     ExTryToAcquireResourceExclusiveLite @ 0x1406086B0 (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpTryAcquireResourceExclusive @ 0x1403C4DA0 (ExpTryAcquireResourceExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1405FE2B8 (PerfLogExecutiveResourceAcquire.c)
 */

char __fastcall ExpTryToAcquireResourceExclusiveLite(__int64 a1)
{
  unsigned int v2; // esi
  struct _KTHREAD *CurrentThread; // r14
  int v4; // r12d
  int v5; // ebp
  int v6; // r15d
  char v7; // di
  int v8; // ecx
  unsigned int v9; // eax
  unsigned __int64 OldIrql; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE v17[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v17, 0, 24);
  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = DWORD1(PerfGlobalGroupMask) & 0x20000;
  v6 = 65537;
  __incgsdword(0x8AE0u);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), v17);
  v7 = ExpTryAcquireResourceExclusive(a1);
  if ( v7 )
  {
    v8 = *(_DWORD *)(a1 + 56) & 7;
    *(_QWORD *)(a1 + 48) = CurrentThread;
    *(_DWORD *)(a1 + 56) = v8 | 8;
    if ( v5 )
    {
      v2 = 1;
      v6 = 65569;
      v4 = *(_DWORD *)(a1 + 68);
    }
  }
  else if ( *(char *)(a1 + 26) < 0 && *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
  {
    v9 = *(_DWORD *)(a1 + 56) + 8;
    *(_DWORD *)(a1 + 56) = v9;
    if ( v5 )
    {
      v4 = *(_DWORD *)(a1 + 68);
      v2 = v9 >> 3;
      v6 = 65585;
    }
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)v17);
  OldIrql = v17[0].OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v17[0].OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << (v17[0].OldIrql + 1));
      v15 = (v14 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  if ( v7 )
  {
    __incgsdword(0x8AE4u);
    __incgsdword(0x8A64u);
  }
  if ( v5 )
    PerfLogExecutiveResourceAcquire(v6, a1, v2, v4);
  return v7;
}
