void __fastcall FxPkgPnp::_PnpProcessEventInner(FxPkgPnp *This, _FX_DRIVER_GLOBALS *Info, void *WorkerContext)
{
  FxWaitLockInternal *p_m_StateMachineLock; // rsi

  p_m_StateMachineLock = &This->m_PnpMachine.m_StateMachineLock;
  FxWaitLockInternal::AcquireLock(&This->m_PnpMachine.m_StateMachineLock, Info, 0LL);
  FxPkgPnp::PnpProcessEventInner(This, (FxPostProcessInfo *)Info);
  p_m_StateMachineLock->m_OwningThread = 0LL;
  KeSetEvent(&p_m_StateMachineLock->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
}
