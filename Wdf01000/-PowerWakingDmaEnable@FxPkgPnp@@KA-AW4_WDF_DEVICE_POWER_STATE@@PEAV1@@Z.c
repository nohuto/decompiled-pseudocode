/*
 * XREFs of ?PowerWakingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0070450
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ @ 0x1C006E4DC (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingDmaEnable(FxPkgPnp *This)
{
  return FxPkgPnp::PowerDmaEnableAndScan(This) != 0 ? 867 : 827;
}
