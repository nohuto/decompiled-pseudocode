__int64 __fastcall imp_VfWdfDeviceConfigureWdmIrpDispatchCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        WDFDRIVER__ *Driver,
        __int64 MajorFunction,
        int (__fastcall *EvtDeviceWdmIrpDispatch)(WDFDEVICE__ *, unsigned __int8, unsigned __int8, unsigned int, void *, _IRP *, void *),
        void *DriverContext)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, WDFDRIVER__ *, __int64, int (__fastcall *)(WDFDEVICE__ *, unsigned __int8, unsigned __int8, unsigned int, void *, _IRP *, void *), void *))WdfVersion.Functions.pfnWdfDeviceConfigureWdmIrpDispatchCallback)(
           DriverGlobals,
           Device,
           Driver,
           MajorFunction,
           EvtDeviceWdmIrpDispatch,
           DriverContext);
}
