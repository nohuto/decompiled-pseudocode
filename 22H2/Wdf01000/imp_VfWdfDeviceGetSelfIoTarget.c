/*
 * XREFs of imp_VfWdfDeviceGetSelfIoTarget @ 0x1C00BFB10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

WDFIOTARGET__ *__fastcall imp_VfWdfDeviceGetSelfIoTarget(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return WdfVersion.Functions.pfnWdfDeviceGetSelfIoTarget(DriverGlobals, Device);
}
