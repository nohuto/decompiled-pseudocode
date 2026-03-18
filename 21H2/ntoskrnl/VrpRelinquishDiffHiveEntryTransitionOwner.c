/*
 * XREFs of VrpRelinquishDiffHiveEntryTransitionOwner @ 0x1406913B4
 * Callers:
 *     VrpLoadDifferencingHive @ 0x140690FEC (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x1407F6200 (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWakeWaitChain @ 0x14035B8F4 (KeWakeWaitChain.c)
 */

char __fastcall VrpRelinquishDiffHiveEntryTransitionOwner(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  ULONG_PTR v4; // rbx

  v4 = a1 + 40;
  *(_QWORD *)(a1 + 40) = 0LL;
  KeWakeWaitChain((__int64 **)(a1 + 48), 0LL, 0LL, a4);
  KeAbPostRelease(v4);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
