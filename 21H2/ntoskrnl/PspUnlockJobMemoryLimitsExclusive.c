/*
 * XREFs of PspUnlockJobMemoryLimitsExclusive @ 0x14067DD08
 * Callers:
 *     PspChangeJobMemoryUsageByProcess @ 0x1405DB0D0 (PspChangeJobMemoryUsageByProcess.c)
 *     PspJobClose @ 0x140614EC0 (PspJobClose.c)
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 */

char __fastcall PspUnlockJobMemoryLimitsExclusive(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v4; // rbx
  char result; // al

  if ( a1 != a2 )
  {
    v4 = a1 + 1032;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1032), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1032);
    result = KeAbPostRelease(v4);
  }
  if ( a3 )
    return KiLeaveGuardedRegionUnsafe(a3);
  return result;
}
