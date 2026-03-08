/*
 * XREFs of MiCheckForConflictingVadExistence @ 0x14034C2EC
 * Callers:
 *     MiIsVaRangeAvailable @ 0x1407D3554 (MiIsVaRangeAvailable.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x14034C30C (MiCheckForConflictingVad.c)
 */

_BOOL8 MiCheckForConflictingVadExistence()
{
  return MiCheckForConflictingVad() != 0;
}
