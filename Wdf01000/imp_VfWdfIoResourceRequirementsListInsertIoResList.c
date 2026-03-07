__int64 __fastcall imp_VfWdfIoResourceRequirementsListInsertIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        WDFIORESLIST__ *IoResList,
        __int64 Index)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIORESREQLIST__ *, WDFIORESLIST__ *, __int64))WdfVersion.Functions.pfnWdfIoResourceRequirementsListInsertIoResList)(
           DriverGlobals,
           RequirementsList,
           IoResList,
           Index);
}
