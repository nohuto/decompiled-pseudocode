__int64 __fastcall imp_VfWdfIoTargetGetState(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIOTARGET__ *))WdfVersion.Functions.pfnWdfIoTargetGetState)(
           DriverGlobals,
           IoTarget);
}
