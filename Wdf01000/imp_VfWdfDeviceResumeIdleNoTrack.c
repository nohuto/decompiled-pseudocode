/*
 * XREFs of imp_VfWdfDeviceResumeIdleNoTrack @ 0x1C00B4060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceResumeIdleNoTrack(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  WdfVersion.Functions.pfnWdfDeviceResumeIdleNoTrack(DriverGlobals, Device);
}
