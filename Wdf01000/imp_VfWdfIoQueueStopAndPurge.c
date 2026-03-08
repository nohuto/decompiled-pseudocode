/*
 * XREFs of imp_VfWdfIoQueueStopAndPurge @ 0x1C00B5610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfIoQueueStopAndPurge(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        void (__fastcall *StopAndPurgeComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  WdfVersion.Functions.pfnWdfIoQueueStopAndPurge(DriverGlobals, Queue, StopAndPurgeComplete, Context);
}
