/*
 * XREFs of KeReleaseInStackQueuedSpinLockForDpc @ 0x14056F0C0
 * Callers:
 *     KeInsertByKeyDeviceQueue @ 0x140457FE0 (KeInsertByKeyDeviceQueue.c)
 *     KeInsertDeviceQueue @ 0x140570C90 (KeInsertDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x140570D20 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x140570E00 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     KeRemoveDeviceQueue @ 0x140570ED0 (KeRemoveDeviceQueue.c)
 *     DifKeReleaseInStackQueuedSpinLockForDpcWrapper @ 0x1405E2490 (DifKeReleaseInStackQueuedSpinLockForDpcWrapper.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLockForDpc(PKLOCK_QUEUE_HANDLE LockHandle)
{
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf

  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)LockHandle);
    OldIrql = LockHandle->OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
        v7 = (v6 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v6;
        if ( v7 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
  }
  else
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)LockHandle);
  }
}
