/*
 * XREFs of RtlpHpSegLfhExtendContext @ 0x14024BCA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpHeapExtendContext @ 0x14024BCBC (RtlpHpHeapExtendContext.c)
 */

__int64 __fastcall RtlpHpSegLfhExtendContext(__int64 a1)
{
  return RtlpHpHeapExtendContext(*(_QWORD *)(a1 + 56));
}
