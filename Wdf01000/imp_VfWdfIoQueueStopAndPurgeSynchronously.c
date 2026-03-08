/*
 * XREFs of imp_VfWdfIoQueueStopAndPurgeSynchronously @ 0x1C00B5630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfIoQueueStopAndPurgeSynchronously(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  WdfVersion.Functions.pfnWdfIoQueueStopAndPurgeSynchronously(DriverGlobals, Queue);
}
