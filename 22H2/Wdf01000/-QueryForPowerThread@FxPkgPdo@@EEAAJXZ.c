/*
 * XREFs of ?QueryForPowerThread@FxPkgPdo@@EEAAJXZ @ 0x1C0079780
 * Callers:
 *     <none>
 * Callees:
 *     ?CreatePowerThread@FxPkgPnp@@IEAAJXZ @ 0x1C007FF80 (-CreatePowerThread@FxPkgPnp@@IEAAJXZ.c)
 */

int __fastcall FxPkgPdo::QueryForPowerThread(FxPkgPdo *this)
{
  return FxPkgPnp::CreatePowerThread(this);
}
