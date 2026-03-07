void __fastcall FxCallbackMutexLock::Unlock(FxCallbackMutexLock *this, unsigned __int8 PreviousIrql)
{
  unsigned __int8 v4; // r8
  unsigned int m_RecursionCount; // eax
  FxVerifierLock *m_Verifier; // rcx

  FxCallbackLock::CheckOwnership(this);
  m_RecursionCount = this->m_RecursionCount;
  if ( m_RecursionCount )
  {
    this->m_RecursionCount = m_RecursionCount - 1;
  }
  else
  {
    this->m_OwnerThread = 0LL;
    m_Verifier = this->m_Verifier;
    if ( m_Verifier )
    {
      FxVerifierLock::Unlock(m_Verifier, PreviousIrql, v4);
    }
    else
    {
      ExReleaseFastMutexUnsafe(&this->m_Lock.m_Lock);
      KeLeaveCriticalRegion();
    }
  }
}
