/*
 * XREFs of MiCheckForConflictingVadExistence @ 0x140214E40
 * Callers:
 *     MiIsVaRangeAvailable @ 0x1406AF7FC (MiIsVaRangeAvailable.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x140214E60 (MiCheckForConflictingVad.c)
 */

_BOOL8 MiCheckForConflictingVadExistence()
{
  return MiCheckForConflictingVad() != 0;
}
