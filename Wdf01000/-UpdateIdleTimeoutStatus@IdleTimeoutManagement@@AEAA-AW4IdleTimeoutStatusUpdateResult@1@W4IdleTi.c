__int64 __fastcall IdleTimeoutManagement::UpdateIdleTimeoutStatus(
        IdleTimeoutManagement *this,
        IdleTimeoutManagement::IdleTimeoutStatusFlag Flag)
{
  volatile int m_IdleTimeoutStatus; // eax
  signed __int32 v4; // eax
  volatile int v5; // ett

  m_IdleTimeoutStatus = this->m_IdleTimeoutStatus;
  if ( (this->m_IdleTimeoutStatus & Flag) != 0 )
    return 1LL;
  if ( (m_IdleTimeoutStatus & 1) != 0 )
    return 2LL;
  v5 = this->m_IdleTimeoutStatus;
  v4 = _InterlockedCompareExchange(&this->m_IdleTimeoutStatus, Flag | m_IdleTimeoutStatus, m_IdleTimeoutStatus);
  if ( v5 == v4 )
    return 0LL;
  else
    return ((v4 & 1) == 0) | 2u;
}
