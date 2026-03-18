/*
 * XREFs of CmpValueEnumStackCleanup @ 0x140A25788
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140616604 (CmpGetValueCountForKeyNodeStack.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A13C14 (CmEnumerateValueFromLayeredKey.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A25E84 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     CmpValueEnumStackEntryCleanup @ 0x1406167D8 (CmpValueEnumStackEntryCleanup.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x140A253D0 (CmpValueEnumStackGetEntryAtLayerHeight.c)
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
