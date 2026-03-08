/*
 * XREFs of imp_VfWdfFdoLockStaticChildListForIteration @ 0x1C00B4C70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfFdoLockStaticChildListForIteration(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Fdo)
{
  WdfVersion.Functions.pfnWdfFdoLockStaticChildListForIteration(DriverGlobals, Fdo);
}
