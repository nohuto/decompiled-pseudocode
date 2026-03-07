void __fastcall FxPowerIdleMachine::~FxPowerIdleMachine(FxPowerIdleMachine *this, __int64 a2)
{
  FxTagTracker *m_TagTracker; // rcx

  m_TagTracker = this->m_TagTracker;
  if ( m_TagTracker )
  {
    FxTagTracker::`scalar deleting destructor'(m_TagTracker);
    this->m_TagTracker = 0LL;
  }
  MxTimer::~MxTimer(&this->m_PowerTimeoutTimer, a2);
  this->m_Lock.m_DbgFlagIsInitialized = 0;
}
