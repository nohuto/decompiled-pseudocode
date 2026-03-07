__int64 __fastcall imp_VfWdfRequestCreateFromIrp(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        _IRP *Irp,
        __int64 RequestFreesIrp,
        WDFREQUEST__ **Request)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, _WDF_OBJECT_ATTRIBUTES *, _IRP *, __int64, WDFREQUEST__ **))WdfVersion.Functions.pfnWdfRequestCreateFromIrp)(
           DriverGlobals,
           RequestAttributes,
           Irp,
           RequestFreesIrp,
           Request);
}
