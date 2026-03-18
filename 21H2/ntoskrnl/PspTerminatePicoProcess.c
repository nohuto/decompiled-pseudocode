/*
 * XREFs of PspTerminatePicoProcess @ 0x1409B2A10
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     PspTerminateProcess @ 0x1407D7E94 (PspTerminateProcess.c)
 */

__int64 __fastcall PspTerminatePicoProcess(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v3; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = PspTerminateProcess(a1, (__int64)CurrentThread, a2, 8);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return v3;
}
