void __fastcall FxPowerIdleMachine::Stop(FxPowerIdleMachine *this)
{
  KIRQL v2; // bl

  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  FxPowerIdleMachine::ProcessEventLocked(this, PowerIdleEventStop);
  KeReleaseSpinLock(&this->m_Lock.m_Lock, v2);
}
