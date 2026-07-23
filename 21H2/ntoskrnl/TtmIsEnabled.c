/*
 * XREFs of TtmIsEnabled @ 0x14066F144
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x14026FF34 (PopGetConsoleDisplayRequestCount.c)
 *     PopPowerSourceChangeCallback @ 0x1403AE610 (PopPowerSourceChangeCallback.c)
 * Callees:
 *     <none>
 */

bool TtmIsEnabled()
{
  return TtmpEnabled == 1;
}
