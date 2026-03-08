/*
 * XREFs of imp_VfWdfWdmDeviceGetWdfDeviceHandle @ 0x1C00B7A70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

WDFDEVICE__ *__fastcall imp_VfWdfWdmDeviceGetWdfDeviceHandle(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _DEVICE_OBJECT *DeviceObject)
{
  return WdfVersion.Functions.pfnWdfWdmDeviceGetWdfDeviceHandle(DriverGlobals, DeviceObject);
}
