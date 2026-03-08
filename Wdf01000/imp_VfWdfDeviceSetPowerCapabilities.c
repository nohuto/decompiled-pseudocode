/*
 * XREFs of imp_VfWdfDeviceSetPowerCapabilities @ 0x1C00B4210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceSetPowerCapabilities(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_POWER_CAPABILITIES *PowerCapabilities)
{
  WdfVersion.Functions.pfnWdfDeviceSetPowerCapabilities(DriverGlobals, Device, PowerCapabilities);
}
