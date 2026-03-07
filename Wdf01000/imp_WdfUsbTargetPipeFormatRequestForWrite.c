int __fastcall imp_WdfUsbTargetPipeFormatRequestForWrite(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *WriteMemory,
        _WDFMEMORY_OFFSET *WriteOffsets)
{
  _FX_DRIVER_GLOBALS *v8; // rbp

  v8 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( *(&DriverGlobals[-3].DisplaceDriverUnload + 4) )
    WPP_IFR_SF_qqq(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
      5u,
      0xEu,
      0xCu,
      WPP_FxUsbPipeAPI_cpp_Traceguids,
      Pipe,
      Request,
      WriteMemory);
  return FxUsbPipe::_FormatTransfer(v8, Pipe, Request, WriteMemory, WriteOffsets, 0);
}
