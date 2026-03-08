/*
 * XREFs of imp_VfWdfIoResourceRequirementsListGetCount @ 0x1C00B5790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfIoResourceRequirementsListGetCount(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIORESREQLIST__ *))WdfVersion.Functions.pfnWdfIoResourceRequirementsListGetCount)(
           DriverGlobals,
           RequirementsList);
}
