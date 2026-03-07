void __fastcall imp_VfWdfIoResourceRequirementsListSetSlotNumber(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        __int64 SlotNumber)
{
  WdfVersion.Functions.pfnWdfIoResourceRequirementsListSetSlotNumber(DriverGlobals, RequirementsList, SlotNumber);
}
