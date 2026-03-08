/*
 * XREFs of imp_VfWdfRequestRetrieveInputWdmMdl @ 0x1C00B6E90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfRequestRetrieveInputWdmMdl(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        _MDL **Mdl)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *, _MDL **))WdfVersion.Functions.pfnWdfRequestRetrieveInputWdmMdl)(
           DriverGlobals,
           Request,
           Mdl);
}
