/*
 * XREFs of HalpFlushTLB @ 0x1403BB550
 * Callers:
 *     HalpMmZeroPageWithTemporaryMapping @ 0x1403BADC8 (HalpMmZeroPageWithTemporaryMapping.c)
 *     HalpUnmapVirtualAddress @ 0x1403BB230 (HalpUnmapVirtualAddress.c)
 *     HalpMap @ 0x1403BB2D8 (HalpMap.c)
 * Callees:
 *     KeFlushCurrentTbImmediately @ 0x1403A0380 (KeFlushCurrentTbImmediately.c)
 */

unsigned __int64 HalpFlushTLB()
{
  unsigned __int64 result; // rax
  __int16 v1; // [rsp+20h] [rbp-8h]

  _disable();
  result = KeFlushCurrentTbImmediately();
  if ( (v1 & 0x200) != 0 )
    _enable();
  return result;
}
