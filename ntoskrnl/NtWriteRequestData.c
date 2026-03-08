/*
 * XREFs of NtWriteRequestData @ 0x140975870
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     LpcpCopyRequestData @ 0x14097523C (LpcpCopyRequestData.c)
 */

__int64 __fastcall NtWriteRequestData(void *a1, unsigned __int64 a2, unsigned int a3, char *a4, SIZE_T a5, __int64 *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = LpcpCopyRequestData(1, a1, a2, a3, a4, a5, a6);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v7;
}
