/*
 * XREFs of SddlBaseInitialize @ 0x1403CE42C
 * Callers:
 *     SepInitializationPhase1 @ 0x140847FF0 (SepInitializationPhase1.c)
 * Callees:
 *     InitializeSidLookupTable @ 0x140848298 (InitializeSidLookupTable.c)
 */

__int64 SddlBaseInitialize()
{
  return InitializeSidLookupTable();
}
