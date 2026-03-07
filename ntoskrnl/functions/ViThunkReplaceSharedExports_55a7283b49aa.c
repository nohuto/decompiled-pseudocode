void __fastcall ViThunkReplaceSharedExports(ULONG_PTR *a1, unsigned int a2)
{
  ULONG_PTR *v2; // rbx
  __int64 v3; // rsi
  ULONG_PTR v4; // rbp
  ULONG_PTR v5; // rdi
  int v6; // eax
  ULONG_PTR v7; // rdx

  if ( a1 )
  {
    v2 = a1;
    if ( a2 )
    {
      v3 = a2;
      while ( 1 )
      {
        v4 = *v2;
        if ( !*v2 )
          goto LABEL_15;
        v5 = v2[2];
        if ( !v5 )
          goto LABEL_15;
        if ( (VfRuleClasses & 0x800000000LL) == 0
          || (unsigned int)VfIsVerifierEnabled() && (VfRuleClasses & 0xFF217644) != 0 )
        {
          goto LABEL_12;
        }
        v6 = *(_DWORD *)(v5 + 32);
        if ( (v6 & 1) != 0 )
          break;
LABEL_15:
        v2 += 3;
        if ( !--v3 )
          return;
      }
      if ( (v6 & 4) != 0 )
LABEL_12:
        v7 = *(_QWORD *)(v5 + 8);
      else
        v7 = **(_QWORD **)(v5 + 40);
      if ( v7 )
        MmReplaceImportEntry(v4, v7);
      goto LABEL_15;
    }
  }
}
