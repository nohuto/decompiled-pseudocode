/*
 * XREFs of ObDisableEtwReferenceTrace @ 0x140979480
 * Callers:
 *     EtwpDisableKernelTrace @ 0x1407864C4 (EtwpDisableKernelTrace.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 */

char ObDisableEtwReferenceTrace()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v1; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
  ObpTraceFlags &= ~4u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
  KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
  v1 = KeGetCurrentThread();
  if ( v1->SpecialApcDisable++ == -1 )
  {
    v1 = (struct _KTHREAD *)((char *)v1 + 152);
    if ( *(struct _KTHREAD **)&v1->Header.Lock != v1 )
      LOBYTE(v1) = KiCheckForKernelApcDelivery();
  }
  return (char)v1;
}
