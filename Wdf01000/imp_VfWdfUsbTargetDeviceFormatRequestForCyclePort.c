/*
 * XREFs of imp_VfWdfUsbTargetDeviceFormatRequestForCyclePort @ 0x1C00B7430
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetDeviceFormatRequestForCyclePort(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        WDFREQUEST__ *Request)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBDEVICE__ *, WDFREQUEST__ *))WdfVersion.Functions.pfnWdfUsbTargetDeviceFormatRequestForCyclePort)(
           DriverGlobals,
           UsbDevice,
           Request);
}
