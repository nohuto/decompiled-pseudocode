/*
 * XREFs of KeEnterCriticalRegion @ 0x1402418E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeEnterCriticalRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
}
