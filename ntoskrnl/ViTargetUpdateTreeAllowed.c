/*
 * XREFs of ViTargetUpdateTreeAllowed @ 0x140AC8E94
 * Callers:
 *     ViTargetAddToCounter @ 0x140AC8994 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x140AC8AC0 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x140AC8BDC (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x140AC8D80 (ViTargetTrackContiguousMemory.c)
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
