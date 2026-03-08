/*
 * XREFs of imp_VfWdfDeviceInitSetRemoveLockOptions @ 0x1C00B3E70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceInitSetRemoveLockOptions(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_REMOVE_LOCK_OPTIONS *Options)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetRemoveLockOptions(DriverGlobals, DeviceInit, Options);
}
