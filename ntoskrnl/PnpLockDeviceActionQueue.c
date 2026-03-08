/*
 * XREFs of PnpLockDeviceActionQueue @ 0x1403BDF7C
 * Callers:
 *     IoControlPnpDeviceActionQueue @ 0x1403BDF5C (IoControlPnpDeviceActionQueue.c)
 *     IoBuildPoDeviceNotifyList @ 0x140A9B078 (IoBuildPoDeviceNotifyList.c)
 *     PipInitializeCoreDriversByGroup @ 0x140B5780C (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x140B57F78 (IopInitializeBootDrivers.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406CB944 (PpDevNodeLockTree.c)
 */

__int64 PnpLockDeviceActionQueue()
{
  unsigned __int64 v0; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v5; // eax
  bool v6; // zf
  struct _KPRCB *v7; // r9
  _DWORD *v8; // r8

  while ( 1 )
  {
    PpDevNodeLockTree(1LL);
    v0 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
    if ( !PnpEnumerationInProgress )
      break;
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
    PpDevNodeUnlockTree(1LL);
    KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
  }
  PnpEnumerationInProgress = 1;
  KeResetEvent(&PnpEnumerationLock);
  result = KxReleaseSpinLock((volatile signed __int64 *)&PnpSpinLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v0 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      v7 = KeGetCurrentPrcb();
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
      v8 = v7->SchedulerAssist;
      v6 = ((unsigned int)result & v8[5]) == 0;
      v8[5] &= result;
      if ( v6 )
        result = KiRemoveSystemWorkPriorityKick(v7);
    }
  }
  __writecr8(v0);
  return result;
}
