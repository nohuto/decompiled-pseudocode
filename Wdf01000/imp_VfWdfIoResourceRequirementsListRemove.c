/*
 * XREFs of imp_VfWdfIoResourceRequirementsListRemove @ 0x1C00B57F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfIoResourceRequirementsListRemove(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        __int64 Index)
{
  WdfVersion.Functions.pfnWdfIoResourceRequirementsListRemove(DriverGlobals, RequirementsList, Index);
}
