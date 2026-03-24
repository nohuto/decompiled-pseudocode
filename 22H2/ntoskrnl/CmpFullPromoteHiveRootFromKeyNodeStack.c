/*
 * XREFs of CmpFullPromoteHiveRootFromKeyNodeStack @ 0x14087FF68
 * Callers:
 *     CmSaveKey @ 0x140729A8C (CmSaveKey.c)
 * Callees:
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14072A170 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 */

__int64 __fastcall CmpFullPromoteHiveRootFromKeyNodeStack(__int16 *a1)
{
  return CmpFullPromoteSingleKeyFromKeyNodeStacks(0LL, a1);
}
