/*
 * XREFs of ?IsType@FxUsbPipe@@QEAAEW4_WDF_USB_PIPE_TYPE@@@Z @ 0x1C000ED84
 * Callers:
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x1C00567B0 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0061078 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxUsbPipe::IsType(FxUsbPipe *this, _WDF_USB_PIPE_TYPE Type)
{
  unsigned __int64 PipeType; // rax
  int v3; // eax

  PipeType = this->m_PipeInformation.PipeType;
  if ( PipeType >= 4 )
    v3 = 0;
  else
    v3 = `FxUsbPipe::_UsbdPipeTypeToWdf'::`2'::types[PipeType];
  return v3 == Type;
}
