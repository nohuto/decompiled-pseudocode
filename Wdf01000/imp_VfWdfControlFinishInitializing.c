void __fastcall imp_VfWdfControlFinishInitializing(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  WdfVersion.Functions.pfnWdfControlFinishInitializing(DriverGlobals, Device);
}
