__int64 __fastcall FxPkgPnp::PowerPolSleepingNoWakePowerDown(FxPkgPnp *This)
{
  FxPowerPolicyOwnerSettings *m_Owner; // r8
  _DEVICE_POWER_STATE m_IdealDxStateForSx; // r9d
  int v3; // eax
  unsigned int v4; // ecx

  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  m_IdealDxStateForSx = m_Owner->m_IdealDxStateForSx;
  if ( m_IdealDxStateForSx != PowerDeviceD3
    && m_IdealDxStateForSx < (int)((m_Owner->m_SystemToDeviceStateMap & (15 << (4
                                                                              * (BYTE1(This->m_PendingSystemPowerIrp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length) & 0xF)))) >> (4 * (BYTE1(This->m_PendingSystemPowerIrp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length) & 0xF))) )
  {
    m_IdealDxStateForSx = (m_Owner->m_SystemToDeviceStateMap & (15 << (4
                                                                     * (BYTE1(This->m_PendingSystemPowerIrp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length) & 0xF)))) >> (4 * (BYTE1(This->m_PendingSystemPowerIrp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length) & 0xF));
  }
  v3 = FxPkgPnp::PowerPolicyPowerDownForSx(This, m_IdealDxStateForSx, Retry);
  v4 = 1472;
  if ( v3 < 0 )
    return 1321;
  return v4;
}
