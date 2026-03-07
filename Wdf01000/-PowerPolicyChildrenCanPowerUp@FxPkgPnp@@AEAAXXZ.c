void __fastcall FxPkgPnp::PowerPolicyChildrenCanPowerUp(FxPkgPnp *this, _FX_DRIVER_GLOBALS *a2)
{
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxEnumerationInfo *v4; // rcx

  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo )
  {
    if ( this->m_PowerPolicyMachine.m_Owner )
    {
      FxWaitLockInternal::AcquireLock(&m_EnumInfo->m_PowerStateLock, a2, 0LL);
      this->m_PowerPolicyMachine.m_Owner->m_ChildrenCanPowerUp = 1;
      v4 = this->m_EnumInfo;
      v4->m_PowerStateLock.m_OwningThread = 0LL;
      KeSetEvent(&v4->m_PowerStateLock.m_Event.m_Event, 0, 0);
      KeLeaveCriticalRegion();
      FxPkgPnp::PowerPolicyPostParentToD0ToChildren(this);
    }
  }
}
