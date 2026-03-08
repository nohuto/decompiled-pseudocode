/*
 * XREFs of ?PowerWakingConnectInterruptFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0070310
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ @ 0x1C006E00C (-PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingConnectInterruptFailed(FxPkgPnp *This)
{
  FxPkgPnp::PowerConnectInterruptFailed(This);
  return 829LL;
}
