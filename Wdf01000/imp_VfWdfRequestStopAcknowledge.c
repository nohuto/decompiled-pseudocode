/*
 * XREFs of imp_VfWdfRequestStopAcknowledge @ 0x1C00B7000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfRequestStopAcknowledge(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        __int64 Requeue)
{
  WdfVersion.Functions.pfnWdfRequestStopAcknowledge(DriverGlobals, Request, Requeue);
}
