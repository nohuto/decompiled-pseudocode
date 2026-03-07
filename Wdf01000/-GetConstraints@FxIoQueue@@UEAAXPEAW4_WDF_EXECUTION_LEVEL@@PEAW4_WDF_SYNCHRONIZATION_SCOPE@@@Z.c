void __fastcall FxIoQueue::GetConstraints(
        FxIoQueue *this,
        _WDF_EXECUTION_LEVEL *ExecutionLevel,
        _WDF_SYNCHRONIZATION_SCOPE *SynchronizationScope)
{
  if ( ExecutionLevel )
    *ExecutionLevel = (_WDF_EXECUTION_LEVEL)this->m_IoDeviceControl.Method;
  if ( SynchronizationScope )
    *SynchronizationScope = SHIDWORD(this->m_IoDeviceControl.Method);
}
