/*
 * XREFs of RtlHpGlobalsInitialize @ 0x1403C3E70
 * Callers:
 *     RtlHpKInitializeHeapManager @ 0x1403C3DE8 (RtlHpKInitializeHeapManager.c)
 *     ExpInitSystemPhase0 @ 0x140A69014 (ExpInitSystemPhase0.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x1402A6C9C (RtlpHeapGenerateRandomValue64.c)
 */

void *RtlHpGlobalsInitialize()
{
  void *result; // rax

  RtlpHpHeapGlobals = 0LL;
  qword_140C1DE30 = 0LL;
  xmmword_140C1DE10 = 0LL;
  unk_140C1DE20 = 0LL;
  *(_QWORD *)&RtlpHpHeapGlobals = RtlpHeapGenerateRandomValue64();
  *((_QWORD *)&RtlpHpHeapGlobals + 1) = RtlpHeapGenerateRandomValue64();
  result = &RtlpHeapFailureInfo;
  *(_QWORD *)&xmmword_140C1DE10 = &RtlpHeapFailureInfo;
  return result;
}
