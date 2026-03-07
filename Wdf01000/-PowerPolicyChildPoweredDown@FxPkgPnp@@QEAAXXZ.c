void __fastcall FxPkgPnp::PowerPolicyChildPoweredDown(FxPkgPnp *this, _FX_DRIVER_GLOBALS *a2)
{
  FxEnumerationInfo *m_EnumInfo; // rcx

  if ( this->m_PowerPolicyMachine.m_Owner )
  {
    FxWaitLockInternal::AcquireLock(&this->m_EnumInfo->m_PowerStateLock, a2, 0LL);
    --this->m_PowerPolicyMachine.m_Owner->m_ChildrenPoweredOnCount;
    m_EnumInfo = this->m_EnumInfo;
    m_EnumInfo->m_PowerStateLock.m_OwningThread = 0LL;
    KeSetEvent(&m_EnumInfo->m_PowerStateLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
    FxPowerIdleMachine::IoDecrement(&this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine, 0LL, 0, 0LL);
  }
}
