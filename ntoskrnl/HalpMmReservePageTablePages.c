/*
 * XREFs of HalpMmReservePageTablePages @ 0x14037B1CC
 * Callers:
 *     HalpMmInitSystem @ 0x140A8D600 (HalpMmInitSystem.c)
 * Callees:
 *     HalpInterruptModel @ 0x14028EADC (HalpInterruptModel.c)
 *     HalQueryMaximumProcessorCount @ 0x140375910 (HalQueryMaximumProcessorCount.c)
 *     HalpMmGetPteAddressSafe @ 0x14037B04C (HalpMmGetPteAddressSafe.c)
 */

__int64 HalpMmReservePageTablePages()
{
  __int64 result; // rax
  __int64 v1; // rdx
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rsi

  result = HalpInterruptModel();
  if ( (_DWORD)result == 3 )
  {
    result = HalQueryMaximumProcessorCount();
    v1 = ((unsigned int)result + 16LL) << 18;
  }
  v2 = 0LL;
  v3 = HalpOriginalHeapStart;
  v4 = (unsigned __int64)(v1 + (HalpMmEarlyPhysicalPagesAllocated << 12) + 0x1FFFFF) >> 21;
  if ( v4 )
  {
    do
    {
      if ( v3 > HalpOriginalHeapEnd )
        break;
      result = HalpMmGetPteAddressSafe(v3);
      ++v2;
      v3 += 0x200000LL;
    }
    while ( v2 < v4 );
  }
  return result;
}
