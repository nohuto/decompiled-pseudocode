/*
 * XREFs of PfpPrefetchSharedCleanup @ 0x140684B04
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1406846E8 (PfpPrefetchRequestPerform.c)
 *     PfSnCleanupPrefetchHeader @ 0x14075D3C0 (PfSnCleanupPrefetchHeader.c)
 *     PfpQueryFileExtentsRequest @ 0x14097E5A0 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     PsSetCurrentThreadPrefetching @ 0x14075CDC0 (PsSetCurrentThreadPrefetching.c)
 */

_QWORD *__fastcall PfpPrefetchSharedCleanup(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax
  int v5; // eax
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 128) )
    KeAbPostRelease(a1);
  if ( *(_QWORD *)(a1 + 136) )
    KeAbPostRelease((ULONG_PTR)&PfGlobals);
  if ( *(_QWORD *)a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C651E0, 0LL);
    v3 = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v4 = *(_QWORD **)(a1 + 8), *v4 != a1) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C651E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C651E0);
    KeAbPostRelease((ULONG_PTR)&qword_140C651E0);
    KeLeaveCriticalRegion();
  }
  v5 = *(_DWORD *)(a1 + 68);
  if ( (v5 & 1) != 0 )
  {
    ExReleaseRundownProtection_0(&stru_140C651D0);
    *(_DWORD *)(a1 + 68) &= ~1u;
    v5 = *(_DWORD *)(a1 + 68);
  }
  if ( *(_QWORD *)(a1 + 16) )
    PsSetCurrentThreadPrefetching((v5 & 2) != 0);
  result = (_QWORD *)*(unsigned int *)(a1 + 68);
  if ( ((unsigned __int8)result & 8) != 0 )
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return result;
}
