/*
 * XREFs of CMFAllocFn @ 0x1409FEC80
 * Callers:
 *     XpressDecodeCreate @ 0x140677788 (XpressDecodeCreate.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall CMFAllocFn(__int64 a1, int a2)
{
  return ExAllocatePool2(256LL, a2, 1668114000LL);
}
