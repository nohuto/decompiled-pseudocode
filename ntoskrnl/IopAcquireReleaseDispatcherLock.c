/*
 * XREFs of IopAcquireReleaseDispatcherLock @ 0x140847424
 * Callers:
 *     IopPassiveInterruptWorker @ 0x14039E620 (IopPassiveInterruptWorker.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

char __fastcall IopAcquireReleaseDispatcherLock(struct _KEVENT *a1, char a2)
{
  struct _KEVENT *v2; // rcx
  struct _KTHREAD *CurrentThread; // rax

  v2 = a1 + 7;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    return KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
  }
  else
  {
    KeSetEvent(v2, 0, 0);
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
}
