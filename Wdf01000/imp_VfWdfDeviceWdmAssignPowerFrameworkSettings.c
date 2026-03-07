__int64 __fastcall imp_VfWdfDeviceWdmAssignPowerFrameworkSettings(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_POWER_FRAMEWORK_SETTINGS *PowerFrameworkSettings)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_POWER_FRAMEWORK_SETTINGS *))WdfVersion.Functions.pfnWdfDeviceWdmAssignPowerFrameworkSettings)(
           DriverGlobals,
           Device,
           PowerFrameworkSettings);
}
