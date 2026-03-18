/*
 * XREFs of PsCaptureExceptionPort @ 0x14079FFE8
 * Callers:
 *     ExpRaiseHardError @ 0x1406CDFAC (ExpRaiseHardError.c)
 *     DbgkForwardException @ 0x1406EA7D0 (DbgkForwardException.c)
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 *     PspFreezeProcessWorker @ 0x1409B1740 (PspFreezeProcessWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

void *__fastcall PsCaptureExceptionPort(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *v3; // rdi
  void *v4; // rbx

  if ( !*(_QWORD *)(a1 + 1200) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (signed __int64 *)(a1 + 1080);
  ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
  v4 = (void *)(*(_QWORD *)(a1 + 1200) & 0xFFFFFFFFFFFFFFF8uLL);
  ObfReferenceObject(v4);
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v4;
}
