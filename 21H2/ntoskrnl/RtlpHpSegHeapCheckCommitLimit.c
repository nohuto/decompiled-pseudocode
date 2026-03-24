/*
 * XREFs of RtlpHpSegHeapCheckCommitLimit @ 0x14030AB10
 * Callers:
 *     RtlpHpLargeAlloc @ 0x1402A56A0 (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrCommit @ 0x14030A610 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     RtlpHpHeapCheckCommitLimit @ 0x14030AB40 (RtlpHpHeapCheckCommitLimit.c)
 */

__int64 __fastcall RtlpHpSegHeapCheckCommitLimit(__int64 a1, __int64 a2)
{
  return RtlpHpHeapCheckCommitLimit(a1, (*(_QWORD *)(a2 + 96) + *(_QWORD *)(a2 + 136)) << 12, a2, a2 + 32);
}
