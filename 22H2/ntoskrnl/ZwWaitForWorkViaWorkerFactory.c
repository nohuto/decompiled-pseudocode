/*
 * XREFs of ZwWaitForWorkViaWorkerFactory @ 0x1403FD4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWaitForWorkViaWorkerFactory(
        HANDLE WorkerFactoryHandle,
        PFILE_IO_COMPLETION_INFORMATION MiniPackets,
        ULONG Count,
        PULONG PacketsReturned,
        PWORKER_FACTORY_DEFERRED_WORK DeferredWork)
{
  _disable();
  __readeflags();
  return KiServiceInternal(WorkerFactoryHandle);
}
