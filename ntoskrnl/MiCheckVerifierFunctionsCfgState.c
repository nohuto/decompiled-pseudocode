/*
 * XREFs of MiCheckVerifierFunctionsCfgState @ 0x140A41294
 * Callers:
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14063E4F8 (MiReapplyImportOptimizationForDriverVerifier.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x14035ECF0 (MiLookupDataTableEntry.c)
 *     CfgAddressToBitState @ 0x1406540A4 (CfgAddressToBitState.c)
 */

__int64 __fastcall MiCheckVerifierFunctionsCfgState(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  _QWORD *v4; // rdi
  int v5; // ebp
  unsigned __int64 *i; // rsi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rax

  v2 = 0;
  v4 = 0LL;
  v5 = 0;
  if ( a2 )
  {
    for ( i = (unsigned __int64 *)(a1 + 8); ; i += 3 )
    {
      if ( !v4 || (v7 = *i, v8 = v4[6], *i < v8) || v7 > v8 + *((unsigned int *)v4 + 16) )
      {
        v9 = MiLookupDataTableEntry(*i, 1);
        v7 = *i;
        v4 = v9;
        if ( !v9 )
          break;
      }
      if ( (v4[13] & 0x2000) != 0
        && (CfgAddressToBitState(v7 + 0x800000000000LL, (const signed __int64 *)qword_140C654B0) & 0xFFFFFFFD) == 0 )
      {
        return (unsigned int)-1073741436;
      }
      if ( ++v5 >= a2 )
        return v2;
    }
    return (unsigned int)-1073741811;
  }
  return v2;
}
