/*
 * XREFs of imp_VfWdfDeviceInitSetPowerPolicyEventCallbacks @ 0x1C00B3E10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceInitSetPowerPolicyEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_POWER_POLICY_EVENT_CALLBACKS *PowerPolicyEventCallbacks)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetPowerPolicyEventCallbacks(
    DriverGlobals,
    DeviceInit,
    PowerPolicyEventCallbacks);
}
