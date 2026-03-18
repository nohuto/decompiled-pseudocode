/*
 * XREFs of RtlHpGlobalsInitialize @ 0x1403C44EC
 * Callers:
 *     RtlHpKInitializeHeapManager @ 0x1403C445C (RtlHpKInitializeHeapManager.c)
 *     ExpInitSystemPhase0 @ 0x140B0B180 (ExpInitSystemPhase0.c)
 * Callees:
 *     RtlIsProcessorFeaturePresent @ 0x140250040 (RtlIsProcessorFeaturePresent.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x1403631E0 (RtlpHeapGenerateRandomValue64.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char RtlHpGlobalsInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  char result; // al

  memset(&RtlpHpHeapGlobals, 0, 0x40uLL);
  RtlpHpHeapGlobals = RtlpHeapGenerateRandomValue64(v1, v0);
  qword_140C5A5C8 = RtlpHeapGenerateRandomValue64(v3, v2);
  qword_140C5A5D0 = (__int64)&RtlpHeapFailureInfo;
  result = RtlIsProcessorFeaturePresent(0x2Au);
  if ( result )
    LODWORD(qword_140C5A5F8) = qword_140C5A5F8 | 1;
  LODWORD(qword_140C5A5F8) = qword_140C5A5F8 | 2;
  return result;
}
