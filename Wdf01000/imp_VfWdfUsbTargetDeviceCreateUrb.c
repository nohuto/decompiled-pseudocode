__int64 __fastcall imp_VfWdfUsbTargetDeviceCreateUrb(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFMEMORY__ **UrbMemory,
        _URB **Urb)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBDEVICE__ *, _WDF_OBJECT_ATTRIBUTES *, WDFMEMORY__ **, _URB **))WdfVersion.Functions.pfnWdfUsbTargetDeviceCreateUrb)(
           DriverGlobals,
           UsbDevice,
           Attributes,
           UrbMemory,
           Urb);
}
