/*
 * XREFs of imp_VfWdfCmResourceListGetCount @ 0x1C00B3200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfCmResourceListGetCount(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCMRESLIST__ *List)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFCMRESLIST__ *))WdfVersion.Functions.pfnWdfCmResourceListGetCount)(
           DriverGlobals,
           List);
}
