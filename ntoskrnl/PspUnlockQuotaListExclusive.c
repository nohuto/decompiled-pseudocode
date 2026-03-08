/*
 * XREFs of PspUnlockQuotaListExclusive @ 0x1403B06EC
 * Callers:
 *     PspLookupProcessQuotaBlock @ 0x140745414 (PspLookupProcessQuotaBlock.c)
 *     PspRemoveQuotaBlock @ 0x1409AB0BC (PspRemoveQuotaBlock.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

char __fastcall PspUnlockQuotaListExclusive(__int64 a1, volatile signed __int64 *a2)
{
  char v4; // al

  v4 = _InterlockedExchangeAdd64(a2, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock(a2);
  KeAbPostRelease((ULONG_PTR)a2);
  return KeLeaveCriticalRegionThread(a1);
}
