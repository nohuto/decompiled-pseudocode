/*
 * XREFs of ?DirectedPowerUpInitiate@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1C0084790
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C007D66C (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 */

__int64 __fastcall FxDevicePwrRequirementMachine::DirectedPowerUpInitiate(
        FxDevicePwrRequirementMachine *This,
        __int64 a2,
        unsigned __int8 a3)
{
  FxPkgPnp::PowerPolicyProcessEvent(This->m_PoxInterface->m_PkgPnp, PwrPolDeviceDirectedPowerUp, a3);
  return 4LL;
}
