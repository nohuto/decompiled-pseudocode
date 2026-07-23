/*
 * XREFs of RtlHpGlobalsInitialize @ 0x1403C42A0
 * Callers:
 *     RtlHpKInitializeHeapManager @ 0x1403C4218 (RtlHpKInitializeHeapManager.c)
 *     ExpInitSystemPhase0 @ 0x140A6A014 (ExpInitSystemPhase0.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x1402240DC (RtlpHeapGenerateRandomValue64.c)
 */

void *RtlHpGlobalsInitialize()
{
  void *result; // rax

  RtlpHpHeapGlobals = 0LL;
  qword_140C1DE50 = 0LL;
  xmmword_140C1DE30 = 0LL;
  unk_140C1DE40 = 0LL;
  *(_QWORD *)&RtlpHpHeapGlobals = RtlpHeapGenerateRandomValue64();
  *((_QWORD *)&RtlpHpHeapGlobals + 1) = RtlpHeapGenerateRandomValue64();
  result = &RtlpHeapFailureInfo;
  *(_QWORD *)&xmmword_140C1DE30 = &RtlpHeapFailureInfo;
  return result;
}
