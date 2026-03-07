int __fastcall FxObject::Commit(
        FxObject *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        void **ObjectHandle,
        _FX_DRIVER_GLOBALS *Parent,
        unsigned __int8 AssignDriverAsDefaultParent)
{
  _FX_DRIVER_GLOBALS *Driver; // rdx
  int result; // eax
  __int64 m_ObjectSize; // rax
  char *v12; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  void *PPObject; // [rsp+40h] [rbp+8h] BYREF

  Driver = 0LL;
  PPObject = 0LL;
  if ( !this->m_ObjectSize )
    return -1073741816;
  if ( Attributes && Attributes->ExecutionLevel == WdfExecutionLevelPassive )
  {
    FxObject::MarkPassiveCallbacks(this, ObjectLock);
    Driver = (_FX_DRIVER_GLOBALS *)PPObject;
  }
  if ( Parent )
  {
    Driver = Parent;
LABEL_28:
    PPObject = Driver;
    goto LABEL_9;
  }
  if ( Attributes && Attributes->ParentObject )
  {
    FxObjectHandleGetPtr(this->m_Globals, Attributes->ParentObject, 0x1000u, &PPObject);
    Driver = (_FX_DRIVER_GLOBALS *)PPObject;
    goto LABEL_9;
  }
  if ( AssignDriverAsDefaultParent && !this->m_ParentObject )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->Driver != this )
      Driver = (_FX_DRIVER_GLOBALS *)m_Globals->Driver;
    goto LABEL_28;
  }
LABEL_9:
  if ( !Driver || (result = FxObject::AssignParentObject(this, (FxObject *)Driver), result >= 0) )
  {
    if ( Attributes )
    {
      m_ObjectSize = this->m_ObjectSize;
      if ( (_WORD)m_ObjectSize )
        v12 = (char *)this + m_ObjectSize;
      else
        v12 = 0LL;
      EvtDestroyCallback = Attributes->EvtDestroyCallback;
      if ( EvtDestroyCallback )
        *((_QWORD *)v12 + 3) = EvtDestroyCallback;
      EvtCleanupCallback = Attributes->EvtCleanupCallback;
      if ( EvtCleanupCallback )
      {
        *((_QWORD *)v12 + 2) = EvtCleanupCallback;
        this->m_ObjectFlags |= 0x400u;
      }
    }
    this->m_ObjectFlags |= 8u;
    if ( ObjectHandle )
      *ObjectHandle = FxObject::GetObjectHandleUnchecked(this);
    if ( this->m_Globals->FxVerifierOn )
      FxObject::Vf_VerifyLeakDetectionConsiderObject(this, Driver);
    return 0;
  }
  return result;
}
