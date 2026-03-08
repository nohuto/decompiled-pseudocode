/*
 * XREFs of PpmTryAcquireLock @ 0x1402D2BC8
 * Callers:
 *     PoLatencySensitivityHint @ 0x1402D2A30 (PoLatencySensitivityHint.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     KiClearSystemPriority @ 0x1402DAA90 (KiClearSystemPriority.c)
 *     KiSetSystemPriorityThread @ 0x1402E9F30 (KiSetSystemPriorityThread.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

char PpmTryAcquireLock()
{
  struct _KTHREAD *CurrentThread; // rax
  char v1; // bl
  NTSTATUS v2; // eax
  struct _KTHREAD *v3; // rcx
  LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  --CurrentThread->KernelApcDisable;
  Timeout.QuadPart = 0LL;
  KiSetSystemPriorityThread((ULONG_PTR)KeGetCurrentThread());
  v2 = KeWaitForSingleObject(&word_140C3D2E8, Executive, 0, 0, &Timeout);
  v3 = KeGetCurrentThread();
  if ( v2 )
  {
    KiClearSystemPriority((ULONG_PTR)v3);
    KeLeaveCriticalRegion();
  }
  else
  {
    v1 = 1;
    PpmPerfPolicyLock = (__int64)v3;
  }
  return v1;
}
