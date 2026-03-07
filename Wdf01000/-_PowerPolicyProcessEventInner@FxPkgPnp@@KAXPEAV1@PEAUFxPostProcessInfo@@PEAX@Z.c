void __fastcall FxPkgPnp::_PowerPolicyProcessEventInner(FxPkgPnp *This, _FX_DRIVER_GLOBALS *Info, void *Context)
{
  FxWaitLockInternal *p_m_StateMachineLock; // rsi

  p_m_StateMachineLock = &This->m_PowerPolicyMachine.m_StateMachineLock;
  FxWaitLockInternal::AcquireLock(&This->m_PowerPolicyMachine.m_StateMachineLock, Info, 0LL);
  FxPkgPnp::PowerPolicyProcessEventInner(This, (FxPostProcessInfo *)Info);
  p_m_StateMachineLock->m_OwningThread = 0LL;
  KeSetEvent(&p_m_StateMachineLock->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
}
