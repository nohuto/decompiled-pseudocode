/*
 * XREFs of EditionIsWinEventsDeferred @ 0x1C01BFFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 EditionIsWinEventsDeferred()
{
  return gdwDeferWinEvent != 0;
}
