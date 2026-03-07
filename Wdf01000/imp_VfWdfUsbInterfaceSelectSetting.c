__int64 __fastcall imp_VfWdfUsbInterfaceSelectSetting(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _WDF_USB_INTERFACE_SELECT_SETTING_PARAMS *Params)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBINTERFACE__ *, _WDF_OBJECT_ATTRIBUTES *, _WDF_USB_INTERFACE_SELECT_SETTING_PARAMS *))WdfVersion.Functions.pfnWdfUsbInterfaceSelectSetting)(
           DriverGlobals,
           UsbInterface,
           PipesAttributes,
           Params);
}
