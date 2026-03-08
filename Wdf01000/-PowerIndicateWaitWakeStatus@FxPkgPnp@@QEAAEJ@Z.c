/*
 * XREFs of ?PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z @ 0x1C006F0D4
 * Callers:
 *     ?IndicateWakeStatus@FxChildList@@QEAAXJ@Z @ 0x1C0024D3C (-IndicateWakeStatus@FxChildList@@QEAAXJ@Z.c)
 *     imp_WdfDeviceIndicateWakeStatus @ 0x1C0033FD0 (imp_WdfDeviceIndicateWakeStatus.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C006A1BC (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     ?PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ @ 0x1C007D094 (-PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ.c)
 * Callees:
 *     ?PowerMakeWakeRequestNonCancelable@FxPkgPnp@@IEAAEJ@Z @ 0x1C006F364 (-PowerMakeWakeRequestNonCancelable@FxPkgPnp@@IEAAEJ@Z.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C006F604 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 */

unsigned __int8 __fastcall FxPkgPnp::PowerIndicateWaitWakeStatus(FxPkgPnp *this, int WaitWakeStatus)
{
  FxPowerEvent v4; // edx

  if ( !FxPkgPnp::PowerMakeWakeRequestNonCancelable(this, WaitWakeStatus) )
    return 0;
  if ( WaitWakeStatus == -1073741536 )
  {
    v4 = PowerWakeCanceled;
  }
  else
  {
    v4 = PowerWakeFailed;
    if ( WaitWakeStatus >= 0 )
      v4 = PowerWakeSucceeded;
  }
  FxPkgPnp::PowerProcessEvent(this, v4, 0);
  return 1;
}
