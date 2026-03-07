void __fastcall FxObject::DeleteObject(FxObject *this)
{
  unsigned __int64 *p_m_Lock; // rsi
  KIRQL v3; // al
  int m_ObjectState; // r8d
  unsigned __int8 v5; // di
  int v6; // r8d
  FxObject *m_ParentObject; // rcx
  FxObject *v9; // rcx
  FxObjectState v10; // edx

  p_m_Lock = &this->m_SpinLock.m_Lock;
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  m_ObjectState = this->m_ObjectState;
  this->m_ObjectFlags |= 4u;
  v5 = v3;
  if ( !m_ObjectState )
    goto LABEL_8;
  v6 = m_ObjectState - 1;
  if ( !v6 )
  {
    m_ParentObject = this->m_ParentObject;
    if ( !m_ParentObject )
    {
LABEL_6:
      FxObject::DeleteWorkerAndUnlock(this, v5, v6);
      return;
    }
    if ( FxObject::RemoveChildObjectInternal(m_ParentObject, this) != -1073741738 )
    {
      this->m_ParentObject = 0LL;
      goto LABEL_6;
    }
    v10 = FxObjectStateWaitingForEarlyDispose;
    goto LABEL_14;
  }
  if ( v6 - 1 )
  {
LABEL_8:
    FxObject::TraceDroppedEvent(this, FxObjectDroppedEventDeleteObject);
LABEL_9:
    KeReleaseSpinLock(p_m_Lock, v5);
    return;
  }
  v9 = this->m_ParentObject;
  if ( v9 )
  {
    if ( FxObject::RemoveChildObjectInternal(v9, this) == -1073741738 )
    {
      v10 = FxObjectStateWaitingForParentDeleteAndDisposed;
LABEL_14:
      FxObject::SetObjectStateLocked(this, v10);
      goto LABEL_9;
    }
    this->m_ParentObject = 0LL;
  }
  FxObject::DeletedAndDisposedWorkerLocked(this, v5, 1u);
}
