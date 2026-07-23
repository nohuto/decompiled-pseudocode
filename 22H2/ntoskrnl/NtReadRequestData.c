/*
 * XREFs of NtReadRequestData @ 0x1408C2130
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     LpcpCopyRequestData @ 0x1408C1C9C (LpcpCopyRequestData.c)
 */

NTSTATUS __cdecl NtReadRequestData(
        HANDLE PortHandle,
        PPORT_MESSAGE Message,
        ULONG DataEntryIndex,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesRead)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = LpcpCopyRequestData(
         0,
         PortHandle,
         (unsigned __int64)Message,
         DataEntryIndex,
         (char *)Buffer,
         BufferSize,
         (__int64 *)NumberOfBytesRead);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v7;
}
