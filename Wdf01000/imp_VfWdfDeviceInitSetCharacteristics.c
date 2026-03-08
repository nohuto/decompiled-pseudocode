/*
 * XREFs of imp_VfWdfDeviceInitSetCharacteristics @ 0x1C00B3C90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceInitSetCharacteristics(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        __int64 DeviceCharacteristics,
        __int64 OrInValues)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetCharacteristics(DriverGlobals, DeviceInit, DeviceCharacteristics, OrInValues);
}
