void __fastcall imp_VfWdfUsbInterfaceGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface,
        __int64 SettingIndex,
        _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor)
{
  WdfVersion.Functions.pfnWdfUsbInterfaceGetDescriptor(DriverGlobals, UsbInterface, SettingIndex, InterfaceDescriptor);
}
