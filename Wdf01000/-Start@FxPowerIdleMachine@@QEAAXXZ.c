void __fastcall FxPowerIdleMachine::Start(FxPowerIdleMachine *this)
{
  KIRQL v2; // bl

  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  FxPowerIdleMachine::ProcessEventLocked(this, PowerIdleEventStart);
  KeReleaseSpinLock(&this->m_Lock.m_Lock, v2);
}
