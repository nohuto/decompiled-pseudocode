/*
 * XREFs of imp_WdfUsbTargetPipeReadSynchronously @ 0x1C0069190
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0013820 (WPP_IFR_SF_q.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C006E4F0 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 */

int __fastcall imp_WdfUsbTargetPipeReadSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        _WDF_MEMORY_DESCRIPTOR *MemoryDescriptor,
        unsigned int *BytesRead)
{
  _FX_DRIVER_GLOBALS *DriverName; // rdi

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( BYTE4(DriverGlobals[-2].Driver) )
    WPP_IFR_SF_q(
      (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
      5u,
      0xEu,
      0xDu,
      WPP_FxUsbPipeAPI_cpp_Traceguids,
      Pipe);
  return FxUsbPipe::_SendTransfer(DriverName, Pipe, Request, RequestOptions, MemoryDescriptor, BytesRead, 3u);
}
