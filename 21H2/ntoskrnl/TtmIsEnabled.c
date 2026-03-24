/*
 * XREFs of TtmIsEnabled @ 0x14067BA04
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x140281CF4 (PopGetConsoleDisplayRequestCount.c)
 *     PopPowerSourceChangeCallback @ 0x1403AE4C0 (PopPowerSourceChangeCallback.c)
 * Callees:
 *     <none>
 */

bool TtmIsEnabled()
{
  return TtmpEnabled == 1;
}
