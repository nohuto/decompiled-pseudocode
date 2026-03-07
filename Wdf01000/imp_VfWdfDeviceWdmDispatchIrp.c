__int64 __fastcall imp_VfWdfDeviceWdmDispatchIrp(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _IRP *Irp,
        void *DispatchContext)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _IRP *, void *))WdfVersion.Functions.pfnWdfDeviceWdmDispatchIrp)(
           DriverGlobals,
           Device,
           Irp,
           DispatchContext);
}
