__int64 __fastcall FxVerifierLock::Initialize(FxVerifierLock *this)
{
  if ( this->m_UseMutex )
  {
    this->m_Mutex.m_Lock.Count = 1;
    this->m_Mutex.m_Lock.Owner = 0LL;
    this->m_Mutex.m_Lock.Contention = 0;
    KeInitializeEvent(&this->m_Mutex.m_Lock.Event, SynchronizationEvent, 0);
    this->m_Mutex.m_DbgFlagIsInitialized = 1;
  }
  return 0LL;
}
