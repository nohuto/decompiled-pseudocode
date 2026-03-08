/*
 * XREFs of ?DirectedPowerUpComplete@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1C0009A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDevicePwrRequirementMachine::DirectedPowerUpComplete(FxDevicePwrRequirementMachine *This)
{
  _InterlockedExchange(&This->m_PoxInterface->m_DirectedTransitionActive, 0);
  return 15LL;
}
