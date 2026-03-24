/*
 * XREFs of PopDripsWatchdogAcquireContextLock @ 0x1408EEE00
 * Callers:
 *     PopDripsWatchdogCallbackWorker @ 0x1408EEFD0 (PopDripsWatchdogCallbackWorker.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PopDripsWatchdogAcquireContextLock(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(a1, 1u);
}
