/*
 * XREFs of imp_VfWdfDeviceGetDriver @ 0x1C00B3A80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

WDFDRIVER__ *__fastcall imp_VfWdfDeviceGetDriver(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return WdfVersion.Functions.pfnWdfDeviceGetDriver(DriverGlobals, Device);
}
