void __fastcall imp_WdfUsbTargetPipeGetInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        _WDF_USB_PIPE_INFORMATION *PipeInformation)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]
  FxUsbPipe *pUsbPipe; // [rsp+30h] [rbp+8h] BYREF

  pUsbPipe = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Pipe, 0x1203u, (void **)&pUsbPipe);
  if ( !PipeInformation )
    FxVerifierNullBugCheck(pUsbPipe->m_Globals, retaddr);
  FxUsbPipe::GetInformation(pUsbPipe, PipeInformation);
}
