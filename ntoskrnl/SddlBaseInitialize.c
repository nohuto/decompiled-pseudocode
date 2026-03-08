/*
 * XREFs of SddlBaseInitialize @ 0x140384A24
 * Callers:
 *     SepInitializationPhase1 @ 0x140810320 (SepInitializationPhase1.c)
 * Callees:
 *     InitializeSidLookupTable @ 0x140810910 (InitializeSidLookupTable.c)
 */

__int64 SddlBaseInitialize()
{
  return InitializeSidLookupTable();
}
