/*
 * XREFs of VrpDereferenceDiffHiveEntry @ 0x140738160
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1407375CC (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x1407379FC (VrpUnloadDifferencingHive.c)
 * Callees:
 *     ExfReleasePushLock @ 0x140238E10 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     VrpDereferenceDiffHiveEntryWithLock @ 0x140738258 (VrpDereferenceDiffHiveEntryWithLock.c)
 */

char __fastcall VrpDereferenceDiffHiveEntry(_QWORD *P)
{
  signed __int64 v2; // rax
  signed __int64 i; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  signed __int8 v6; // cf
  __int64 v7; // rdi
  signed __int64 v8; // rdx
  ULONG_PTR v9; // rtt
  signed __int64 v10; // rtt

  _m_prefetchw(P + 2);
  v2 = P[2];
  for ( i = v2 - 1; i > 0; i = v2 - 1 )
  {
    v10 = v2;
    v2 = _InterlockedCompareExchange64(P + 2, i, v2);
    if ( v10 == v2 )
      return v2;
  }
  if ( i )
    __fastfail(0xEu);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((__int64)&gLoadedDiffHivesLock, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&gLoadedDiffHivesLock, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&gLoadedDiffHivesLock, v5, (__int64)&gLoadedDiffHivesLock);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  VrpDereferenceDiffHiveEntryWithLock(P);
  _m_prefetchw(&gLoadedDiffHivesLock);
  v8 = gLoadedDiffHivesLock - 16;
  if ( (gLoadedDiffHivesLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v8 = 0LL;
  if ( (gLoadedDiffHivesLock & 2) != 0
    || (v9 = gLoadedDiffHivesLock,
        v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&gLoadedDiffHivesLock, v8, gLoadedDiffHivesLock)) )
  {
    ExfReleasePushLock(&gLoadedDiffHivesLock);
  }
  KeAbPostRelease((ULONG_PTR)&gLoadedDiffHivesLock);
  LOBYTE(v2) = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v2;
}
