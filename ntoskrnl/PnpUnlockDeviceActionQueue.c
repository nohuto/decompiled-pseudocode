/*
 * XREFs of PnpUnlockDeviceActionQueue @ 0x1403BDFF4
 * Callers:
 *     IoControlPnpDeviceActionQueue @ 0x1403BDF5C (IoControlPnpDeviceActionQueue.c)
 *     IoFreePoDeviceNotifyList @ 0x140A9B6D4 (IoFreePoDeviceNotifyList.c)
 *     PipInitializeCoreDriversByGroup @ 0x140B5780C (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x140B57F78 (IopInitializeBootDrivers.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 */

__int64 PnpUnlockDeviceActionQueue()
{
  unsigned __int64 v0; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v5; // eax
  bool v6; // zf

  v0 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  if ( (__int64 *)PnpEnumerationRequestList == &PnpEnumerationRequestList )
  {
    PnpEnumerationInProgress = 0;
    KeSetEvent(&PnpEnumerationLock, 0, 0);
  }
  else
  {
    PnpDeviceEnumerationWorkItem.Parameter = 0LL;
    PnpDeviceEnumerationWorkItem.List.Flink = 0LL;
    PnpDeviceEnumerationWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PnpDeviceActionWorker;
    ExQueueWorkItem(&PnpDeviceEnumerationWorkItem, DelayedWorkQueue);
  }
  KxReleaseSpinLock((volatile signed __int64 *)&PnpSpinLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v0 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
      v6 = (v5 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v5;
      if ( v6 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v0);
  return PpDevNodeUnlockTree(1LL);
}
