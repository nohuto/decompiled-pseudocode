/*
 * XREFs of ?PowerGotoDxNPFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006F000
 * Callers:
 *     <none>
 * Callees:
 *     ?DisconnectInterruptNP@FxPkgPnp@@AEAAXXZ @ 0x1C006DD1C (-DisconnectInterruptNP@FxPkgPnp@@AEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoDxNPFailed(FxPkgPnp *This)
{
  FxPkgPnp::DisconnectInterruptNP(This);
  return 832LL;
}
