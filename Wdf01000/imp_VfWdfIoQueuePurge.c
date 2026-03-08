/*
 * XREFs of imp_VfWdfIoQueuePurge @ 0x1C00B5180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfIoQueuePurge(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        void (__fastcall *PurgeComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  WdfVersion.Functions.pfnWdfIoQueuePurge(DriverGlobals, Queue, PurgeComplete, Context);
}
