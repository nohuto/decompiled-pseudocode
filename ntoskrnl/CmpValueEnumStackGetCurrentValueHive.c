/*
 * XREFs of CmpValueEnumStackGetCurrentValueHive @ 0x1404632F4
 * Callers:
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A23124 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x140A22670 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpValueEnumStackGetCurrentValueHive(__int64 a1)
{
  return *(_QWORD *)CmpValueEnumStackGetEntryAtLayerHeight(a1, *(unsigned __int16 *)(a1 + 6));
}
