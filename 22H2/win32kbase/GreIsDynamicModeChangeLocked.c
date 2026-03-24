/*
 * XREFs of GreIsDynamicModeChangeLocked @ 0x1C00A54A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 GreIsDynamicModeChangeLocked()
{
  return ExIsResourceAcquiredExclusiveLite((PERESOURCE)ghsemDynamicModeChange) != 0;
}
