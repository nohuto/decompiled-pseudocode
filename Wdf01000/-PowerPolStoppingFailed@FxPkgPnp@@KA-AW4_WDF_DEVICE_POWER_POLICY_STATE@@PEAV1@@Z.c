__int64 __fastcall FxPkgPnp::PowerPolStoppingFailed(FxPkgPnp *This)
{
  This->m_PowerPolicyMachine.m_Owner->m_PowerFailed = 1;
  return 1373LL;
}
