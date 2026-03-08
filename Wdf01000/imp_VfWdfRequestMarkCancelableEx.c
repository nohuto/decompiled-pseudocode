/*
 * XREFs of imp_VfWdfRequestMarkCancelableEx @ 0x1C00B6DA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfRequestMarkCancelableEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        void (__fastcall *EvtRequestCancel)(WDFREQUEST__ *))
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *, void (__fastcall *)(WDFREQUEST__ *)))WdfVersion.Functions.pfnWdfRequestMarkCancelableEx)(
           DriverGlobals,
           Request,
           EvtRequestCancel);
}
