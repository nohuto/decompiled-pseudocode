/*
 * XREFs of imp_VfWdfDeviceInitSetRequestAttributes @ 0x1C00B3E90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceInitSetRequestAttributes(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetRequestAttributes(DriverGlobals, DeviceInit, RequestAttributes);
}
