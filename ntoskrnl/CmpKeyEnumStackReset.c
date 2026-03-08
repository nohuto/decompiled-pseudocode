/*
 * XREFs of CmpKeyEnumStackReset @ 0x140A2152C
 * Callers:
 *     CmpSubtreeEnumeratorAdvance @ 0x140A1D6E8 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpSubtreeEnumeratorReset @ 0x140A1DA20 (CmpSubtreeEnumeratorReset.c)
 * Callees:
 *     CmpResetKeyNodeStack @ 0x140A1D48C (CmpResetKeyNodeStack.c)
 *     CmpKeyEnumStackEntryCleanup @ 0x140A210E4 (CmpKeyEnumStackEntryCleanup.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x140A2119C (CmpKeyEnumStackEntryInitialize.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140A213F8 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpKeyEnumStackReset(__int64 a1)
{
  __int16 v1; // di
  __int64 *EntryAtLayerHeight; // rbx

  v1 = 0;
  *(_BYTE *)(a1 + 4) = 0;
  CmpResetKeyNodeStack((__int16 *)(a1 + 8));
  while ( v1 <= *(__int16 *)a1 )
  {
    EntryAtLayerHeight = (__int64 *)CmpKeyEnumStackGetEntryAtLayerHeight(a1, v1);
    CmpKeyEnumStackEntryCleanup(EntryAtLayerHeight);
    CmpKeyEnumStackEntryInitialize(EntryAtLayerHeight);
    ++v1;
  }
}
