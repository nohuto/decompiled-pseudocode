/*
 * XREFs of MiRemoveViewsFromSection @ 0x140334A28
 * Callers:
 *     MiRemoveViewsFromSectionWithPfn @ 0x14020DBB4 (MiRemoveViewsFromSectionWithPfn.c)
 *     MmUnmapViewInSystemCache @ 0x140285250 (MmUnmapViewInSystemCache.c)
 *     MiRemoveMappedPtes @ 0x1403474D0 (MiRemoveMappedPtes.c)
 *     MiConvertStaticSubsections @ 0x14034C9D8 (MiConvertStaticSubsections.c)
 *     MiRemoveSystemCacheReferences @ 0x14062CB5C (MiRemoveSystemCacheReferences.c)
 * Callees:
 *     MiInsertUnusedSubsection @ 0x1402D4DE8 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x140334C10 (MiDecrementSubsectionViewCount.c)
 */

__int64 __fastcall MiRemoveViewsFromSection(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3)
{
  ULONG_PTR v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r14
  unsigned __int64 v8; // rax

  v5 = BugCheckParameter2;
  v6 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)BugCheckParameter2 + 64LL);
  do
  {
    v6 += MiDecrementSubsectionViewCount(v5);
    if ( v7 && !*(_QWORD *)(v5 + 96) && (*(_BYTE *)(v5 + 34) & 1) == 0 )
      v6 += MiInsertUnusedSubsection(v5);
    if ( a2 )
    {
      v8 = *(unsigned int *)(v5 + 44);
      if ( a2 <= v8 )
        return v6;
      a2 -= v8;
    }
    v5 = *(_QWORD *)(v5 + 16);
    if ( !v7 )
      a3 &= ~8u;
  }
  while ( v5 );
  return v6;
}
