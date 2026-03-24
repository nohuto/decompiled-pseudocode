/*
 * XREFs of PiSwLock @ 0x140743564
 * Callers:
 *     PipEnumerateCompleted @ 0x140741820 (PipEnumerateCompleted.c)
 *     PiSwIrpStartCreateWorker @ 0x14074CF08 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpInterfaceRegister @ 0x14076E344 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfaceSetState @ 0x1407CECDC (PiSwIrpInterfaceSetState.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN PiSwLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
}
