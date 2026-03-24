/*
 * XREFs of EditionIsWinEventsDeferred @ 0x1C01EA9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 EditionIsWinEventsDeferred()
{
  return gdwDeferWinEvent != 0;
}
