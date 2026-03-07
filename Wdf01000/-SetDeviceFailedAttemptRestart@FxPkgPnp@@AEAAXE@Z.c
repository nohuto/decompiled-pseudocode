void __fastcall FxPkgPnp::SetDeviceFailedAttemptRestart(FxPkgPnp *this, unsigned __int8 ReenumerateAlways)
{
  FxSystemWorkItem *m_SetDeviceFailedAttemptRestartWorkItem; // rcx
  void (__fastcall *v5)(void *); // rdx

  if ( KeGetCurrentIrql() )
  {
    m_SetDeviceFailedAttemptRestartWorkItem = this->m_SetDeviceFailedAttemptRestartWorkItem;
    if ( m_SetDeviceFailedAttemptRestartWorkItem )
    {
      v5 = FxPkgPnp::_WorkItemSetDeviceFailedRestartAlways;
      if ( !ReenumerateAlways )
        v5 = FxPkgPnp::_WorkItemSetDeviceFailedAttemptRestart;
      FxSystemWorkItem::EnqueueWorker(m_SetDeviceFailedAttemptRestartWorkItem, v5, this, 0);
      return;
    }
$InvalidateDevice:
    FxPkgPnp::InvalidateDeviceState(this);
    return;
  }
  if ( !ReenumerateAlways && !FxPkgPnp::PnpCheckAndIncrementRestartCount(this)
    || this->AskParentToRemoveAndReenumerate(this) < 0 )
  {
    goto $InvalidateDevice;
  }
}
