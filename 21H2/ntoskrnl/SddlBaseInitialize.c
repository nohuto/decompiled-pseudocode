/*
 * XREFs of SddlBaseInitialize @ 0x1403B4740
 * Callers:
 *     SepInitializationPhase1 @ 0x14079D578 (SepInitializationPhase1.c)
 * Callees:
 *     InitializeSidLookupTable @ 0x14079D7F0 (InitializeSidLookupTable.c)
 */

__int64 SddlBaseInitialize()
{
  return InitializeSidLookupTable();
}
