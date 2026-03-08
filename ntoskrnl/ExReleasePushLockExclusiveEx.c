/*
 * XREFs of ExReleasePushLockExclusiveEx @ 0x140262B10
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

char __fastcall ExReleasePushLockExclusiveEx(volatile signed __int64 *BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  char result; // al

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  result = _InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6;
  if ( result == 2 )
    result = ExfTryToWakePushLock(BugCheckParameter2);
  if ( (v2 & 2) == 0 )
    return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return result;
}
