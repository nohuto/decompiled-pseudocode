void __fastcall FxPowerIdleMachine::EnableTimer(FxPowerIdleMachine *this)
{
  KIRQL v2; // bl

  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  FxPowerIdleMachine::ProcessEventLocked(this, PowerIdleEventEnabled);
  KeReleaseSpinLock(&this->m_Lock.m_Lock, v2);
}
