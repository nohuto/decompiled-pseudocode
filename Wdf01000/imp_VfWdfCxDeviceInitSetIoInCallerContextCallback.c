void __fastcall imp_VfWdfCxDeviceInitSetIoInCallerContextCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        void (__fastcall *EvtIoInCallerContext)(WDFDEVICE__ *, WDFREQUEST__ *))
{
  WdfVersion.Functions.pfnWdfCxDeviceInitSetIoInCallerContextCallback(DriverGlobals, CxDeviceInit, EvtIoInCallerContext);
}
