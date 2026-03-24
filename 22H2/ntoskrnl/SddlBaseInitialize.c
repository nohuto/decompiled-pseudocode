/*
 * XREFs of SddlBaseInitialize @ 0x1403B3F70
 * Callers:
 *     SepInitializationPhase1 @ 0x14079D7A8 (SepInitializationPhase1.c)
 * Callees:
 *     InitializeSidLookupTable @ 0x14079DA20 (InitializeSidLookupTable.c)
 */

__int64 SddlBaseInitialize()
{
  return InitializeSidLookupTable();
}
