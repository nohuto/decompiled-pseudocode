/*
 * XREFs of RtlRandom @ 0x1407E6960
 * Callers:
 *     CcGetRandomVacbArrayWithReference @ 0x140538094 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x140538490 (CcUnmapInactiveViewsInternal.c)
 *     PspInitPhase2 @ 0x140B685A8 (PspInitPhase2.c)
 * Callees:
 *     ExGenRandom @ 0x1403173F0 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandom(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
