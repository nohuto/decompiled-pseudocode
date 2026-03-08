/*
 * XREFs of imp_VfWdfUsbTargetDeviceCyclePortSynchronously @ 0x1C00B73D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetDeviceCyclePortSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBDEVICE__ *))WdfVersion.Functions.pfnWdfUsbTargetDeviceCyclePortSynchronously)(
           DriverGlobals,
           UsbDevice);
}
