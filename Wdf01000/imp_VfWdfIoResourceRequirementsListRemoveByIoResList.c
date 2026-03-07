void __fastcall imp_VfWdfIoResourceRequirementsListRemoveByIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        WDFIORESLIST__ *IoResList)
{
  WdfVersion.Functions.pfnWdfIoResourceRequirementsListRemoveByIoResList(DriverGlobals, RequirementsList, IoResList);
}
