/*
 * XREFs of CmpSubtreeEnumeratorCleanup @ 0x140A1D970
 * Callers:
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140A18A38 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpPromoteSubtree @ 0x140A23F00 (CmpPromoteSubtree.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     CmpCleanupKeyNodeStack @ 0x140783738 (CmpCleanupKeyNodeStack.c)
 *     CmpKeyEnumStackCleanup @ 0x140A20CD0 (CmpKeyEnumStackCleanup.c)
 */

void __fastcall CmpSubtreeEnumeratorCleanup(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbp
  struct _PRIVILEGE_SET *v5; // rcx

  if ( *(_QWORD *)(a1 + 96) )
  {
    v2 = 0LL;
    v3 = 512LL;
    do
    {
      v4 = *(_QWORD *)(a1 + 96);
      v5 = *(struct _PRIVILEGE_SET **)(v2 + v4 + 48);
      if ( v5 )
        CmSiFreeMemory(v5);
      CmpKeyEnumStackCleanup(v2 + v4 + 56);
      v2 += 408LL;
      --v3;
    }
    while ( v3 );
    CmSiFreeMemory(*(PPRIVILEGE_SET *)(a1 + 96));
  }
  CmpCleanupKeyNodeStack(a1 + 16);
}
