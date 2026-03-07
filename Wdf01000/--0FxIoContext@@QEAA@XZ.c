void __fastcall FxIoContext::FxIoContext(FxIoContext *this)
{
  this->m_RequestType = 1;
  this->m_RequestMemory = 0LL;
  memset(&this->m_CompletionParams, 0, sizeof(this->m_CompletionParams));
  this->m_CompletionParams.Size = 72;
  this->m_CompletionParams.Type = WdfRequestTypeNoFormat;
  this->__vftable = (FxIoContext_vtbl *)FxIoContext::`vftable';
  this->m_BufferToFree = 0LL;
  this->m_OriginalSystemBuffer = 0LL;
  this->m_OriginalUserBuffer = 0LL;
  this->m_MdlToFree = 0LL;
  this->m_OriginalMdl = 0LL;
  this->m_BufferToFreeLength = 0LL;
  this->m_MdlToFreeSize = 0LL;
  *(_WORD *)&this->m_CopyBackToBuffer = 0;
  this->m_RestoreState = 0;
  this->m_OtherMemory = 0LL;
}
