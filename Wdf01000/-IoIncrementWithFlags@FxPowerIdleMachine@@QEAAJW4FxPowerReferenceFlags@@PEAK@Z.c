__int64 __fastcall FxPowerIdleMachine::IoIncrementWithFlags(
        FxPowerIdleMachine *this,
        FxPowerReferenceFlags Flags,
        unsigned int *Count)
{
  char v5; // r14
  KIRQL v6; // al
  unsigned __int8 m_Flags; // cl
  KIRQL v8; // r15
  unsigned int v9; // ebx
  unsigned int v10; // eax

  v5 = Flags;
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  m_Flags = this->m_Flags;
  v8 = v6;
  if ( (m_Flags & 0x10) != 0 || (m_Flags & 0x20) == 0 )
  {
    v9 = -1073741101;
  }
  else
  {
    v9 = 0;
    v10 = this->m_IoCount + 1;
    this->m_IoCount = v10;
    if ( Count )
      *Count = v10;
    FxPowerIdleMachine::ProcessEventLocked(this, PowerIdleEventIoIncrement);
    if ( !KeReadStateEvent(&this->m_D0NotificationEvent.m_Event.m_Event) )
    {
      v9 = 259;
      if ( (v5 & 1) != 0 )
        this->m_Flags |= 0x80u;
    }
  }
  KeReleaseSpinLock(&this->m_Lock.m_Lock, v8);
  return v9;
}
