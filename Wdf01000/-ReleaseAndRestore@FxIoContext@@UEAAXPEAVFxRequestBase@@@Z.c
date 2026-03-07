void __fastcall FxIoContext::ReleaseAndRestore(FxIoContext *this, FxRequestBase *Request)
{
  $C01C6EA8B906FF6BB904FDF6021F3CE2 *v2; // rdi
  _MDL *m_MdlToFree; // rcx
  IFxMemory *m_OtherMemory; // rcx

  v2 = &this->128;
  if ( this->m_RestoreState )
  {
    Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)this->m_OriginalSystemBuffer;
    Request->m_Irp.m_Irp->UserBuffer = this->m_OriginalUserBuffer;
    Request->m_Irp.m_Irp->MdlAddress = v2->m_OriginalMdl;
    Request->m_Irp.m_Irp->Flags = this->m_OriginalFlags;
    this->m_OriginalSystemBuffer = 0LL;
    this->m_OriginalUserBuffer = 0LL;
    v2->m_OriginalMdl = 0LL;
    this->m_OriginalFlags = 0;
    this->m_RestoreState = 0;
  }
  m_MdlToFree = this->m_MdlToFree;
  if ( m_MdlToFree )
  {
    if ( this->m_UnlockPages )
    {
      MmUnlockPages(m_MdlToFree);
      this->m_UnlockPages = 0;
    }
    v2->m_OriginalMdl = (_MDL *)Request->m_Globals;
  }
  m_OtherMemory = this->m_OtherMemory;
  if ( m_OtherMemory )
  {
    m_OtherMemory->Release(
      m_OtherMemory,
      this,
      123,
      "minkernel\\wdf\\framework\\shared\\inc\\private\\km\\FxIoTargetKm.hpp");
    this->m_OtherMemory = 0LL;
  }
  FxRequestContext::ReleaseAndRestore(this, Request);
}
