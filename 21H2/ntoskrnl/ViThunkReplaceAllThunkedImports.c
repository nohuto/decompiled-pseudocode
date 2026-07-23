/*
 * XREFs of ViThunkReplaceAllThunkedImports @ 0x1409DA354
 * Callers:
 *     ViThunkApplyThunksCurrentSession @ 0x1409D9EBC (ViThunkApplyThunksCurrentSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ViThunkFindAllSpecialTables @ 0x1409DA08C (ViThunkFindAllSpecialTables.c)
 *     ViThunkReplaceImportEntry @ 0x1409DA470 (ViThunkReplaceImportEntry.c)
 *     ViThunkReplaceImportIfThunkedOrderDependent @ 0x1409DA4E8 (ViThunkReplaceImportIfThunkedOrderDependent.c)
 *     ViThunkReplaceImportIfThunkedRegular @ 0x1409DA5C4 (ViThunkReplaceImportIfThunkedRegular.c)
 */

__int64 __fastcall ViThunkReplaceAllThunkedImports(__int64 BugCheckParameter3, unsigned int a2, int a3, int a4)
{
  __int64 v4; // rsi
  ULONG_PTR v7; // rbx
  __int64 *AllSpecialTables; // rdi
  __int64 v9; // rbp
  __int64 v10; // rax
  int v11; // esi

  v4 = a2;
  v7 = BugCheckParameter3;
  if ( a3 || a4 != 1 )
    AllSpecialTables = 0LL;
  else
    AllSpecialTables = ViThunkFindAllSpecialTables(BugCheckParameter3, a2);
  if ( (_DWORD)v4 )
  {
    v9 = v4;
    do
    {
      if ( AllSpecialTables )
      {
        v10 = *AllSpecialTables;
        v11 = 0;
        while ( v10 )
        {
          if ( (unsigned int)ViThunkReplaceImportEntry(v10 + 24, v7) == 1 )
            goto LABEL_20;
          v10 = AllSpecialTables[++v11];
        }
      }
      if ( (KernelVerifier
         || !(unsigned int)ViThunkReplaceImportIfThunkedRegular(v7)
         && !(unsigned int)ViThunkReplaceImportIfThunkedOrderDependent(v7)
         && !(unsigned int)ViThunkReplaceImportIfThunkedRegular(v7))
        && !(unsigned int)ViThunkReplaceImportIfThunkedRegular(v7)
        && !a3
        && a4 == 1 )
      {
        ViThunkReplaceImportEntry(&ViVerifierDriverAddedThunkListHead, v7);
      }
LABEL_20:
      v7 += 8LL;
      --v9;
    }
    while ( v9 );
  }
  if ( AllSpecialTables )
    ExFreePoolWithTag(AllSpecialTables, 0);
  return 1LL;
}
