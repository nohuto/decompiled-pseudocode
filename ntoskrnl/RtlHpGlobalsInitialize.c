/*
 * XREFs of RtlHpGlobalsInitialize @ 0x1403AE028
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x140374D0C (ExInitializePoolHeapManagement.c)
 *     ExpInitSystemPhase0 @ 0x140B49BD0 (ExpInitSystemPhase0.c)
 * Callees:
 *     RtlIsProcessorFeaturePresent @ 0x1402FA0E0 (RtlIsProcessorFeaturePresent.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x14030B578 (RtlpHeapGenerateRandomValue64.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

char RtlHpGlobalsInitialize()
{
  char result; // al

  memset(&RtlpHpHeapGlobals, 0, 0x40uLL);
  RtlpHpHeapGlobals = RtlpHeapGenerateRandomValue64();
  qword_140C6AF48 = RtlpHeapGenerateRandomValue64();
  qword_140C6AF50 = (__int64)&RtlpHeapFailureInfo;
  result = RtlIsProcessorFeaturePresent(0x2Au);
  if ( result )
    LODWORD(qword_140C6AF78) = qword_140C6AF78 | 1;
  LODWORD(qword_140C6AF78) = qword_140C6AF78 | 2;
  return result;
}
