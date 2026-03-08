/*
 * XREFs of PfTSetTracingPriority @ 0x140A9D61C
 * Callers:
 *     PfpLogEventRequest @ 0x14097ADD8 (PfpLogEventRequest.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     MmSetAccessLogging @ 0x1402FF710 (MmSetAccessLogging.c)
 */

void __fastcall PfTSetTracingPriority(int a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C64DD0, 0LL);
  MmSetAccessLogging(dword_140C64DCC == 0, a1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C64DD0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C64DD0);
  KeAbPostRelease((ULONG_PTR)&qword_140C64DD0);
  KeLeaveCriticalRegion();
}
