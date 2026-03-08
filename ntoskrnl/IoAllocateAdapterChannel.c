/*
 * XREFs of IoAllocateAdapterChannel @ 0x1405542A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall IoAllocateAdapterChannel(
        PDMA_ADAPTER DmaAdapter,
        PDEVICE_OBJECT DeviceObject,
        ULONG NumberOfMapRegisters,
        PDRIVER_CONTROL ExecutionRoutine,
        PVOID Context)
{
  return DmaAdapter->DmaOperations->AllocateAdapterChannel(
           DmaAdapter,
           DeviceObject,
           NumberOfMapRegisters,
           (_IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *))ExecutionRoutine,
           Context);
}
