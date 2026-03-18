/*
 * XREFs of RtlRandom @ 0x1406E2E20
 * Callers:
 *     CcGetRandomVacbArrayWithReference @ 0x14053B160 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x14053B55C (CcUnmapInactiveViewsInternal.c)
 *     PspInitPhase2 @ 0x140B24C44 (PspInitPhase2.c)
 * Callees:
 *     ExGenRandom @ 0x140363220 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandom(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
