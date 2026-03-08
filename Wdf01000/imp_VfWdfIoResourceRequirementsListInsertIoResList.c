/*
 * XREFs of imp_VfWdfIoResourceRequirementsListInsertIoResList @ 0x1C00B57D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

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
