/*
 * XREFs of HalpFlushTLB @ 0x14037B0FC
 * Callers:
 *     HalpUnmapVirtualAddress @ 0x14037ADE0 (HalpUnmapVirtualAddress.c)
 *     HalpMap @ 0x14037AE88 (HalpMap.c)
 *     HalpMmZeroPageWithTemporaryMapping @ 0x14037B138 (HalpMmZeroPageWithTemporaryMapping.c)
 * Callees:
 *     KeFlushCurrentTbImmediately @ 0x140396EE0 (KeFlushCurrentTbImmediately.c)
 */

__int64 HalpFlushTLB()
{
  __int64 result; // rax
  __int16 v1; // [rsp+20h] [rbp-8h]

  _disable();
  result = KeFlushCurrentTbImmediately();
  if ( (v1 & 0x200) != 0 )
    _enable();
  return result;
}
