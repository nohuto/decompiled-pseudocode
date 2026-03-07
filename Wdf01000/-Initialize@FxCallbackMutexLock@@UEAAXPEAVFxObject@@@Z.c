void __fastcall FxCallbackMutexLock::Initialize(FxCallbackMutexLock *this, FxObject *ParentObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx

  this->m_Verifier = 0LL;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierLock )
    FxVerifierLock::CreateAndInitialize(&this->m_Verifier, m_Globals, ParentObject, 1u);
}
