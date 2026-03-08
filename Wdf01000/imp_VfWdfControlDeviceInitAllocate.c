/*
 * XREFs of imp_VfWdfControlDeviceInitAllocate @ 0x1C00B34E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

WDFDEVICE_INIT *__fastcall imp_VfWdfControlDeviceInitAllocate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        const _UNICODE_STRING *SDDLString)
{
  return WdfVersion.Functions.pfnWdfControlDeviceInitAllocate(DriverGlobals, Driver, SDDLString);
}
