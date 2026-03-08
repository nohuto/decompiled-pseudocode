/*
 * XREFs of imp_WdfUsbTargetPipeGetType @ 0x1C000EFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetPipeGetType(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFUSBPIPE__ *Pipe)
{
  unsigned int v2; // ebx
  unsigned __int64 PipeType; // rcx
  FxUsbPipe *pUsbPipe; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  pUsbPipe = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Pipe, 0x1203u, (void **)&pUsbPipe);
  PipeType = pUsbPipe->m_PipeInformation.PipeType;
  if ( PipeType < 4 )
    return (unsigned int)`FxUsbPipe::_UsbdPipeTypeToWdf'::`2'::types[PipeType];
  return v2;
}
