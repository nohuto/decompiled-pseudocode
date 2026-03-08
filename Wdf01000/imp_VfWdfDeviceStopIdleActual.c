/*
 * XREFs of imp_VfWdfDeviceStopIdleActual @ 0x1C00B4270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDeviceStopIdleActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        __int64 WaitForD0,
        void *Tag,
        int Line,
        const char *File)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, __int64, void *, int, const char *))WdfVersion.Functions.pfnWdfDeviceStopIdleActual)(
           DriverGlobals,
           Device,
           WaitForD0,
           Tag,
           Line,
           File);
}
