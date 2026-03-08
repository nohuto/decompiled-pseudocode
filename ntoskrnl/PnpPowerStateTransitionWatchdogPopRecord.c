/*
 * XREFs of PnpPowerStateTransitionWatchdogPopRecord @ 0x140954B24
 * Callers:
 *     IoBuildPoDeviceNotifyList @ 0x140A9B078 (IoBuildPoDeviceNotifyList.c)
 * Callees:
 *     PoDelistPowerStateTransitionBlocker @ 0x140AA2FFC (PoDelistPowerStateTransitionBlocker.c)
 */

__int64 PnpPowerStateTransitionWatchdogPopRecord()
{
  return PoDelistPowerStateTransitionBlocker();
}
