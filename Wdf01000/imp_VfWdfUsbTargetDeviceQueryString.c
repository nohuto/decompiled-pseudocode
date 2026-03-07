__int64 __fastcall imp_VfWdfUsbTargetDeviceQueryString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int16 *String,
        unsigned __int16 *NumCharacters,
        unsigned __int8 StringIndex,
        unsigned __int16 LangID)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBDEVICE__ *, WDFREQUEST__ *, _WDF_REQUEST_SEND_OPTIONS *, unsigned __int16 *, unsigned __int16 *, unsigned __int8, unsigned __int16))WdfVersion.Functions.pfnWdfUsbTargetDeviceQueryString)(
           DriverGlobals,
           UsbDevice,
           Request,
           RequestOptions,
           String,
           NumCharacters,
           StringIndex,
           LangID);
}
