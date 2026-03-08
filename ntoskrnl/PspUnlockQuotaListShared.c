/*
 * XREFs of PspUnlockQuotaListShared @ 0x1402BECE8
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x140745228 (PspAssignProcessQuotaBlock.c)
 *     PspLookupProcessQuotaBlock @ 0x140745414 (PspLookupProcessQuotaBlock.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall PspUnlockQuotaListShared(__int64 a1, signed __int64 *a2)
{
  if ( _InterlockedCompareExchange64(a2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2);
  KeAbPostRelease((ULONG_PTR)a2);
  return KeLeaveCriticalRegionThread(a1);
}
