bool __fastcall FxPowerIdleMachine::QueryReturnToIdle(FxPowerIdleMachine *this)
{
  KIRQL v2; // al
  bool v3; // bl

  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  v3 = 0;
  if ( (this->m_Flags & 0xA) == 2 )
    v3 = this->m_IoCount == 0;
  this->m_Flags &= ~0x40u;
  KeReleaseSpinLock(&this->m_Lock.m_Lock, v2);
  return v3;
}
