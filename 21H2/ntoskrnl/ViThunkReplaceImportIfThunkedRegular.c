/*
 * XREFs of ViThunkReplaceImportIfThunkedRegular @ 0x1409DA5C4
 * Callers:
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x1409D9E2C (ViThunkApplyMandatoryThunksCurrentSession.c)
 *     ViThunkReplaceAllThunkedImports @ 0x1409DA354 (ViThunkReplaceAllThunkedImports.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x140252060 (VfIsVerifierEnabled.c)
 *     MmReplaceImportEntry @ 0x140535B5C (MmReplaceImportEntry.c)
 */

__int64 __fastcall ViThunkReplaceImportIfThunkedRegular(__int64 *BugCheckParameter3, _QWORD *a2)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  _QWORD *v4; // rdi
  char v6; // bp
  int v7; // eax
  ULONG_PTR v8; // rdx

  result = *BugCheckParameter3;
  v3 = 0;
  v4 = a2;
  if ( *BugCheckParameter3 )
  {
    if ( !*a2 )
      return v3;
    while ( result != v4[2] )
    {
      v4 += 6;
      if ( !*v4 )
        return v3;
    }
    v6 = BYTE4(VfRuleClasses);
    if ( (VfRuleClasses & 0x800000000LL) == 0
      || (unsigned int)VfIsVerifierEnabled() && ((VfRuleClasses & 0xFFAFFFFF) != 0 || (v6 & 2) != 0 || (v6 & 4) != 0) )
    {
      goto LABEL_17;
    }
    if ( !XdvEnabled )
      return 1;
    if ( !VfDifAPIThunkContextHead )
      return 1;
    v7 = *((_DWORD *)v4 + 6);
    if ( (v7 & 1) == 0 )
      return 1;
    if ( (v7 & 4) != 0 )
    {
LABEL_17:
      v8 = v4[1];
    }
    else
    {
      v8 = *(_QWORD *)v4[4];
      if ( !v8 )
        return 1;
    }
    MmReplaceImportEntry((ULONG_PTR)BugCheckParameter3, v8);
    return 1;
  }
  return result;
}
