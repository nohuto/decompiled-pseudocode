/*
 * XREFs of CmpValueEnumStackCleanup @ 0x140A22A28
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140614148 (CmpGetValueCountForKeyNodeStack.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A10EC4 (CmEnumerateValueFromLayeredKey.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A23124 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     CmpValueEnumStackEntryCleanup @ 0x14061431C (CmpValueEnumStackEntryCleanup.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x140A22670 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpValueEnumStackCleanup(__int64 a1)
{
  __int16 i; // di
  __int64 *EntryAtLayerHeight; // rax
  struct _PRIVILEGE_SET *v4; // rcx

  for ( i = 0; i <= *(__int16 *)(a1 + 12); ++i )
  {
    EntryAtLayerHeight = (__int64 *)CmpValueEnumStackGetEntryAtLayerHeight(a1, i);
    CmpValueEnumStackEntryCleanup(EntryAtLayerHeight);
  }
  v4 = *(struct _PRIVILEGE_SET **)(a1 + 80);
  if ( v4 )
    CmSiFreeMemory(v4);
}
