__int64 __fastcall FxWakeInterruptMachine::Dx(FxWakeInterruptMachine *This)
{
  FxSystemWorkItem *m_SystemWorkItem; // rdi

  KeFlushQueuedDpcs();
  m_SystemWorkItem = This->m_Interrupt->m_SystemWorkItem;
  if ( m_SystemWorkItem )
  {
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&m_SystemWorkItem->m_WorkItemCompleted, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
  }
  FxPkgPnp::AckPendingWakeInterruptOperation(This->m_PkgPnp, 0);
  return 10LL;
}
