/*
 * XREFs of ViThunkReplaceSharedExports @ 0x1409D96B8
 * Callers:
 *     ViThunkReplaceAllSharedExports @ 0x1409D92C8 (ViThunkReplaceAllSharedExports.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x1402D3DF0 (VfIsVerifierEnabled.c)
 *     MmReplaceImportEntry @ 0x14053591C (MmReplaceImportEntry.c)
 *     VfIsRuleClassEnabled @ 0x1409C6020 (VfIsRuleClassEnabled.c)
 */

void __fastcall ViThunkReplaceSharedExports(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 i; // rsi
  ULONG_PTR v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  ULONG_PTR v8; // rdx

  if ( a1 && a2 )
  {
    v2 = a1 + 8;
    for ( i = a2; i; --i )
    {
      v4 = *(_QWORD *)(v2 - 8);
      if ( v4 )
      {
        if ( !VfIsRuleClassEnabled(0x23u)
          || (unsigned int)VfIsVerifierEnabled()
          && ((VfRuleClasses & 0xFFAFFFFF) != 0
           || (VfRuleClasses & 0x200000000LL) != 0
           || (VfRuleClasses & 0x400000000LL) != 0) )
        {
          goto LABEL_16;
        }
        if ( !XdvEnabled )
          goto LABEL_18;
        if ( !VfDifAPIThunkContextHead )
          goto LABEL_18;
        v7 = *(_DWORD *)(v2 + 16);
        if ( (v7 & 1) == 0 )
          goto LABEL_18;
        if ( (v7 & 4) != 0 )
        {
LABEL_16:
          v8 = *(_QWORD *)v2;
LABEL_17:
          MmReplaceImportEntry(v4, v8, v5, v6);
          goto LABEL_18;
        }
        v8 = **(_QWORD **)(v2 + 8);
        if ( v8 )
          goto LABEL_17;
      }
LABEL_18:
      v2 += 32LL;
    }
  }
}
