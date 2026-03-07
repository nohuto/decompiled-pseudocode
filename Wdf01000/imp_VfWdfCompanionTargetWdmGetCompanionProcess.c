_EPROCESS *__fastcall imp_VfWdfCompanionTargetWdmGetCompanionProcess(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOMPANIONTARGET__ *CompanionTarget)
{
  return WdfVersion.Functions.pfnWdfCompanionTargetWdmGetCompanionProcess(DriverGlobals, CompanionTarget);
}
