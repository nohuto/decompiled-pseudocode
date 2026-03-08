/*
 * XREFs of MiComputeNextWalkPte @ 0x1403491CC
 * Callers:
 *     MiTrimPte @ 0x140349060 (MiTrimPte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComputeNextWalkPte(__int64 a1, int a2)
{
  __int64 v3; // r8
  unsigned __int64 i; // rdx

  if ( a2 )
    return a1 + 8;
  v3 = ((a1 << 25) + 0x10000000) >> 16;
  for ( i = v3 << 25 >> 16; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
  {
    if ( i > 0xFFFFF6FFFFFFFFFFuLL )
      break;
    v3 = i;
  }
  return v3;
}
