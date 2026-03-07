void __fastcall FxIoQueue::SetTransitionFromEmpty(FxIoQueue *this)
{
  bool v1; // zf
  __int64 v3; // rdx
  FxDeviceBase *m_DeviceBase; // rax
  FxPowerIdleMachine *v5; // rbx
  int v6; // eax
  FxTagTracker *m_TagTracker; // rcx
  int v8; // esi
  unsigned int Count; // [rsp+40h] [rbp+8h] BYREF

  v1 = this->m_IsDevicePowerPolicyOwner == 0;
  this->m_TransitionFromEmpty = 1;
  this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
  if ( !v1 && this->m_PowerManaged && !this->m_PowerReferenced )
  {
    v3 = *(_QWORD *)(*(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 888LL);
    if ( v3 )
      _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 748), 11, 5);
    m_DeviceBase = this->m_DeviceBase;
    Count = 0;
    v5 = *(FxPowerIdleMachine **)(*(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 888LL);
    v6 = FxPowerIdleMachine::IoIncrementWithFlags(v5, FxPowerReferenceDefault, &Count);
    m_TagTracker = v5->m_TagTracker;
    v8 = v6;
    if ( m_TagTracker && (!v6 || v6 == 259) )
      FxTagTracker::UpdateTagHistory(m_TagTracker, 0LL, 0, 0LL, TagAddRef, Count);
    if ( v8 >= 0 )
      this->m_PowerReferenced = 1;
  }
}
