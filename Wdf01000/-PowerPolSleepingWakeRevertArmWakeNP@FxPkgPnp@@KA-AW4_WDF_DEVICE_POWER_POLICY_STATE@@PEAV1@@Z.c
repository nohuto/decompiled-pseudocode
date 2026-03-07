__int64 __fastcall FxPkgPnp::PowerPolSleepingWakeRevertArmWakeNP(FxPkgPnp *This)
{
  WPP_IFR_SF_(This->m_Globals, 2u, 0xCu, 0x1Eu, WPP_PowerPolicyStateMachine_cpp_Traceguids);
  FxPkgPnp::PowerPolicyDisarmWakeFromSx(This);
  return 34237LL;
}
