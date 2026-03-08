/*
 * XREFs of imp_VfWdfDeviceSetSpecialFileSupport @ 0x1C00B4230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceSetSpecialFileSupport(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        __int64 FileType,
        __int64 FileTypeIsSupported)
{
  WdfVersion.Functions.pfnWdfDeviceSetSpecialFileSupport(
    DriverGlobals,
    Device,
    (_WDF_SPECIAL_FILE_TYPE)FileType,
    FileTypeIsSupported);
}
