unsigned __int8 __fastcall FxObject::EarlyDispose(FxObject *this)
{
  unsigned __int64 *p_m_Lock; // rsi
  KIRQL v3; // al
  char v4; // di
  unsigned __int8 v5; // bp
  FxObject *m_ParentObject; // rcx

  p_m_Lock = &this->m_SpinLock.m_Lock;
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  v4 = 0;
  v5 = v3;
  if ( this->m_ObjectState != 1 )
  {
    KeReleaseSpinLock(p_m_Lock, v3);
    return v4;
  }
  m_ParentObject = this->m_ParentObject;
  if ( !m_ParentObject )
  {
LABEL_3:
    this->m_ObjectFlags |= 0x100u;
    return FxObject::PerformEarlyDisposeWorkerAndUnlock(this, v5, 1u);
  }
  if ( FxObject::RemoveChildObjectInternal(m_ParentObject, this) != -1073741738 )
  {
    this->m_ParentObject = 0LL;
    goto LABEL_3;
  }
  FxObject::SetObjectStateLocked(this, FxObjectStateWaitingForEarlyDispose);
  KeReleaseSpinLock(p_m_Lock, v5);
  return 0;
}
