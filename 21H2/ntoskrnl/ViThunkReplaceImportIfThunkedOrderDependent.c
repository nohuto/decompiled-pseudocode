/*
 * XREFs of ViThunkReplaceImportIfThunkedOrderDependent @ 0x1409D94E8
 * Callers:
 *     ViThunkReplaceAllThunkedImports @ 0x1409D9354 (ViThunkReplaceAllThunkedImports.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x1402D3DF0 (VfIsVerifierEnabled.c)
 *     MmReplaceImportEntry @ 0x14053591C (MmReplaceImportEntry.c)
 */

__int64 __fastcall ViThunkReplaceImportIfThunkedOrderDependent(
        _QWORD *BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  char **v5; // rdi
  _QWORD *v6; // rsi
  char *v7; // rax
  char v8; // bp
  int v9; // eax
  ULONG_PTR v10; // rdx

  v4 = 0;
  v5 = &VfOrderDependentThunks;
  v6 = BugCheckParameter3;
  if ( VfOrderDependentThunks )
  {
    v7 = (char *)*BugCheckParameter3;
    while ( !v7 || v7 != v5[2] )
    {
      v5 += 7;
      if ( !*v5 )
        return v4;
    }
    if ( (_DWORD)a3 )
    {
      v10 = (ULONG_PTR)v5[5];
      if ( v10 )
        goto LABEL_22;
    }
    else
    {
      v8 = BYTE4(VfRuleClasses);
      if ( (VfRuleClasses & 0x800000000LL) == 0
        || (unsigned int)VfIsVerifierEnabled() && ((VfRuleClasses & 0xFFAFFFFF) != 0 || (v8 & 2) != 0 || (v8 & 4) != 0) )
      {
        goto LABEL_17;
      }
      if ( !XdvEnabled )
        return 1;
      if ( !VfDifAPIThunkContextHead )
        return 1;
      v9 = *((_DWORD *)v5 + 6);
      if ( (v9 & 1) == 0 )
        return 1;
      if ( (v9 & 4) != 0 )
      {
LABEL_17:
        v10 = (ULONG_PTR)v5[1];
LABEL_18:
        BugCheckParameter3 = v6;
LABEL_22:
        MmReplaceImportEntry((ULONG_PTR)BugCheckParameter3, v10, a3, a4);
        return 1;
      }
      v10 = *(_QWORD *)v5[4];
      if ( v10 )
        goto LABEL_18;
    }
    return 1;
  }
  return v4;
}
