__int64 __fastcall imp_VfWdfIoTargetStart(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIOTARGET__ *))WdfVersion.Functions.pfnWdfIoTargetStart)(
           DriverGlobals,
           IoTarget);
}
