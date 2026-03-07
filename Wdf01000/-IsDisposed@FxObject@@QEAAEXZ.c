bool __fastcall FxObject::IsDisposed(FxObject *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned __int64 *p_m_Lock; // rdi
  KIRQL v4; // al
  bool v5; // bl

  m_Globals = this->m_Globals;
  if ( !m_Globals->FxVerifierOn || !m_Globals->FxVerifierHandle )
    return 1;
  p_m_Lock = &this->m_SpinLock.m_Lock;
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  v5 = this->m_ObjectState != 1;
  KeReleaseSpinLock(p_m_Lock, v4);
  return v5;
}
