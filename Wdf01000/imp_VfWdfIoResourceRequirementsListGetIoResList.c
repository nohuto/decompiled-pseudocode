/*
 * XREFs of imp_VfWdfIoResourceRequirementsListGetIoResList @ 0x1C00B57B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

WDFIORESLIST__ *__fastcall imp_VfWdfIoResourceRequirementsListGetIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        __int64 Index)
{
  return WdfVersion.Functions.pfnWdfIoResourceRequirementsListGetIoResList(DriverGlobals, RequirementsList, Index);
}
