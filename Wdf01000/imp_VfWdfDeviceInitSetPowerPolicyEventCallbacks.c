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
