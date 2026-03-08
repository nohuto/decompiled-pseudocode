/*
 * XREFs of imp_VfWdfDeviceRemoveRemovalRelationsPhysicalDevice @ 0x1C00B4010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceRemoveRemovalRelationsPhysicalDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _DEVICE_OBJECT *PhysicalDevice)
{
  WdfVersion.Functions.pfnWdfDeviceRemoveRemovalRelationsPhysicalDevice(DriverGlobals, Device, PhysicalDevice);
}
