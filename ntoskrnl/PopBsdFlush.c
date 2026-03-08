/*
 * XREFs of PopBsdFlush @ 0x14073AE24
 * Callers:
 *     PopBsdHandleRequest @ 0x1402B8B24 (PopBsdHandleRequest.c)
 *     PopBsdUpdateWorker @ 0x140872C90 (PopBsdUpdateWorker.c)
 *     PopBsdFlushWorker @ 0x14097D620 (PopBsdFlushWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     PopWriteBsdPoInfo @ 0x1402B9F3C (PopWriteBsdPoInfo.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

LONG __fastcall PopBsdFlush(char a1)
{
  LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  Timeout.QuadPart = 0LL;
  if ( !PopBsdFlushInactiveEvent.Header.SignalState
    || KeWaitForSingleObject(&PopBsdFlushInactiveEvent, Executive, 0, 0, &Timeout) < 0 )
  {
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
    KeWaitForSingleObject(&PopBsdFlushInactiveEvent, Executive, 0, 0, 0LL);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  }
  if ( (a1 & 1) != 0 )
    PopWriteBsdPoInfo(7u);
  if ( (a1 & 2) != 0 )
    PopWriteBsdPoInfo(0x10u);
  if ( (a1 & 4) != 0 )
    PopWriteBsdPoInfo(0xEu);
  return KeSetEvent(&PopBsdFlushInactiveEvent, 0, 0);
}
