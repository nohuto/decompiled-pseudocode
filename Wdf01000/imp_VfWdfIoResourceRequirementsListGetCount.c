__int64 __fastcall imp_VfWdfIoResourceRequirementsListGetCount(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIORESREQLIST__ *))WdfVersion.Functions.pfnWdfIoResourceRequirementsListGetCount)(
           DriverGlobals,
           RequirementsList);
}
