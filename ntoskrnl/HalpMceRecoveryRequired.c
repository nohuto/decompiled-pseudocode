/*
 * XREFs of HalpMceRecoveryRequired @ 0x140516F9C
 * Callers:
 *     HalpMceRecovery @ 0x1405169E0 (HalpMceRecovery.c)
 * Callees:
 *     HalpMcaAMDIsMemoryError @ 0x140503E64 (HalpMcaAMDIsMemoryError.c)
 *     HalpMceRecoveryMemoryErrorAmd @ 0x140516BC0 (HalpMceRecoveryMemoryErrorAmd.c)
 *     HalpMceRecoveryMemoryErrorIntel @ 0x140516CDC (HalpMceRecoveryMemoryErrorIntel.c)
 */

__int64 __fastcall HalpMceRecoveryRequired(__int64 a1)
{
  unsigned int v2; // r10d
  __int16 v3; // cx
  int v4; // edx
  __int64 v5; // r9
  __int64 v6; // rcx

  v2 = -1073741637;
  v3 = *(_WORD *)(a1 + 40);
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 == 2 )
  {
    if ( HalpMcaAMDIsMemoryError(a1, v3) )
    {
      v6 = v5;
      return (unsigned int)HalpMceRecoveryMemoryErrorAmd(v6);
    }
  }
  else
  {
    if ( (v3 & 0xEF00) == 0x100 )
    {
      v6 = a1;
      if ( v4 == 1 )
        return (unsigned int)HalpMceRecoveryMemoryErrorIntel(a1);
      return (unsigned int)HalpMceRecoveryMemoryErrorAmd(v6);
    }
    if ( (v3 & 0xE800) == 0x800 && *(_DWORD *)a1 >= 3u )
      *(_DWORD *)(a1 + 272) |= 1u;
  }
  return v2;
}
