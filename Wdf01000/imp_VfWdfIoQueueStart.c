/*
 * XREFs of imp_VfWdfIoQueueStart @ 0x1C00B55D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfIoQueueStart(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  WdfVersion.Functions.pfnWdfIoQueueStart(DriverGlobals, Queue);
}
