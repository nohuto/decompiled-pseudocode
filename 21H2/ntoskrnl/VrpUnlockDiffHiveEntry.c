/*
 * XREFs of VrpUnlockDiffHiveEntry @ 0x1405D6144
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1405D5E44 (VrpLoadDifferencingHive.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 */

_QWORD *__fastcall VrpUnlockDiffHiveEntry(__int64 a1)
{
  ULONG_PTR v1; // rbx
  char v2; // al

  v1 = a1 + 24;
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(a1 + 24);
  KeAbPostRelease(v1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
