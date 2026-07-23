/*
 * XREFs of VrpDereferenceDiffHiveEntry @ 0x1405D642C
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1405D5E44 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x1405D6264 (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     VrpDereferenceDiffHiveEntryWithLock @ 0x1405D64B0 (VrpDereferenceDiffHiveEntryWithLock.c)
 */

_QWORD *__fastcall VrpDereferenceDiffHiveEntry(_QWORD *P)
{
  _QWORD *result; // rax
  signed __int64 i; // rdx
  _QWORD *v4; // rtt
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  _m_prefetchw(P + 2);
  result = (_QWORD *)P[2];
  for ( i = (signed __int64)result - 1; i > 0; i = (signed __int64)result - 1 )
  {
    v4 = result;
    result = (_QWORD *)_InterlockedCompareExchange64(P + 2, i, (signed __int64)result);
    if ( v4 == result )
      return result;
  }
  if ( i )
    __fastfail(0xEu);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  VrpDereferenceDiffHiveEntryWithLock(P);
  ExReleasePushLockEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
}
