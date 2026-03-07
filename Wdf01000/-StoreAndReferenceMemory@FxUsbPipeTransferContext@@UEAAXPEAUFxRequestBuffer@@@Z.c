void __fastcall FxUsbPipeTransferContext::StoreAndReferenceMemory(
        FxUsbPipeTransferContext *this,
        FxRequestBuffer *Buffer)
{
  _MDL *m_PartialMdl; // rcx

  memset(this->m_Urb, 0, sizeof(_URB_BULK_OR_INTERRUPT_TRANSFER));
  this->m_Urb->Hdr.Function = 9;
  this->m_Urb->Hdr.Length = 128;
  FxRequestContext::_StoreAndReferenceMemoryWorker(this, &this->m_RequestMemory, Buffer);
  FxRequestBuffer::AssignValues(
    Buffer,
    (_MDL **)&this->m_Urb->TransferBuffer,
    &this->m_Urb->TransferBufferMDL,
    &this->m_Urb->TransferBufferLength);
  m_PartialMdl = this->m_PartialMdl;
  if ( m_PartialMdl )
    this->m_Urb->TransferBufferMDL = m_PartialMdl;
}
