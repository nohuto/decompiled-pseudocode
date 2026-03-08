/*
 * XREFs of imp_VfWdfDeviceSetStaticStopRemove @ 0x1C00B4250
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceSetStaticStopRemove(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        __int64 Stoppable)
{
  WdfVersion.Functions.pfnWdfDeviceSetStaticStopRemove(DriverGlobals, Device, Stoppable);
}
