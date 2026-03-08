/*
 * XREFs of imp_VfWdfRequestFormatRequestUsingCurrentType @ 0x1C00B6BC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfRequestFormatRequestUsingCurrentType(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request)
{
  WdfVersion.Functions.pfnWdfRequestFormatRequestUsingCurrentType(DriverGlobals, Request);
}
