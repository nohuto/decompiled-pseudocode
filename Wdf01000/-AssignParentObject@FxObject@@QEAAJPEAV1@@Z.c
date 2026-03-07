__int64 __fastcall FxObject::AssignParentObject(FxObject *this, FxObject *ParentObject)
{
  KIRQL v4; // r14
  int v5; // edi

  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  if ( this->m_ObjectState == 1 )
  {
    if ( this->m_ParentObject )
    {
      v5 = -1071644147;
    }
    else
    {
      v5 = FxObject::AddChildObjectInternal(ParentObject, this);
      if ( v5 >= 0 )
        this->m_ParentObject = ParentObject;
    }
  }
  else
  {
    FxObject::TraceDroppedEvent(this, FxObjectDroppedEventAssignParentObject);
    v5 = -1073741738;
  }
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v4);
  return (unsigned int)v5;
}
