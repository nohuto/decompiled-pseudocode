/*
 * XREFs of imp_VfWdfDriverErrorReportApiMissing @ 0x1C00B4920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDriverErrorReportApiMissing(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        const wchar_t *FrameworkExtensionName,
        __int64 ApiIndex,
        unsigned __int8 DoesApiReturnNtstatus)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDRIVER__ *, const wchar_t *, __int64, unsigned __int8))WdfVersion.Functions.pfnWdfDriverErrorReportApiMissing)(
           DriverGlobals,
           Driver,
           FrameworkExtensionName,
           ApiIndex,
           DoesApiReturnNtstatus);
}
