/*
 * XREFs of PopBsdFlushWorker @ 0x14097D620
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x140302D08 (PopOkayToQueueNextWorkItem.c)
 *     PopBsdFlush @ 0x14073AE24 (PopBsdFlush.c)
 */

__int64 PopBsdFlushWorker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  PopBsdFlush(7);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  return PopOkayToQueueNextWorkItem((__int64)&PopBsdFlushWorkItem);
}
