/*
 * XREFs of ZwRemoveIoCompletionEx @ 0x1403FD3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRemoveIoCompletionEx(
        HANDLE IoCompletionHandle,
        PFILE_IO_COMPLETION_INFORMATION IoCompletionInformation,
        ULONG Count,
        PULONG NumEntriesRemoved,
        PLARGE_INTEGER Timeout,
        BOOLEAN Alertable)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoCompletionHandle);
}
