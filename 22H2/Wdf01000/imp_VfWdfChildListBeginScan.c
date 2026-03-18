/*
 * XREFs of imp_VfWdfChildListBeginScan @ 0x1C00BF0B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfChildListBeginScan(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCHILDLIST__ *ChildList)
{
  WdfVersion.Functions.pfnWdfChildListBeginScan(DriverGlobals, ChildList);
}
