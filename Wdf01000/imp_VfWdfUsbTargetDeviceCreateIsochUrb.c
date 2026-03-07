__int64 __fastcall imp_VfWdfUsbTargetDeviceCreateIsochUrb(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        __int64 NumberOfIsochPackets,
        WDFMEMORY__ **UrbMemory,
        _URB **Urb)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBDEVICE__ *, _WDF_OBJECT_ATTRIBUTES *, __int64, WDFMEMORY__ **, _URB **))WdfVersion.Functions.pfnWdfUsbTargetDeviceCreateIsochUrb)(
           DriverGlobals,
           UsbDevice,
           Attributes,
           NumberOfIsochPackets,
           UrbMemory,
           Urb);
}
