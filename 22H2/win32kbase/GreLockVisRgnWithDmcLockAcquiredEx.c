/*
 * XREFs of GreLockVisRgnWithDmcLockAcquiredEx @ 0x1C014B800
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C003A230 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C007EE00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 GreLockVisRgnWithDmcLockAcquiredEx()
{
  EngAcquireSemaphore(ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemGreLock", (int)ghsemGreLock, 2);
  EngAcquireSemaphore(ghsemDCVisRgn);
  return EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDCVisRgn", (int)ghsemDCVisRgn, 3);
}
