/*
 * XREFs of PopDiscardRange @ 0x1409969EC
 * Callers:
 *     PopSetRange @ 0x140387B00 (PopSetRange.c)
 *     PopAllocateHiberContext @ 0x140777B44 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlSetBits @ 0x1402D9750 (RtlSetBits.c)
 */

void __fastcall PopDiscardRange(_RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlSetBits(a1 + 2, a2, a3);
}
