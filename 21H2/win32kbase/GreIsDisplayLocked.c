/*
 * XREFs of GreIsDisplayLocked @ 0x1C0177840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 GreIsDisplayLocked()
{
  return ExIsResourceAcquiredExclusiveLite(ghsemGreLock) != 0;
}
