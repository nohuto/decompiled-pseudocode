__int64 __fastcall imp_VfWdfDeviceRetrieveCompanionTarget(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        WDFCOMPANIONTARGET__ **CompanionTarget)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, WDFCOMPANIONTARGET__ **))WdfVersion.Functions.pfnWdfDeviceRetrieveCompanionTarget)(
           DriverGlobals,
           Device,
           CompanionTarget);
}
