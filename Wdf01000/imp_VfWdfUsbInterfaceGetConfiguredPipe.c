WDFUSBPIPE__ *__fastcall imp_VfWdfUsbInterfaceGetConfiguredPipe(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface,
        __int64 PipeIndex,
        _WDF_USB_PIPE_INFORMATION *PipeInfo)
{
  return WdfVersion.Functions.pfnWdfUsbInterfaceGetConfiguredPipe(DriverGlobals, UsbInterface, PipeIndex, PipeInfo);
}
