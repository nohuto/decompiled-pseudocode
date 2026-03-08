/*
 * XREFs of imp_VfWdfDeviceSetPnpCapabilities @ 0x1C00B41F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceSetPnpCapabilities(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_PNP_CAPABILITIES *PnpCapabilities)
{
  WdfVersion.Functions.pfnWdfDeviceSetPnpCapabilities(DriverGlobals, Device, PnpCapabilities);
}
