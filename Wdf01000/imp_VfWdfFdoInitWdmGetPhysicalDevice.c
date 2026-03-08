/*
 * XREFs of imp_VfWdfFdoInitWdmGetPhysicalDevice @ 0x1C00B4C50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

_DEVICE_OBJECT *__fastcall imp_VfWdfFdoInitWdmGetPhysicalDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit)
{
  return WdfVersion.Functions.pfnWdfFdoInitWdmGetPhysicalDevice(DriverGlobals, DeviceInit);
}
