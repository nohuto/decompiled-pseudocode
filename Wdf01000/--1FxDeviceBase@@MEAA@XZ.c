void __fastcall FxDeviceBase::~FxDeviceBase(FxDeviceBase *this, unsigned int a2)
{
  FxDisposeList *m_DisposeList; // rcx
  FxCallbackLock *m_CallbackLockPtr; // rcx

  this->FxNonPagedObject::FxObject::__vftable = (FxDeviceBase_vtbl *)FxDeviceBase::`vftable'{for `FxNonPagedObject'};
  this->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxDevice::`vftable'{for `IFxHasCallbacks'};
  m_DisposeList = this->m_DisposeList;
  if ( m_DisposeList )
  {
    m_DisposeList->DeleteObject(m_DisposeList);
    this->m_DisposeList = 0LL;
  }
  m_CallbackLockPtr = this->m_CallbackLockPtr;
  if ( m_CallbackLockPtr )
  {
    ((void (__fastcall *)(FxCallbackLock *, __int64))m_CallbackLockPtr->~FxCallbackLock)(m_CallbackLockPtr, 1LL);
    this->m_CallbackLockPtr = 0LL;
  }
  FxNonPagedObject::~FxNonPagedObject(this, a2);
}
