/*
 * XREFs of KeAcquireInStackQueuedSpinLockForDpc @ 0x1405716B0
 * Callers:
 *     KeInsertByKeyDeviceQueue @ 0x14045FF80 (KeInsertByKeyDeviceQueue.c)
 *     KeInsertDeviceQueue @ 0x140573310 (KeInsertDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x1405733A0 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x140573480 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     KeRemoveDeviceQueue @ 0x140573550 (KeRemoveDeviceQueue.c)
 *     DifKeAcquireInStackQueuedSpinLockForDpcWrapper @ 0x1405E24E0 (DifKeAcquireInStackQueuedSpinLockForDpcWrapper.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14029CAB0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockForDpc(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    KeAcquireInStackQueuedSpinLock(SpinLock, LockHandle);
  else
    KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, LockHandle);
}
