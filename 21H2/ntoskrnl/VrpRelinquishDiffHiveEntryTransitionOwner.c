/*
 * XREFs of VrpRelinquishDiffHiveEntryTransitionOwner @ 0x1405D65C0
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1405D5E44 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x1405D6264 (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeWakeWaitChain @ 0x14023896C (KeWakeWaitChain.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 */

_QWORD *__fastcall VrpRelinquishDiffHiveEntryTransitionOwner(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  v1 = a1 + 40;
  *(_QWORD *)(a1 + 40) = 0LL;
  KeWakeWaitChain((_QWORD *)(a1 + 48), 0, 0);
  KeAbPostRelease(v1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v2, v3, v4);
}
