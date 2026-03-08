/*
 * XREFs of CmpStartKeyNodeStackFromKcbStack @ 0x140A1D69C
 * Callers:
 *     CmQueryLayeredKey @ 0x1402F262C (CmQueryLayeredKey.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140A20860 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140A2163C (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140A22BAC (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140A23050 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140A23C40 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140A23DDC (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x140A1D1EC (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpStartKeyNodeStack @ 0x140A1D5E8 (CmpStartKeyNodeStack.c)
 */

__int64 __fastcall CmpStartKeyNodeStackFromKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = CmpStartKeyNodeStack(a1, *(_WORD *)(a2 + 2));
  if ( (int)result >= 0 )
  {
    CmpPopulateKeyNodeStackFromKcbStack(a1, a2, a3);
    return 0LL;
  }
  return result;
}
