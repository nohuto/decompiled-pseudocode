__int64 __fastcall FxPkgPnp::HandleQueryPnpDeviceState(FxPkgPnp *this, unsigned int PnpDeviceState)
{
  bool v3; // al
  unsigned int v4; // edx
  unsigned int v5; // ebx
  FxCompanionTarget *m_CompanionTarget; // rdi

  v3 = FxPkgPnp::IsInSpecialUse(this);
  v5 = v4 | 0x20;
  if ( !v3 )
    v5 = v4;
  if ( this->m_InternalFailure || this->m_Failed )
    v5 |= 4u;
  m_CompanionTarget = this->m_CompanionTarget;
  if ( m_CompanionTarget && (int)FxCompanionTarget::IncrementPendingTaskCountWithFloor(m_CompanionTarget) >= 0 )
  {
    m_CompanionTarget->m_RdDeviceCompanion->QueryPnPDeviceStateNotification(m_CompanionTarget->m_RdDeviceCompanion);
    FxCompanionTarget::DecrementPendingTaskCount(m_CompanionTarget);
  }
  return v5;
}
