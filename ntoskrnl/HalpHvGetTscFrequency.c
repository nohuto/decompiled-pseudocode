/*
 * XREFs of HalpHvGetTscFrequency @ 0x140508FE0
 * Callers:
 *     <none>
 * Callees:
 *     HalpHvIsFrequencyAvailable @ 0x140374AFC (HalpHvIsFrequencyAvailable.c)
 */

unsigned __int64 __fastcall HalpHvGetTscFrequency(__int64 a1, __int64 a2)
{
  __int64 v2; // r10

  if ( HalpHvIsFrequencyAvailable(a1, a2) )
    return __readmsr(0x40000022u);
  return v2;
}
