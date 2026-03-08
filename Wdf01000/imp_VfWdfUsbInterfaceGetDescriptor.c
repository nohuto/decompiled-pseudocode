/*
 * XREFs of imp_VfWdfUsbInterfaceGetDescriptor @ 0x1C00B71E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfUsbInterfaceGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface,
        __int64 SettingIndex,
        _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor)
{
  WdfVersion.Functions.pfnWdfUsbInterfaceGetDescriptor(DriverGlobals, UsbInterface, SettingIndex, InterfaceDescriptor);
}
