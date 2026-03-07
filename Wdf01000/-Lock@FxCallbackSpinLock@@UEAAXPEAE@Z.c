void __fastcall FxCallbackSpinLock::Lock(FxCallbackSpinLock *this, unsigned __int8 *PreviousIrql, unsigned __int8 a3)
{
  _KTHREAD *CurrentThread; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxVerifierLock *m_Verifier; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( this->m_OwnerThread == CurrentThread )
  {
    m_Globals = this->m_Globals;
    ++this->m_RecursionCount;
    WPP_IFR_SF_q(m_Globals, 1u, 0x12u, 0xAu, WPP_FxCallbackSpinLock_hpp_Traceguids, this);
    FxVerifierBugCheckWorker(m_Globals, WDF_RECURSIVE_LOCK, (unsigned __int64)this, 0LL);
  }
  m_Verifier = this->m_Verifier;
  if ( m_Verifier )
    FxVerifierLock::Lock(m_Verifier, PreviousIrql, a3);
  else
    *PreviousIrql = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  this->m_OwnerThread = CurrentThread;
}
