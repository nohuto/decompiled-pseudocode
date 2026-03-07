__int64 __fastcall FxUsbPipeTransferContext::GetUsbdStatus(FxUsbPipeTransferContext *this)
{
  return (unsigned int)this->m_Urb->Hdr.Status;
}
