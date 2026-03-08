/*
 * XREFs of ?GetConstraints@FxDriver@@UEAAXPEAW4_WDF_EXECUTION_LEVEL@@PEAW4_WDF_SYNCHRONIZATION_SCOPE@@@Z @ 0x1C0039330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxDriver::GetConstraints(
        FxDriver *this,
        _WDF_EXECUTION_LEVEL *ExecutionLevel,
        _WDF_SYNCHRONIZATION_SCOPE *SynchronizationScope)
{
  if ( ExecutionLevel )
    *ExecutionLevel = (_WDF_EXECUTION_LEVEL)this->m_ParentObject;
  if ( SynchronizationScope )
    *SynchronizationScope = SHIDWORD(this->m_ParentObject);
}
