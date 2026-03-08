/*
 * XREFs of imp_VfWdfCollectionGetCount @ 0x1C00B32E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfCollectionGetCount(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCOLLECTION__ *Collection)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFCOLLECTION__ *))WdfVersion.Functions.pfnWdfCollectionGetCount)(
           DriverGlobals,
           Collection);
}
