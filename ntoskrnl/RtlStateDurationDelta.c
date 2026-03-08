/*
 * XREFs of RtlStateDurationDelta @ 0x140294EDC
 * Callers:
 *     PopEtEnergyValuesDeltaCalculate @ 0x1407021E8 (PopEtEnergyValuesDeltaCalculate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStateDurationDelta(__int64 a1, int *a2, unsigned int *a3)
{
  unsigned int v4; // ecx
  int v5; // ecx
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  v4 = a2[1] & 0x7FFFFFFF;
  if ( (a3[1] & 0x7FFFFFFF) > v4 )
    *(_DWORD *)(a1 + 4) = (a3[1] - v4) & 0x7FFFFFFF;
  v5 = *a2;
  result = *a3;
  if ( *a2 <= (unsigned int)result )
    v5 = *a3;
  *(_DWORD *)a1 = v5;
  return result;
}
