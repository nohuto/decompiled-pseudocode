/*
 * XREFs of imp_VfWdfChildListEndScan @ 0x1C00B30D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfChildListEndScan(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCHILDLIST__ *ChildList)
{
  WdfVersion.Functions.pfnWdfChildListEndScan(DriverGlobals, ChildList);
}
