/*
 * XREFs of imp_VfWdfFdoUnlockStaticChildListFromIteration @ 0x1C00B4D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfFdoUnlockStaticChildListFromIteration(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Fdo)
{
  WdfVersion.Functions.pfnWdfFdoUnlockStaticChildListFromIteration(DriverGlobals, Fdo);
}
