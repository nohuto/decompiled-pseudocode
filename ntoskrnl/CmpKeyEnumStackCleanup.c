/*
 * XREFs of CmpKeyEnumStackCleanup @ 0x140A20CD0
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x140A13774 (CmpEnumerateLayeredKey.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140A1D970 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140A20904 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpPartialPromoteSubkeys @ 0x140A236F0 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     CmpCleanupKeyNodeStack @ 0x140783738 (CmpCleanupKeyNodeStack.c)
 *     CmpKeyEnumStackEntryCleanup @ 0x140A210E4 (CmpKeyEnumStackEntryCleanup.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140A213F8 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpKeyEnumStackCleanup(__int64 a1)
{
  __int16 i; // di
  __int64 EntryAtLayerHeight; // rax
  struct _PRIVILEGE_SET *v4; // rcx

  CmpCleanupKeyNodeStack(a1 + 8);
  for ( i = 0; i <= *(__int16 *)a1; ++i )
  {
    EntryAtLayerHeight = CmpKeyEnumStackGetEntryAtLayerHeight(a1);
    CmpKeyEnumStackEntryCleanup(EntryAtLayerHeight);
  }
  v4 = *(struct _PRIVILEGE_SET **)(a1 + 344);
  if ( v4 )
    CmSiFreeMemory(v4);
}
