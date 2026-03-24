/*
 * XREFs of RtlRandom @ 0x14069FF60
 * Callers:
 *     CcGetRandomVacbArrayWithReference @ 0x1404EB088 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404EB484 (CcUnmapInactiveViewsInternal.c)
 *     PspInitPhase2 @ 0x140A4B134 (PspInitPhase2.c)
 * Callees:
 *     ExGenRandom @ 0x14022C200 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandom(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
