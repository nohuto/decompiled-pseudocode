/*
 * XREFs of PnpPowerStateTransitionWatchdogPopRecord @ 0x140957B44
 * Callers:
 *     IoBuildPoDeviceNotifyList @ 0x140A9E1B8 (IoBuildPoDeviceNotifyList.c)
 * Callees:
 *     PoDelistPowerStateTransitionBlocker @ 0x140AA622C (PoDelistPowerStateTransitionBlocker.c)
 */

__int64 PnpPowerStateTransitionWatchdogPopRecord()
{
  return PoDelistPowerStateTransitionBlocker();
}
