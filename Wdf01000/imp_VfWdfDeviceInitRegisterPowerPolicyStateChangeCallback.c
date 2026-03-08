/*
 * XREFs of imp_VfWdfDeviceInitRegisterPowerPolicyStateChangeCallback @ 0x1C00B3C30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDeviceInitRegisterPowerPolicyStateChangeCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        __int64 PowerPolicyState,
        void (__fastcall *EvtDevicePowerPolicyStateChange)(WDFDEVICE__ *, const _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA *),
        unsigned int CallbackTypes)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE_INIT *, __int64, void (__fastcall *)(WDFDEVICE__ *, const _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA *), unsigned int))WdfVersion.Functions.pfnWdfDeviceInitRegisterPowerPolicyStateChangeCallback)(
           DriverGlobals,
           DeviceInit,
           PowerPolicyState,
           EvtDevicePowerPolicyStateChange,
           CallbackTypes);
}
