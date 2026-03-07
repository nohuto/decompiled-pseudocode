__int64 __fastcall FxUsbPipe::GetMaxPacketSize(FxUsbPipe *this)
{
  if ( (this->m_PipeInformation.PipeFlags & 0x10000) != 0 )
    return this->m_PipeInformation.MaximumTransferSize;
  else
    return this->m_PipeInformation.MaximumPacketSize;
}
