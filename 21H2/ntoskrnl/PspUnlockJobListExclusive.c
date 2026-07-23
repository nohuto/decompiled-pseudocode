/*
 * XREFs of PspUnlockJobListExclusive @ 0x1406F7504
 * Callers:
 *     PspJobDelete @ 0x1402046D0 (PspJobDelete.c)
 *     NtCreateJobObject @ 0x1406F7090 (NtCreateJobObject.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 */

char __fastcall PspUnlockJobListExclusive(__int64 a1)
{
  char v2; // al

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspJobListLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(&PspJobListLock);
  KeAbPostRelease((ULONG_PTR)&PspJobListLock);
  return KiLeaveGuardedRegionUnsafe(a1);
}
