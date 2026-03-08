/*
 * XREFs of imp_VfWdfCxDeviceInitSetPnpPowerEventCallbacks @ 0x1C00B3620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfCxDeviceInitSetPnpPowerEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        _WDFCX_PNPPOWER_EVENT_CALLBACKS *CxPnpPowerCallbacks)
{
  WdfVersion.Functions.pfnWdfCxDeviceInitSetPnpPowerEventCallbacks(DriverGlobals, CxDeviceInit, CxPnpPowerCallbacks);
}
