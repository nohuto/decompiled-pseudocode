void __fastcall FxPowerPolicyMachine::AcknowledgeS0(FxPowerPolicyMachine *this)
{
  if ( (this->m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
    PoFxReportDevicePoweredOn(this->m_Owner->m_PoxInterface.m_PoHandle);
}
