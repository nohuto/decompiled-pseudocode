/*
 * XREFs of imp_VfWdfUsbInterfaceGetEndpointInformation @ 0x1C00B7200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfUsbInterfaceGetEndpointInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface,
        __int64 SettingIndex,
        __int64 EndpointIndex,
        _WDF_USB_PIPE_INFORMATION *EndpointInfo)
{
  WdfVersion.Functions.pfnWdfUsbInterfaceGetEndpointInformation(
    DriverGlobals,
    UsbInterface,
    SettingIndex,
    EndpointIndex,
    EndpointInfo);
}
