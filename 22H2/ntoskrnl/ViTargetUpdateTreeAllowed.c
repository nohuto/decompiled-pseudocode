/*
 * XREFs of ViTargetUpdateTreeAllowed @ 0x1409D77D8
 * Callers:
 *     ViTargetAddToCounter @ 0x1409D72C0 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x1409D73F4 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x1409D751C (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x1409D76C0 (ViTargetTrackContiguousMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 ViTargetUpdateTreeAllowed()
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( KeGetCurrentIrql() <= 2u )
    return ViTargetInitialized != 0;
  return result;
}
