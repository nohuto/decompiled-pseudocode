__int64 __fastcall imp_VfWdfWmiInstanceRegister(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWMIINSTANCE__ *WmiInstance)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFWMIINSTANCE__ *))WdfVersion.Functions.pfnWdfWmiInstanceRegister)(
           DriverGlobals,
           WmiInstance);
}
