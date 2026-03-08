/*
 * XREFs of PopBsdUpdateWorker @ 0x140872C90
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x140302D08 (PopOkayToQueueNextWorkItem.c)
 *     PopBsdFlush @ 0x14073AE24 (PopBsdFlush.c)
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
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
