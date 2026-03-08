/*
 * XREFs of VrpRelinquishDiffHiveEntryTransitionOwner @ 0x140738090
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1407375CC (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x1407379FC (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     KeWakeWaitChain @ 0x14033AF30 (KeWakeWaitChain.c)
 */

char __fastcall VrpRelinquishDiffHiveEntryTransitionOwner(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 40;
  *(_QWORD *)(a1 + 40) = 0LL;
  KeWakeWaitChain((volatile signed __int32 **)(a1 + 48), 0, 0);
  KeAbPostRelease(v1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
