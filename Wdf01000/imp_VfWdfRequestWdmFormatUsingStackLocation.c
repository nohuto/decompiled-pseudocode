/*
 * XREFs of imp_VfWdfRequestWdmFormatUsingStackLocation @ 0x1C00B7040
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfRequestWdmFormatUsingStackLocation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        _IO_STACK_LOCATION *Stack)
{
  WdfVersion.Functions.pfnWdfRequestWdmFormatUsingStackLocation(DriverGlobals, Request, Stack);
}
