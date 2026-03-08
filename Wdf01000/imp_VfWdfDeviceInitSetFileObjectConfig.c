/*
 * XREFs of imp_VfWdfDeviceInitSetFileObjectConfig @ 0x1C00B3D10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceInitSetFileObjectConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_FILEOBJECT_CONFIG *FileObjectConfig,
        _WDF_OBJECT_ATTRIBUTES *FileObjectAttributes)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetFileObjectConfig(
    DriverGlobals,
    DeviceInit,
    FileObjectConfig,
    FileObjectAttributes);
}
