void __fastcall imp_VfWdfCxDeviceInitSetPowerPolicyEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        _WDFCX_POWER_POLICY_EVENT_CALLBACKS *CxPowerPolicyCallbacks)
{
  WdfVersion.Functions.pfnWdfCxDeviceInitSetPowerPolicyEventCallbacks(
    DriverGlobals,
    CxDeviceInit,
    CxPowerPolicyCallbacks);
}
