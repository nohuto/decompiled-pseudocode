/*
 * XREFs of imp_VfWdfRequestMarkCancelable @ 0x1C00B6D80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfRequestMarkCancelable(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        void (__fastcall *EvtRequestCancel)(WDFREQUEST__ *))
{
  WdfVersion.Functions.pfnWdfRequestMarkCancelable(DriverGlobals, Request, EvtRequestCancel);
}
