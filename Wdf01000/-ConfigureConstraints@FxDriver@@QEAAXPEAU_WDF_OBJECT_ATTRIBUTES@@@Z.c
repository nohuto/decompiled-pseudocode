void __fastcall FxDriver::ConfigureConstraints(FxDriver *this, _WDF_OBJECT_ATTRIBUTES *DriverAttributes)
{
  FxCallbackMutexLock *p_m_CallbackMutexLock; // rsi
  _WDF_EXECUTION_LEVEL ExecutionLevel; // eax
  _WDF_SYNCHRONIZATION_SCOPE SynchronizationScope; // eax

  p_m_CallbackMutexLock = &this->m_CallbackMutexLock;
  this->m_CallbackMutexLock.Initialize(&this->m_CallbackMutexLock, this);
  this->m_ObjectFlags |= 0x11u;
  this->m_CallbackLockPtr = p_m_CallbackMutexLock;
  this->m_CallbackLockObjectPtr = this;
  if ( DriverAttributes )
  {
    ExecutionLevel = DriverAttributes->ExecutionLevel;
    if ( ExecutionLevel != WdfExecutionLevelInheritFromParent )
      this->m_ExecutionLevel = ExecutionLevel;
    SynchronizationScope = DriverAttributes->SynchronizationScope;
    if ( SynchronizationScope != WdfSynchronizationScopeInheritFromParent )
      this->m_SynchronizationScope = SynchronizationScope;
  }
  this->m_DriverDeviceAdd.m_CallbackLock = (FxCallbackLock *)((unsigned __int64)p_m_CallbackMutexLock & -(__int64)((unsigned int)(this->m_SynchronizationScope - 2) <= 1));
}
