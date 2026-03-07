__int64 __fastcall FxPkgPnp::PowerPolicyCanChildPowerUp(FxPkgPnp *this, unsigned __int8 *PowerUp)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  FxPowerPolicyOwnerSettings *v5; // rbx
  int v6; // eax
  _FX_DRIVER_GLOBALS *v7; // rdx
  FxTagTracker *m_TagTracker; // rcx
  int v9; // edi
  FxEnumerationInfo *m_EnumInfo; // rcx
  unsigned int RefCount; // [rsp+40h] [rbp+8h] BYREF

  *PowerUp = 0;
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
  {
    _InterlockedCompareExchange((volatile signed __int32 *)&m_Owner->m_DevicePowerIrpTracker.m_D0IrpReasonHint, 17, 5);
    v5 = this->m_PowerPolicyMachine.m_Owner;
    RefCount = 0;
    v6 = FxPowerIdleMachine::IoIncrementWithFlags(&v5->m_PowerIdleMachine, FxPowerReferenceDefault, &RefCount);
    m_TagTracker = v5->m_PowerIdleMachine.m_TagTracker;
    v9 = v6;
    if ( m_TagTracker && (!v6 || v6 == 259) )
      FxTagTracker::UpdateTagHistory(m_TagTracker, 0LL, 0, 0LL, TagAddRef, RefCount);
    if ( v9 < 0 )
      return (unsigned int)v9;
    FxWaitLockInternal::AcquireLock(&this->m_EnumInfo->m_PowerStateLock, v7, 0LL);
    ++this->m_PowerPolicyMachine.m_Owner->m_ChildrenPoweredOnCount;
    *PowerUp = this->m_PowerPolicyMachine.m_Owner->m_ChildrenCanPowerUp;
    m_EnumInfo = this->m_EnumInfo;
    m_EnumInfo->m_PowerStateLock.m_OwningThread = 0LL;
    KeSetEvent(&m_EnumInfo->m_PowerStateLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
  }
  else
  {
    *PowerUp = 1;
  }
  return 0LL;
}
