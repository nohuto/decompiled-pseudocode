/*
 * XREFs of imp_VfWdfChildListRetrievePdo @ 0x1C00B3180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

WDFDEVICE__ *__fastcall imp_VfWdfChildListRetrievePdo(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *ChildList,
        _WDF_CHILD_RETRIEVE_INFO *RetrieveInfo)
{
  return WdfVersion.Functions.pfnWdfChildListRetrievePdo(DriverGlobals, ChildList, RetrieveInfo);
}
