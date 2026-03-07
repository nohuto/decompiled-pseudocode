void __fastcall FxRequestBase::ClearFieldsForReuse(FxRequestBase *this)
{
  _MDL *m_AllocatedMdl; // rcx
  FxRequestTimer *m_Timer; // rcx

  m_AllocatedMdl = this->m_AllocatedMdl;
  if ( m_AllocatedMdl )
  {
    if ( this->m_Globals->FxVerifierOn )
      FxMdlFreeDebug(this->m_Globals, m_AllocatedMdl);
    else
      IoFreeMdl(m_AllocatedMdl);
    this->m_AllocatedMdl = 0LL;
  }
  m_Timer = this->m_Timer;
  *(_WORD *)&this->m_RequestBaseFlags = 0;
  this->m_VerifierFlags = 0;
  *(_WORD *)&this->m_Completed = 0;
  this->m_PriorityBoost = 0;
  this->m_NextStackLocationFormatted = 0;
  if ( m_Timer )
  {
    FxRequestTimer::`scalar deleting destructor'(m_Timer);
    this->m_Timer = 0LL;
  }
  this->m_Target = 0LL;
  this->m_TargetFlags = 0;
  this->m_TargetCompletionContext = 0LL;
  this->m_DrainSingleEntry.Next = 0LL;
  this->m_IrpCompletionReferenceCount = 0;
  this->m_CompletionState = 0;
  this->m_CsqContext.Irp = (_IRP *)&this->120;
  this->m_ListEntry.Flink = (_LIST_ENTRY *)&this->120;
}
