/*
 * XREFs of KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14022C490
 * Callers:
 *     MiDeleteClusterSection @ 0x140280A60 (MiDeleteClusterSection.c)
 *     CcSerializeWithLazyWriter @ 0x1403EFCC4 (CcSerializeWithLazyWriter.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403F50CC (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePageMovesComplete @ 0x1403F63A0 (MiLargePageMovesComplete.c)
 *     MiLargePagePromote @ 0x1403F6418 (MiLargePagePromote.c)
 *     MiUnlinkNodeLargePages @ 0x1403F6768 (MiUnlinkNodeLargePages.c)
 *     ExShareAddressSpaceWithDevice @ 0x1405B71C0 (ExShareAddressSpaceWithDevice.c)
 *     PnprMirrorMarkedPages @ 0x1409AE16C (PnprMirrorMarkedPages.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022E810 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051630C (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v6; // eax

  LockHandle->LockQueue.Lock = SpinLock;
  LockHandle->LockQueue.Next = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v6 = SchedulerAssist[6];
      SchedulerAssist[6] = v6 + 1;
      if ( v6 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(LockHandle, SpinLock);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)SpinLock, (__int64)LockHandle) )
  {
    KxWaitForLockOwnerShip(LockHandle);
  }
}
