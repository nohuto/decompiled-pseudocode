/*
 * XREFs of ViThunkReplaceAllThunkedImports @ 0x140AD8EC8
 * Callers:
 *     VfThunkApplyThunksCurrentSession @ 0x140AD83AC (VfThunkApplyThunksCurrentSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     ViThunkFindAllSpecialTables @ 0x140AD8890 (ViThunkFindAllSpecialTables.c)
 *     ViThunkReplaceIatEntryForClassDriverThunk @ 0x140AD8FE8 (ViThunkReplaceIatEntryForClassDriverThunk.c)
 *     ViThunkReplaceIatEntryForWdmThunk @ 0x140AD9048 (ViThunkReplaceIatEntryForWdmThunk.c)
 */

__int64 __fastcall ViThunkReplaceAllThunkedImports(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // esi
  __int64 v4; // rbp
  __int64 v6; // rdi
  __int64 *AllSpecialTables; // rbx
  __int64 i; // r15
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rax
  int v12; // ebp
  unsigned int v13; // eax

  v3 = 0;
  v4 = a2;
  v6 = a1;
  if ( !a3 || KernelVerifier )
    AllSpecialTables = 0LL;
  else
    AllSpecialTables = ViThunkFindAllSpecialTables(a1, a2);
  if ( (_DWORD)v4 )
  {
    for ( i = v4; i; --i )
    {
      if ( KernelVerifier )
      {
        v9 = ViThunkReplaceIatEntryForWdmThunk(v6, &VfPoolThunks);
      }
      else
      {
        v10 = ViThunkReplaceIatEntryForWdmThunk(v6, &VfPoolThunks);
        if ( v10 )
          goto LABEL_20;
        v10 = ViThunkReplaceIatEntryForWdmThunk(v6, &VfRegularThunks);
        if ( v10 )
          goto LABEL_20;
        v10 = ViThunkReplaceIatEntryForWdmThunk(v6, &VfDifThunks);
        if ( v10 )
          goto LABEL_20;
        if ( AllSpecialTables )
        {
          v11 = *AllSpecialTables;
          v12 = 0;
          while ( v11 )
          {
            v10 = ViThunkReplaceIatEntryForClassDriverThunk(v11 + 24, v6);
            if ( v10 )
              goto LABEL_20;
            v11 = AllSpecialTables[++v12];
          }
        }
        if ( !a3 )
          goto LABEL_20;
        v9 = ViThunkReplaceIatEntryForClassDriverThunk(&ViVerifierDriverAddedThunkListHead, v6);
      }
      v10 = v9;
LABEL_20:
      v13 = v3 + 1;
      if ( !v10 )
        v13 = v3;
      v6 += 8LL;
      v3 = v13;
    }
  }
  if ( AllSpecialTables )
    ExFreePoolWithTag(AllSpecialTables, 0);
  return v3;
}
