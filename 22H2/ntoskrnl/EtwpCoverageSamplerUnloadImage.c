/*
 * XREFs of EtwpCoverageSamplerUnloadImage @ 0x1409F3A3C
 * Callers:
 *     PerfLogImageUnload @ 0x140697438 (PerfLogImageUnload.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x1408A894C (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampProcessRemoveModule @ 0x1408AA14C (EtwpCovSampProcessRemoveModule.c)
 */

void __fastcall EtwpCoverageSamplerUnloadImage(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  if ( (int)EtwpCovSampAcquireSamplerRundown(&v8) < 0 )
    goto LABEL_8;
  if ( a2 < 0xFFFF800000000000uLL )
  {
    v6 = *(_QWORD *)(a1 + 2544);
    if ( !v6 )
      goto LABEL_8;
  }
  else
  {
    v6 = qword_140C31C98 + 1264;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v6 + 8, 0LL);
  *(_QWORD *)(v6 + 16) = KeGetCurrentThread();
  EtwpCovSampProcessRemoveModule(v6, a2, a3);
  *(_QWORD *)(v6 + 16) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 8));
  KeAbPostRelease(v6 + 8);
  KeLeaveCriticalRegion();
LABEL_8:
  if ( v8 )
  {
    ExReleaseRundownProtection_0(&stru_140C31CA0);
    KeLeaveCriticalRegion();
  }
}
