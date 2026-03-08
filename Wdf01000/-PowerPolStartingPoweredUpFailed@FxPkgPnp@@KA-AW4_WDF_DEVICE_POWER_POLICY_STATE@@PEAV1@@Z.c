/*
 * XREFs of ?PowerPolStartingPoweredUpFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007B880
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C006F604 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStartingPoweredUpFailed(FxPkgPnp *This)
{
  FxPkgPnp::PowerProcessEvent(This, 0x80u, 0);
  return 1472LL;
}
