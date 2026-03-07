__int64 __fastcall FxPkgPnp::PowerPolSystemWakeDeviceWakeDisabled(FxPkgPnp *This)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rax

  if ( (This->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
    return 1326LL;
  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  if ( !m_Owner->m_IdleSettings.Enabled || m_Owner->m_IdleSettings.WakeFromS0Capable )
    return 1326LL;
  else
    return m_Owner->m_IdleSettings.PowerUpIdleDeviceOnSystemWake != 0 ? 1326 : 1328;
}
