/*
 * XREFs of PopDiscardRange @ 0x140A9F68C
 * Callers:
 *     PopSetRange @ 0x14058CA7C (PopSetRange.c)
 *     PopAllocateHiberContext @ 0x140984D38 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlSetBits @ 0x14028BC50 (RtlSetBits.c)
 */

void __fastcall PopDiscardRange(RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlSetBits(a1 + 2, a2, a3);
}
