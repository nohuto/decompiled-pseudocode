__int64 __fastcall FxIoQueue::ConfigureConstraints(
        FxIoQueue *this,
        _WDF_OBJECT_ATTRIBUTES *ObjectAttributes,
        FxDriver *Caller)
{
  FxCallbackSpinLock *p_m_CallbackSpinLock; // r13
  FxCallbackLock *m_CallbackLockPtr; // rdi
  FxCallbackMutexLock *p_m_CallbackMutexLock; // r15
  _WDF_EXECUTION_LEVEL *p_m_ExecutionLevel; // r14
  _WDF_SYNCHRONIZATION_SCOPE *p_m_SynchronizationScope; // rsi
  _WDF_EXECUTION_LEVEL v11; // ecx
  bool v12; // bp
  _WDF_EXECUTION_LEVEL v13; // edx
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v15; // r10
  __int64 result; // rax
  const void *ObjectHandleUnchecked; // rax
  unsigned int v18; // edx
  unsigned int v19; // r8d
  _WDF_EXECUTION_LEVEL ParentLevel; // [rsp+90h] [rbp+8h] BYREF
  _WDF_SYNCHRONIZATION_SCOPE ParentScope; // [rsp+98h] [rbp+10h] BYREF

  p_m_CallbackSpinLock = &this->m_CallbackSpinLock;
  m_CallbackLockPtr = 0LL;
  ParentLevel = WdfExecutionLevelInvalid;
  ParentScope = WdfSynchronizationScopeInvalid;
  this->m_CallbackSpinLock.Initialize(&this->m_CallbackSpinLock, this);
  p_m_CallbackMutexLock = &this->m_CallbackMutexLock;
  this->m_CallbackMutexLock.Initialize(&this->m_CallbackMutexLock, this);
  p_m_ExecutionLevel = &this->m_ExecutionLevel;
  p_m_SynchronizationScope = &this->m_SynchronizationScope;
  if ( ObjectAttributes )
  {
    *p_m_ExecutionLevel = ObjectAttributes->ExecutionLevel;
    *p_m_SynchronizationScope = ObjectAttributes->SynchronizationScope;
  }
  this->m_DeviceBase->GetConstraints(&this->m_DeviceBase->IFxHasCallbacks, &ParentLevel, &ParentScope);
  v11 = *p_m_ExecutionLevel;
  v12 = 1;
  v13 = ParentLevel;
  if ( *p_m_ExecutionLevel == WdfExecutionLevelInheritFromParent )
  {
    *p_m_ExecutionLevel = ParentLevel;
    v11 = v13;
  }
  if ( *p_m_SynchronizationScope == WdfSynchronizationScopeInheritFromParent )
    *p_m_SynchronizationScope = ParentScope;
  if ( v11 == WdfExecutionLevelPassive )
  {
    this->m_ObjectFlags |= 0x11u;
    this->m_PassiveLevel = 1;
  }
  else
  {
    p_m_CallbackMutexLock = (FxCallbackMutexLock *)p_m_CallbackSpinLock;
  }
  this->m_CallbackLockPtr = p_m_CallbackMutexLock;
  this->m_CallbackLockObjectPtr = this;
  if ( *p_m_SynchronizationScope == WdfSynchronizationScopeDevice )
  {
    if ( Caller && Caller != this->m_Globals->Driver )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qd(v15, 2u, 0xDu, 0x14u, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741811);
      return 3221225485LL;
    }
    if ( v13 != *p_m_ExecutionLevel )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qDDd(this->m_Globals, v18, 0xDu, 0x15u, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked, v18, v19);
      return 3221225485LL;
    }
    this->m_CallbackLockPtr = this->m_DeviceBase->GetCallbackLockPtr(
                                &this->m_DeviceBase->IFxHasCallbacks,
                                &this->m_CallbackLockObjectPtr);
  }
  else
  {
    v12 = *p_m_SynchronizationScope == WdfSynchronizationScopeQueue;
  }
  if ( v12 )
    m_CallbackLockPtr = this->m_CallbackLockPtr;
  this->m_IoDefault.m_CallbackLock = m_CallbackLockPtr;
  result = 0LL;
  this->m_IoStop.m_CallbackLock = m_CallbackLockPtr;
  this->m_IoResume.m_CallbackLock = m_CallbackLockPtr;
  this->m_IoRead.m_CallbackLock = m_CallbackLockPtr;
  this->m_IoWrite.m_CallbackLock = m_CallbackLockPtr;
  this->m_IoDeviceControl.m_CallbackLock = m_CallbackLockPtr;
  this->m_IoInternalDeviceControl.m_CallbackLock = m_CallbackLockPtr;
  this->m_PurgeComplete.m_CallbackLock = m_CallbackLockPtr;
  this->m_ReadyNotify.m_CallbackLock = m_CallbackLockPtr;
  this->m_IoCanceledOnQueue.m_CallbackLock = m_CallbackLockPtr;
  this->m_IoCancelCallbackLockPtr = m_CallbackLockPtr;
  return result;
}
