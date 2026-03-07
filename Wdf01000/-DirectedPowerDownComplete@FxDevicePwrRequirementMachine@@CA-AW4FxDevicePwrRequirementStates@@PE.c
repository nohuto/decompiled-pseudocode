__int64 __fastcall FxDevicePwrRequirementMachine::DirectedPowerDownComplete(FxDevicePwrRequirementMachine *This)
{
  FxPoxInterface *m_PoxInterface; // rcx

  m_PoxInterface = This->m_PoxInterface;
  _InterlockedExchange(&m_PoxInterface->m_DirectedTransitionActive, 0);
  PoFxCompleteDirectedPowerDown(m_PoxInterface->m_PoHandle);
  return 15LL;
}
