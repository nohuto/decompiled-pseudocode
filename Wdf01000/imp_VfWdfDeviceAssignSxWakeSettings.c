/*
 * XREFs of imp_VfWdfDeviceAssignSxWakeSettings @ 0x1C00B3820
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDeviceAssignSxWakeSettings(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS *Settings)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS *))WdfVersion.Functions.pfnWdfDeviceAssignSxWakeSettings)(
           DriverGlobals,
           Device,
           Settings);
}
