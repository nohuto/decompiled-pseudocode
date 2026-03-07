void __fastcall imp_VfWdfDeviceInitSetIoInCallerContextCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        void (__fastcall *EvtIoInCallerContext)(WDFDEVICE__ *, WDFREQUEST__ *))
{
  WdfVersion.Functions.pfnWdfDeviceInitSetIoInCallerContextCallback(DriverGlobals, DeviceInit, EvtIoInCallerContext);
}
