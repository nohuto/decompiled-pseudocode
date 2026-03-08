/*
 * XREFs of ?QueryForPowerThread@FxPkgPdo@@EEAAJXZ @ 0x1C0069690
 * Callers:
 *     <none>
 * Callees:
 *     ?CreatePowerThread@FxPkgPnp@@IEAAJXZ @ 0x1C0072040 (-CreatePowerThread@FxPkgPnp@@IEAAJXZ.c)
 */

int __fastcall FxPkgPdo::QueryForPowerThread(FxPkgPdo *this)
{
  return FxPkgPnp::CreatePowerThread(this);
}
