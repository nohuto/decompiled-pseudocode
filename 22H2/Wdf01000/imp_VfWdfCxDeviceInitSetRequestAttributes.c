/*
 * XREFs of imp_VfWdfCxDeviceInitSetRequestAttributes @ 0x1C00BF690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfCxDeviceInitSetRequestAttributes(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes)
{
  WdfVersion.Functions.pfnWdfCxDeviceInitSetRequestAttributes(DriverGlobals, CxDeviceInit, RequestAttributes);
}
