__int64 __fastcall FxPkgPnp::PowerPolRemoved(FxPkgPnp *This)
{
  KIRQL v2; // bl
  unsigned __int8 v3; // r8

  v2 = KfRaiseIrql(2u);
  FxPkgPnp::PnpProcessEvent(This, PnpEventPwrPolRemoved, v3);
  KeLowerIrql(v2);
  return 1472LL;
}
