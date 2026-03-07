__int64 __fastcall imp_VfWdfIoTargetSelfAssignDefaultIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFQUEUE__ *Queue)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIOTARGET__ *, WDFQUEUE__ *))WdfVersion.Functions.pfnWdfIoTargetSelfAssignDefaultIoQueue)(
           DriverGlobals,
           IoTarget,
           Queue);
}
