/*
 * XREFs of imp_WdfUsbTargetPipeReadSynchronously @ 0x1C0056E20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C005B4E0 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 */

int __fastcall imp_WdfUsbTargetPipeReadSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        _WDF_MEMORY_DESCRIPTOR *MemoryDescriptor,
        unsigned int *BytesRead)
{
  _FX_DRIVER_GLOBALS *v9; // rdi

  v9 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( *(&DriverGlobals[-3].DisplaceDriverUnload + 4) )
    WPP_IFR_SF_q((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], 5u, 0xEu, 0xDu, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe);
  return FxUsbPipe::_SendTransfer(v9, Pipe, Request, RequestOptions, MemoryDescriptor, BytesRead, 3u);
}
