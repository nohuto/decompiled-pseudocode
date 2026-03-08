/*
 * XREFs of imp_VfWdfUsbTargetDeviceRetrieveCurrentFrameNumber @ 0x1C00B7620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetDeviceRetrieveCurrentFrameNumber(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        unsigned int *CurrentFrameNumber)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBDEVICE__ *, unsigned int *))WdfVersion.Functions.pfnWdfUsbTargetDeviceRetrieveCurrentFrameNumber)(
           DriverGlobals,
           UsbDevice,
           CurrentFrameNumber);
}
