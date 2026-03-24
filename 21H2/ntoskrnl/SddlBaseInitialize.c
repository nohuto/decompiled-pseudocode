/*
 * XREFs of SddlBaseInitialize @ 0x1403B45D0
 * Callers:
 *     SepInitializationPhase1 @ 0x14079D378 (SepInitializationPhase1.c)
 * Callees:
 *     InitializeSidLookupTable @ 0x14079D5F0 (InitializeSidLookupTable.c)
 */

__int64 SddlBaseInitialize()
{
  return InitializeSidLookupTable();
}
