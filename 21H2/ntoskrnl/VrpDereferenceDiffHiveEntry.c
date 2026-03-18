/*
 * XREFs of VrpDereferenceDiffHiveEntry @ 0x140691330
 * Callers:
 *     VrpLoadDifferencingHive @ 0x140690FEC (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x1407F6200 (VrpUnloadDifferencingHive.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     VrpDereferenceDiffHiveEntryWithLock @ 0x1407F7018 (VrpDereferenceDiffHiveEntryWithLock.c)
 */

char __fastcall VrpDereferenceDiffHiveEntry(_QWORD *P)
{
  signed __int64 v2; // rax
  signed __int64 i; // rdx
  signed __int64 v4; // rtt
  struct _KTHREAD *CurrentThread; // rax

  _m_prefetchw(P + 2);
  v2 = P[2];
  for ( i = v2 - 1; i > 0; i = v2 - 1 )
  {
    v4 = v2;
    v2 = _InterlockedCompareExchange64(P + 2, i, v2);
    if ( v4 == v2 )
      return v2;
  }
  if ( i )
    __fastfail(0xEu);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  VrpDereferenceDiffHiveEntryWithLock(P);
  ExReleasePushLockEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  LOBYTE(v2) = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v2;
}
