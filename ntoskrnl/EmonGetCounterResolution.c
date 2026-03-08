/*
 * XREFs of EmonGetCounterResolution @ 0x14051AF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EmonGetCounterResolution(unsigned int a1, int *a2)
{
  unsigned int v2; // r8d
  int v3; // eax

  v2 = 0;
  if ( (a1 & 0x40000000) == 0 )
  {
    if ( a1 < EmonNumberArchCounters )
    {
      v3 = EmonCounterResolution;
      goto LABEL_4;
    }
LABEL_7:
    *a2 = 0;
    return (unsigned int)-1073741811;
  }
  if ( (a1 & 0xBFFFFFFF) >= EmonNumberFixedCounters )
    goto LABEL_7;
  v3 = EmonFixedCounterResolution;
LABEL_4:
  *a2 = v3;
  return v2;
}
