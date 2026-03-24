/*
 * XREFs of VrpRelinquishDiffHiveEntryTransitionOwner @ 0x1405D65C0
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1405D5E44 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x1405D6264 (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KeWakeWaitChain @ 0x1402BA75C (KeWakeWaitChain.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 */

_QWORD *__fastcall VrpRelinquishDiffHiveEntryTransitionOwner(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  ULONG_PTR v4; // rbx

  v4 = a1 + 40;
  *(_QWORD *)(a1 + 40) = 0LL;
  KeWakeWaitChain((__int64 **)(a1 + 48), 0LL, 0LL, a4);
  KeAbPostRelease(v4);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
