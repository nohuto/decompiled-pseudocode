void __fastcall imp_VfWdfDeviceSetBusInformationForChildren(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _PNP_BUS_INFORMATION *BusInformation)
{
  WdfVersion.Functions.pfnWdfDeviceSetBusInformationForChildren(DriverGlobals, Device, BusInformation);
}
