FxObject *__fastcall FxObject::GetParentObjectReferenced(FxObject *this, void *Tag)
{
  unsigned __int64 *p_m_Lock; // rdi
  KIRQL v5; // si
  FxObject *m_ParentObject; // rbx

  p_m_Lock = &this->m_SpinLock.m_Lock;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  if ( this->m_ObjectState == 1 )
  {
    m_ParentObject = this->m_ParentObject;
    if ( m_ParentObject )
      FxObject::AddRef(m_ParentObject, Tag, 1027, "minkernel\\wdf\\framework\\shared\\object\\fxobject.cpp");
  }
  else
  {
    m_ParentObject = 0LL;
  }
  KeReleaseSpinLock(p_m_Lock, v5);
  return m_ParentObject;
}
