void __fastcall imp_VfWdfIoResourceRequirementsListSetInterfaceType(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        __int64 InterfaceType)
{
  WdfVersion.Functions.pfnWdfIoResourceRequirementsListSetInterfaceType(
    DriverGlobals,
    RequirementsList,
    (_INTERFACE_TYPE)InterfaceType);
}
