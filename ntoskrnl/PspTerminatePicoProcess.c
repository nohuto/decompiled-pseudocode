/*
 * XREFs of PspTerminatePicoProcess @ 0x1409B2C20
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x1407DC198 (PspTerminateProcess.c)
 */

__int64 __fastcall PspTerminatePicoProcess(struct _KPROCESS *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v3; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = PspTerminateProcess(a1, (__int64)CurrentThread, a2, 8u);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v3;
}
