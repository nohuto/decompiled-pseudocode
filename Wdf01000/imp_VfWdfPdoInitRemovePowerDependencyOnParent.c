void __fastcall imp_VfWdfPdoInitRemovePowerDependencyOnParent(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit)
{
  WdfVersion.Functions.pfnWdfPdoInitRemovePowerDependencyOnParent(DriverGlobals, DeviceInit);
}
