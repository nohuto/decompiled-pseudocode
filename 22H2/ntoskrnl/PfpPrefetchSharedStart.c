/*
 * XREFs of PfpPrefetchSharedStart @ 0x14070BF54
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x14062E400 (PfSnAsyncPrefetchWorker.c)
 *     PfpPrefetchRequestPerform @ 0x14070AFA4 (PfpPrefetchRequestPerform.c)
 *     PfpQueryFileExtentsRequest @ 0x1408DFD5C (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     PsSetCurrentThreadPrefetching @ 0x140633190 (PsSetCurrentThreadPrefetching.c)
 */

__int64 __fastcall PfpPrefetchSharedStart(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // esi
  struct _KTHREAD *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  *(_DWORD *)(BugCheckParameter2 + 68) |= 8u;
  *(_QWORD *)(BugCheckParameter2 + 16) = KeGetCurrentThread();
  *(_DWORD *)(BugCheckParameter2 + 68) ^= (*(_DWORD *)(BugCheckParameter2 + 68) ^ (2 * PsSetCurrentThreadPrefetching(1u))) & 2;
  v3 = 0;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&stru_140C50400) )
    return (unsigned int)-1073741127;
  *(_DWORD *)(BugCheckParameter2 + 68) |= 1u;
  v4 = KeGetCurrentThread();
  --v4->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50410, 0LL);
  if ( (dword_140C50428 & 1) == 0 )
  {
    v5 = qword_140C50418;
    if ( *(__int64 **)(qword_140C50418 + 8) != &qword_140C50418 )
      __fastfail(3u);
    *(_QWORD *)BugCheckParameter2 = qword_140C50418;
    *(_QWORD *)(BugCheckParameter2 + 8) = &qword_140C50418;
    *(_QWORD *)(v5 + 8) = BugCheckParameter2;
    qword_140C50418 = BugCheckParameter2;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50410, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C50410);
  KeAbPostRelease((ULONG_PTR)&qword_140C50410);
  KeLeaveCriticalRegion();
  if ( *(_QWORD *)BugCheckParameter2 )
  {
    v6 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
    *(_QWORD *)(BugCheckParameter2 + 128) = v6;
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    v7 = KeAbPreAcquire((ULONG_PTR)&PfGlobals, 0LL, 0);
    *(_QWORD *)(BugCheckParameter2 + 136) = v7;
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
  }
  else
  {
    return (unsigned int)-1073741127;
  }
  return v3;
}
