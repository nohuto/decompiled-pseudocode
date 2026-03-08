/*
 * XREFs of imp_VfWdfCollectionAdd @ 0x1C00B32A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfCollectionAdd(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOLLECTION__ *Collection,
        void *Object)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFCOLLECTION__ *, void *))WdfVersion.Functions.pfnWdfCollectionAdd)(
           DriverGlobals,
           Collection,
           Object);
}
