/*
 * XREFs of MiCheckForConflictingVadExistence @ 0x14025A8AC
 * Callers:
 *     MiIsVaRangeAvailable @ 0x14061DFF8 (MiIsVaRangeAvailable.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x14025A8CC (MiCheckForConflictingVad.c)
 */

_BOOL8 MiCheckForConflictingVadExistence()
{
  return MiCheckForConflictingVad() != 0;
}
