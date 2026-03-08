/*
 * XREFs of EtwpCoverageSamplerClose @ 0x1409F0240
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     EtwpCoverageSamplerStop @ 0x1409F08E4 (EtwpCoverageSamplerStop.c)
 */

void __fastcall EtwpCoverageSamplerClose(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char v6; // si
  int v7; // eax

  if ( a4 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCovSampGlobals, 0LL);
    qword_140C31868 = (__int64)KeGetCurrentThread();
    v7 = *(_DWORD *)(a2 + 1728);
    if ( (v7 & 1) == 0 )
    {
      v6 = 1;
      *(_DWORD *)(a2 + 1728) = v7 | 1;
    }
    qword_140C31868 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCovSampGlobals);
    KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v6 )
      EtwpCoverageSamplerStop(a2);
  }
}
