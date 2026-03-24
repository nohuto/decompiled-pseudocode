/*
 * XREFs of ViThunkReplaceImportIfThunkedRegular @ 0x1409D95C4
 * Callers:
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x1409D8E2C (ViThunkApplyMandatoryThunksCurrentSession.c)
 *     ViThunkReplaceAllThunkedImports @ 0x1409D9354 (ViThunkReplaceAllThunkedImports.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x1402D3DF0 (VfIsVerifierEnabled.c)
 *     MmReplaceImportEntry @ 0x14053591C (MmReplaceImportEntry.c)
 */

__int64 __fastcall ViThunkReplaceImportIfThunkedRegular(
        __int64 *BugCheckParameter3,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // rdi
  char v8; // bp
  int v9; // eax
  ULONG_PTR v10; // rdx

  result = *BugCheckParameter3;
  v5 = 0;
  v6 = a2;
  if ( *BugCheckParameter3 )
  {
    if ( !*a2 )
      return v5;
    while ( result != v6[2] )
    {
      v6 += 6;
      if ( !*v6 )
        return v5;
    }
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
    v9 = *((_DWORD *)v6 + 6);
    if ( (v9 & 1) == 0 )
      return 1;
    if ( (v9 & 4) != 0 )
    {
LABEL_17:
      v10 = v6[1];
    }
    else
    {
      v10 = *(_QWORD *)v6[4];
      if ( !v10 )
        return 1;
    }
    MmReplaceImportEntry((ULONG_PTR)BugCheckParameter3, v10, a3, a4);
    return 1;
  }
  return result;
}
