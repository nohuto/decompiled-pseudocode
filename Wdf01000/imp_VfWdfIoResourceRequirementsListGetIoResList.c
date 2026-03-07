WDFIORESLIST__ *__fastcall imp_VfWdfIoResourceRequirementsListGetIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        __int64 Index)
{
  return WdfVersion.Functions.pfnWdfIoResourceRequirementsListGetIoResList(DriverGlobals, RequirementsList, Index);
}
