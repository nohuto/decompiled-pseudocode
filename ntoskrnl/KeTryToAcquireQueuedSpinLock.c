/*
 * XREFs of KeTryToAcquireQueuedSpinLock @ 0x14056ED60
 * Callers:
 *     DifKeTryToAcquireQueuedSpinLockWrapper @ 0x1405E3C70 (DifKeTryToAcquireQueuedSpinLockWrapper.c)
 * Callees:
 *     KxTryToAcquireQueuedSpinLock @ 0x1402DE86C (KxTryToAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

LOGICAL __stdcall KeTryToAcquireQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number, PKIRQL OldIrql)
{
  KIRQL CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v5; // eax
  char *v6; // rcx
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v5 = 4;
    if ( CurrentIrql != 2 )
      v5 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v5;
  }
  v6 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * Number;
  if ( (unsigned int)KxTryToAcquireQueuedSpinLock((signed __int64)v6, *((_DWORD **)v6 + 1)) )
  {
    *OldIrql = CurrentIrql;
    return 1;
  }
  else
  {
    if ( KiIrqlFlags )
    {
      v7 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v11 = (v10 & v9[5]) == 0;
        v9[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    return 0;
  }
}
