/*
 * XREFs of RtlRandom @ 0x1406BD150
 * Callers:
 *     CcGetRandomVacbArrayWithReference @ 0x1404EB148 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404EB544 (CcUnmapInactiveViewsInternal.c)
 *     PspInitPhase2 @ 0x140A4B134 (PspInitPhase2.c)
 * Callees:
 *     ExGenRandom @ 0x14022C890 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandom(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
