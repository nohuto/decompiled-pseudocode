/*
 * XREFs of RtlpHpSegLfhExtendContext @ 0x14036F030
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpHeapExtendContext @ 0x14036F04C (RtlpHpHeapExtendContext.c)
 */

__int64 __fastcall RtlpHpSegLfhExtendContext(__int64 a1)
{
  return RtlpHpHeapExtendContext(*(_QWORD *)(a1 + 56));
}
