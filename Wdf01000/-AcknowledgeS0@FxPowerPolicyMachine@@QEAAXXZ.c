/*
 * XREFs of ?AcknowledgeS0@FxPowerPolicyMachine@@QEAAXXZ @ 0x1C007A2DC
 * Callers:
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C007D880 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPowerPolicyMachine::AcknowledgeS0(FxPowerPolicyMachine *this)
{
  if ( (this->m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
    PoFxReportDevicePoweredOn(this->m_Owner->m_PoxInterface.m_PoHandle);
}
