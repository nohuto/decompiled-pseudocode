/*
 * XREFs of GreIsVisRgnLocked @ 0x1C014B440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 GreIsVisRgnLocked()
{
  return ExIsResourceAcquiredExclusiveLite((PERESOURCE)ghsemDCVisRgn) != 0;
}
