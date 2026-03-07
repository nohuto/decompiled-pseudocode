void __fastcall FxObject::DeleteEarlyDisposedObject(FxObject *this)
{
  unsigned __int64 *p_m_Lock; // rdi
  KIRQL v3; // al
  FxObject *m_ParentObject; // rcx
  KIRQL v5; // si

  this->m_ObjectFlags |= 4u;
  if ( !this->m_ParentObject )
    goto LABEL_2;
  p_m_Lock = &this->m_SpinLock.m_Lock;
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  m_ParentObject = this->m_ParentObject;
  v5 = v3;
  if ( !m_ParentObject )
  {
LABEL_7:
    KeReleaseSpinLock(p_m_Lock, v5);
LABEL_2:
    FxObject::DeletedAndDisposedWorkerLocked(this, 0, 0);
    return;
  }
  if ( FxObject::RemoveChildObjectInternal(m_ParentObject, this) != -1073741738 )
  {
    this->m_ParentObject = 0LL;
    goto LABEL_7;
  }
  FxObject::SetObjectStateLocked(this, FxObjectStateWaitingForParentDeleteAndDisposed);
  KeReleaseSpinLock(p_m_Lock, v5);
}
