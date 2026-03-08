/*
 * XREFs of RtlRandom @ 0x140797410
 * Callers:
 *     CcGetRandomVacbArrayWithReference @ 0x140535BC4 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x140535FC0 (CcUnmapInactiveViewsInternal.c)
 *     PspInitPhase2 @ 0x140B64880 (PspInitPhase2.c)
 * Callees:
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandom(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
