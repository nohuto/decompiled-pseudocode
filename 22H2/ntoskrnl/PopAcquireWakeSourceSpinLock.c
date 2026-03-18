/*
 * XREFs of PopAcquireWakeSourceSpinLock @ 0x14058E45C
 * Callers:
 *     PopHandleWakeSources @ 0x140AA0F1C (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x140AA1168 (PopNewWakeInfo.c)
 *     PopProcessDeviceWakeSource @ 0x140AA1244 (PopProcessDeviceWakeSource.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquireWakeSourceSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, LockHandle);
}
