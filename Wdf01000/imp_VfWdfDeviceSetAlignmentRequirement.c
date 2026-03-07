void __fastcall imp_VfWdfDeviceSetAlignmentRequirement(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        __int64 AlignmentRequirement)
{
  WdfVersion.Functions.pfnWdfDeviceSetAlignmentRequirement(DriverGlobals, Device, AlignmentRequirement);
}
