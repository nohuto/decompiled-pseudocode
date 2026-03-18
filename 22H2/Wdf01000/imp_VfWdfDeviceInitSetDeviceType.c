/*
 * XREFs of imp_VfWdfDeviceInitSetDeviceType @ 0x1C00BFD00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceInitSetDeviceType(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        __int64 DeviceType)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetDeviceType(DriverGlobals, DeviceInit, DeviceType);
}
