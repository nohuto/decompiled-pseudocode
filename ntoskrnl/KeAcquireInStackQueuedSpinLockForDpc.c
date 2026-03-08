/*
 * XREFs of KeAcquireInStackQueuedSpinLockForDpc @ 0x14056F040
 * Callers:
 *     KeInsertByKeyDeviceQueue @ 0x140457FE0 (KeInsertByKeyDeviceQueue.c)
 *     KeInsertDeviceQueue @ 0x140570C90 (KeInsertDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x140570D20 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x140570E00 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     KeRemoveDeviceQueue @ 0x140570ED0 (KeRemoveDeviceQueue.c)
 *     DifKeAcquireInStackQueuedSpinLockForDpcWrapper @ 0x1405E0030 (DifKeAcquireInStackQueuedSpinLockForDpcWrapper.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockForDpc(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    KeAcquireInStackQueuedSpinLock(SpinLock, LockHandle);
  else
    KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, LockHandle);
}
