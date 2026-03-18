/*
 * XREFs of PopBsdUpdateWorker @ 0x140875B50
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x14032ED60 (PopOkayToQueueNextWorkItem.c)
 *     PopBsdFlush @ 0x1407A69D4 (PopBsdFlush.c)
 */

void PopBsdUpdateWorker()
{
  int v0; // eax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  while ( 1 )
  {
    v0 = PopBsdUpdateRequests;
    PopBsdUpdateRequests = 0;
    if ( !v0 )
      break;
    PopBsdFlush(v0);
  }
  PopOkayToQueueNextWorkItem((__int64)&PopBsdUpdateWorkItem);
  PopReleaseRwLock(&PopBsdUpdateLock);
}
