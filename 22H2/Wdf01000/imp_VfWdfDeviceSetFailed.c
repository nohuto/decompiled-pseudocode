/*
 * XREFs of imp_VfWdfDeviceSetFailed @ 0x1C00C01D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceSetFailed(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device, __int64 FailedAction)
{
  WdfVersion.Functions.pfnWdfDeviceSetFailed(DriverGlobals, Device, (_WDF_DEVICE_FAILED_ACTION)FailedAction);
}
