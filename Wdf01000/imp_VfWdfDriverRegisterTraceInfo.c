__int64 __fastcall imp_VfWdfDriverRegisterTraceInfo(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _DRIVER_OBJECT *DriverObject,
        int (__fastcall *EvtTraceCallback)(unsigned __int8, void *, unsigned int, void *, void *, unsigned int *),
        void *ControlBlock)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, _DRIVER_OBJECT *, int (__fastcall *)(unsigned __int8, void *, unsigned int, void *, void *, unsigned int *), void *))WdfVersion.Functions.pfnWdfDriverRegisterTraceInfo)(
           DriverGlobals,
           DriverObject,
           EvtTraceCallback,
           ControlBlock);
}
