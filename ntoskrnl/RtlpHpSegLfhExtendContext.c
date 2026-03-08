/*
 * XREFs of RtlpHpSegLfhExtendContext @ 0x1402F8F90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpHeapExtendContext @ 0x1402F8FAC (RtlpHpHeapExtendContext.c)
 */

__int64 __fastcall RtlpHpSegLfhExtendContext(__int64 a1)
{
  return RtlpHpHeapExtendContext(*(_QWORD *)(a1 + 56));
}
