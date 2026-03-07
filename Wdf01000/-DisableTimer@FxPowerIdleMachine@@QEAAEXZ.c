unsigned __int8 __fastcall FxPowerIdleMachine::DisableTimer(FxPowerIdleMachine *this)
{
  unsigned __int64 *p_m_Lock; // rsi
  FxPowerIdleMachine *v2; // rbx
  KIRQL v3; // di

  p_m_Lock = &this->m_Lock.m_Lock;
  v2 = this;
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  FxPowerIdleMachine::ProcessEventLocked(v2, PowerIdleEventDisabled);
  LOBYTE(v2) = (v2->m_Flags & 8) == 0;
  KeReleaseSpinLock(p_m_Lock, v3);
  return (unsigned __int8)v2;
}
