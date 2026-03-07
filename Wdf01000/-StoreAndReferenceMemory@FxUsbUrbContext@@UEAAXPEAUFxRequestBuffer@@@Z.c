void __fastcall FxUsbUrbContext::StoreAndReferenceMemory(FxUsbUrbContext *this, FxRequestBuffer *Buffer)
{
  unsigned int dummy; // [rsp+30h] [rbp+8h] BYREF

  FxRequestContext::_StoreAndReferenceMemoryWorker(this, &this->m_RequestMemory, Buffer);
  FxRequestBuffer::AssignValues(Buffer, (void **)&this->m_pUrb, 0LL, &dummy);
}
