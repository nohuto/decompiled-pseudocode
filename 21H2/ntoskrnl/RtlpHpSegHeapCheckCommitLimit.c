/*
 * XREFs of RtlpHpSegHeapCheckCommitLimit @ 0x140315860
 * Callers:
 *     RtlpHpLargeAlloc @ 0x140222AE0 (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrCommit @ 0x140315360 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     RtlpHpHeapCheckCommitLimit @ 0x140315890 (RtlpHpHeapCheckCommitLimit.c)
 */

__int64 __fastcall RtlpHpSegHeapCheckCommitLimit(__int64 a1, __int64 a2)
{
  return RtlpHpHeapCheckCommitLimit(a1, (*(_QWORD *)(a2 + 96) + *(_QWORD *)(a2 + 136)) << 12, a2, a2 + 32);
}
