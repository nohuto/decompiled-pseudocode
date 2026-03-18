/*
 * XREFs of SddlBaseInitialize @ 0x140387A98
 * Callers:
 *     SepInitializationPhase1 @ 0x140823D08 (SepInitializationPhase1.c)
 * Callees:
 *     InitializeSidLookupTable @ 0x140824194 (InitializeSidLookupTable.c)
 */

__int64 SddlBaseInitialize()
{
  return InitializeSidLookupTable();
}
