void __fastcall imp_VfWdfPdoRequestEject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  WdfVersion.Functions.pfnWdfPdoRequestEject(DriverGlobals, Device);
}
