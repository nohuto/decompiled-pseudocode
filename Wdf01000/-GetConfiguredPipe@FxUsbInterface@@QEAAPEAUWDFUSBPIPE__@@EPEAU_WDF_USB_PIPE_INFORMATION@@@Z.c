WDFUSBPIPE__ *__fastcall FxUsbInterface::GetConfiguredPipe(
        FxUsbInterface *this,
        unsigned __int8 PipeIndex,
        _WDF_USB_PIPE_INFORMATION *PipeInfo)
{
  __int64 v5; // rdi

  if ( PipeIndex >= this->m_NumberOfConfiguredPipes )
    return 0LL;
  v5 = PipeIndex;
  if ( PipeInfo )
    FxUsbPipe::GetInformation(this->m_ConfiguredPipes[PipeIndex], PipeInfo);
  return (WDFUSBPIPE__ *)FxObject::GetObjectHandleUnchecked(this->m_ConfiguredPipes[v5]);
}
