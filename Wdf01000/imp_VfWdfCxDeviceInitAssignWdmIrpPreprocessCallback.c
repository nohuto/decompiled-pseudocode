__int64 __fastcall imp_VfWdfCxDeviceInitAssignWdmIrpPreprocessCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        int (__fastcall *EvtCxDeviceWdmIrpPreprocess)(WDFDEVICE__ *, _IRP *, void *),
        __int64 MajorFunction,
        unsigned __int8 *MinorFunctions,
        unsigned int NumMinorFunctions)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFCXDEVICE_INIT *, int (__fastcall *)(WDFDEVICE__ *, _IRP *, void *), __int64, unsigned __int8 *, unsigned int))WdfVersion.Functions.pfnWdfCxDeviceInitAssignWdmIrpPreprocessCallback)(
           DriverGlobals,
           CxDeviceInit,
           EvtCxDeviceWdmIrpPreprocess,
           MajorFunction,
           MinorFunctions,
           NumMinorFunctions);
}
