/*
 * XREFs of PopAcquireWakeSourceSpinLock @ 0x14058BF2C
 * Callers:
 *     PopHandleWakeSources @ 0x140A9DD6C (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x140A9DFB8 (PopNewWakeInfo.c)
 *     PopProcessDeviceWakeSource @ 0x140A9E094 (PopProcessDeviceWakeSource.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquireWakeSourceSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, LockHandle);
}
