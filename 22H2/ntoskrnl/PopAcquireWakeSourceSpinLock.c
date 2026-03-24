/*
 * XREFs of PopAcquireWakeSourceSpinLock @ 0x14038B648
 * Callers:
 *     PopUpdateWakeSourceWorker @ 0x14056F120 (PopUpdateWakeSourceWorker.c)
 *     PopHandleWakeSources @ 0x140998400 (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x14099851C (PopNewWakeInfo.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquireWakeSourceSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, LockHandle);
}
