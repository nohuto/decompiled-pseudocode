/*
 * XREFs of imp_VfWdfCollectionRemove @ 0x1C00B3360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfCollectionRemove(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCOLLECTION__ *Collection, void *Item)
{
  WdfVersion.Functions.pfnWdfCollectionRemove(DriverGlobals, Collection, Item);
}
