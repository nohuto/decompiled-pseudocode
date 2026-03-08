/*
 * XREFs of PpmPerfAccumulateBrandedFrequency @ 0x1409838D8
 * Callers:
 *     PpmPerfGetBrandedFrequency @ 0x140983918 (PpmPerfGetBrandedFrequency.c)
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfAccumulateBrandedFrequency(unsigned int a1, _DWORD *a2)
{
  __int64 Prcb; // rax
  __int64 v4; // rcx
  __int64 result; // rax

  Prcb = KeGetPrcb(a1);
  v4 = *(_QWORD *)(Prcb + 33968);
  if ( v4 )
    result = *(unsigned int *)(v4 + 440);
  else
    result = *(unsigned int *)(Prcb + 68);
  if ( a2[1] < (unsigned int)result )
    a2[1] = result;
  *a2 = 1;
  return result;
}
