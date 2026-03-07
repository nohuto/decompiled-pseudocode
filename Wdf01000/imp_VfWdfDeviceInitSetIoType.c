void __fastcall imp_VfWdfDeviceInitSetIoType(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        __int64 IoType)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetIoType(DriverGlobals, DeviceInit, (_WDF_DEVICE_IO_TYPE)IoType);
}
