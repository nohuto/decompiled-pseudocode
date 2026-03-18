/*
 * XREFs of PpmTryAcquireLock @ 0x140224624
 * Callers:
 *     PoLatencySensitivityHint @ 0x1402244A0 (PoLatencySensitivityHint.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

char PpmTryAcquireLock()
{
  struct _KTHREAD *CurrentThread; // rax
  char v1; // bl
  LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = 0;
  Timeout.QuadPart = 0LL;
  if ( KeWaitForSingleObject(&word_140C22FE8, Executive, 0, 0, &Timeout) )
  {
    KeLeaveCriticalRegion();
  }
  else
  {
    v1 = 1;
    PpmPerfPolicyLock = (__int64)KeGetCurrentThread();
  }
  return v1;
}
