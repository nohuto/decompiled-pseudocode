/*
 * XREFs of PpmPerfQueryPhysicalCoreCount @ 0x1403A8180
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPhysicalCoreCount(int a1)
{
  unsigned int v1; // ebx
  unsigned int i; // edi
  __int64 Prcb; // rax
  unsigned int v5; // edx

  v1 = 0;
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; v1 = v5 )
  {
    Prcb = KeGetPrcb(i);
    v5 = v1 + 1;
    if ( a1 != *(_DWORD *)(Prcb + 34844) )
      v5 = v1;
    ++i;
  }
  return v1;
}
