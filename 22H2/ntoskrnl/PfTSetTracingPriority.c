/*
 * XREFs of PfTSetTracingPriority @ 0x140AA07D4
 * Callers:
 *     PfpLogEventRequest @ 0x14097DE88 (PfpLogEventRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     MmSetAccessLogging @ 0x14036A840 (MmSetAccessLogging.c)
 */

void __fastcall PfTSetTracingPriority(int a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C65250, 0LL);
  MmSetAccessLogging(dword_140C6524C == 0, a1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C65250, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C65250);
  KeAbPostRelease((ULONG_PTR)&qword_140C65250);
  KeLeaveCriticalRegion();
}
