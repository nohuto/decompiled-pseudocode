/*
 * XREFs of MiReplenishCombineResources @ 0x1402295AC
 * Callers:
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 * Callees:
 *     MiGetSlabPage @ 0x14025BA50 (MiGetSlabPage.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReplenishCombineResources(__int64 a1)
{
  _QWORD *v1; // r14
  __int64 result; // rax
  __int64 v4; // r9
  __int64 SlabPage; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rcx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_QWORD **)a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !*(_QWORD *)(a1 + 296) )
  {
    v6 = 0LL;
    KeAcquireInStackQueuedSpinLock(v1 + 11, &LockHandle);
    v7 = v1 + 9;
    v8 = (__int64 *)v1[9];
    if ( v8 != v1 + 9 )
    {
      v6 = v1[9];
      v9 = *v8;
      if ( *(_QWORD **)(v6 + 8) != v7 || *(_QWORD *)(v9 + 8) != v6 )
        __fastfail(3u);
      *v7 = v9;
      *(_QWORD *)(v9 + 8) = v7;
      ++*(_DWORD *)((v6 & 0xFFFFFFFFFFFFF000uLL) + 8);
    }
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( !v6 )
      return 3221226029LL;
    *(_QWORD *)(a1 + 296) = v6;
  }
  if ( *(_QWORD *)(a1 + 304) )
    return 0LL;
  v4 = a1 + 312;
  if ( *(_QWORD *)(a1 + 312) )
    v4 = 0LL;
  SlabPage = MiGetSlabPage(
               *v1,
               5,
               *(_DWORD *)(a1 + 332) | (unsigned int)_InterlockedExchangeAdd(
                                                       *(volatile signed __int32 **)(a1 + 320),
                                                       1u) & *(_DWORD *)(a1 + 328),
               5,
               v4,
               0);
  if ( SlabPage != -1 )
  {
    *(_QWORD *)(a1 + 304) = 48 * SlabPage - 0x220000000000LL;
    return 0LL;
  }
  result = 3221226029LL;
  if ( *(_QWORD *)(a1 + 312) <= 1uLL )
    return 3221225626LL;
  return result;
}
