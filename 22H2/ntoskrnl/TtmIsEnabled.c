/*
 * XREFs of TtmIsEnabled @ 0x1406F47F4
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x14034AD04 (PopGetConsoleDisplayRequestCount.c)
 *     PopPowerSourceChangeCallback @ 0x1403A92E0 (PopPowerSourceChangeCallback.c)
 * Callees:
 *     <none>
 */

bool TtmIsEnabled()
{
  return TtmpEnabled == 1;
}
