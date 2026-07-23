/*
 * XREFs of ViTargetUpdateTreeAllowed @ 0x1409D87C8
 * Callers:
 *     ViTargetAddToCounter @ 0x1409D82B0 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x1409D83E4 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x1409D850C (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x1409D86B0 (ViTargetTrackContiguousMemory.c)
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
