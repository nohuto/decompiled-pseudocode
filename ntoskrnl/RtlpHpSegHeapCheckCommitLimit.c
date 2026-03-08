/*
 * XREFs of RtlpHpSegHeapCheckCommitLimit @ 0x1402B735C
 * Callers:
 *     RtlpHpLargeAlloc @ 0x1402B6D70 (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpHpHeapCheckCommitLimit @ 0x1402B738C (RtlpHpHeapCheckCommitLimit.c)
 */

__int64 __fastcall RtlpHpSegHeapCheckCommitLimit(__int64 a1, __int64 a2)
{
  return RtlpHpHeapCheckCommitLimit(a1, (*(_QWORD *)(a2 + 96) + *(_QWORD *)(a2 + 136)) << 12, a2, a2 + 32);
}
