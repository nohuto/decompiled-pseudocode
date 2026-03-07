void __fastcall FxUsbPipeTransferContext::ReleaseAndRestore(FxUsbPipeTransferContext *this, FxRequestBase *Request)
{
  _MDL *m_PartialMdl; // rcx

  m_PartialMdl = this->m_PartialMdl;
  if ( m_PartialMdl )
  {
    if ( this->m_UnlockPages )
    {
      MmUnlockPages(m_PartialMdl);
      this->m_UnlockPages = 0;
    }
    if ( Request->m_Globals->FxVerifierOn )
      FxMdlFreeDebug(Request->m_Globals, this->m_PartialMdl);
    else
      IoFreeMdl(this->m_PartialMdl);
    this->m_PartialMdl = 0LL;
  }
  FxRequestContext::ReleaseAndRestore(this, Request);
}
