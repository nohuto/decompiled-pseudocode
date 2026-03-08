/*
 * XREFs of RtlpIsAddressInIgnoreRegion @ 0x14067869C
 * Callers:
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x14067804C (RtlPerformRetpolineRelocationsOnImageEx.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpIsAddressInIgnoreRegion(unsigned int a1, __int64 a2, _DWORD *a3, unsigned int a4)
{
  unsigned int v4; // r10d
  __int64 v6; // rdx
  unsigned int v7; // ecx

  v4 = 0;
  if ( !a4 )
    return 0;
  v6 = a2 - (_QWORD)a3;
  while ( 1 )
  {
    v7 = *(_DWORD *)((char *)a3 + v6);
    if ( a1 >= v7 && a1 < *a3 + v7 )
      break;
    ++v4;
    ++a3;
    if ( v4 >= a4 )
      return 0;
  }
  return 1;
}
