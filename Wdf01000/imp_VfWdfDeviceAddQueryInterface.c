__int64 __fastcall imp_VfWdfDeviceAddQueryInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_QUERY_INTERFACE_CONFIG *InterfaceConfig)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_QUERY_INTERFACE_CONFIG *))WdfVersion.Functions.pfnWdfDeviceAddQueryInterface)(
           DriverGlobals,
           Device,
           InterfaceConfig);
}
