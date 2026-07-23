/*
 * XREFs of ViThunkReplaceImportIfThunkedOrderDependent @ 0x1409DA4E8
 * Callers:
 *     ViThunkReplaceAllThunkedImports @ 0x1409DA354 (ViThunkReplaceAllThunkedImports.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x140252060 (VfIsVerifierEnabled.c)
 *     MmReplaceImportEntry @ 0x140535B5C (MmReplaceImportEntry.c)
 */

__int64 __fastcall ViThunkReplaceImportIfThunkedOrderDependent(_QWORD *BugCheckParameter3, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  char **v4; // rdi
  _QWORD *v5; // rsi
  char *v6; // rax
  char v7; // bp
  int v8; // eax
  ULONG_PTR v9; // rdx

  v3 = 0;
  v4 = &VfOrderDependentThunks;
  v5 = BugCheckParameter3;
  if ( VfOrderDependentThunks )
  {
    v6 = (char *)*BugCheckParameter3;
    while ( !v6 || v6 != v4[2] )
    {
      v4 += 7;
      if ( !*v4 )
        return v3;
    }
    if ( a3 )
    {
      v9 = (ULONG_PTR)v4[5];
      if ( v9 )
        goto LABEL_22;
    }
    else
    {
      v7 = BYTE4(VfRuleClasses);
      if ( (VfRuleClasses & 0x800000000LL) == 0
        || (unsigned int)VfIsVerifierEnabled() && ((VfRuleClasses & 0xFFAFFFFF) != 0 || (v7 & 2) != 0 || (v7 & 4) != 0) )
      {
        goto LABEL_17;
      }
      if ( !XdvEnabled )
        return 1;
      if ( !VfDifAPIThunkContextHead )
        return 1;
      v8 = *((_DWORD *)v4 + 6);
      if ( (v8 & 1) == 0 )
        return 1;
      if ( (v8 & 4) != 0 )
      {
LABEL_17:
        v9 = (ULONG_PTR)v4[1];
LABEL_18:
        BugCheckParameter3 = v5;
LABEL_22:
        MmReplaceImportEntry((ULONG_PTR)BugCheckParameter3, v9);
        return 1;
      }
      v9 = *(_QWORD *)v4[4];
      if ( v9 )
        goto LABEL_18;
    }
    return 1;
  }
  return v3;
}
