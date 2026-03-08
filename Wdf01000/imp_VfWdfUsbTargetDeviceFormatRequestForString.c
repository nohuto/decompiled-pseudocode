/*
 * XREFs of imp_VfWdfUsbTargetDeviceFormatRequestForString @ 0x1C00B7450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetDeviceFormatRequestForString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *Memory,
        _WDFMEMORY_OFFSET *Offset,
        unsigned __int8 StringIndex,
        unsigned __int16 LangID)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBDEVICE__ *, WDFREQUEST__ *, WDFMEMORY__ *, _WDFMEMORY_OFFSET *, unsigned __int8, unsigned __int16))WdfVersion.Functions.pfnWdfUsbTargetDeviceFormatRequestForString)(
           DriverGlobals,
           UsbDevice,
           Request,
           Memory,
           Offset,
           StringIndex,
           LangID);
}
