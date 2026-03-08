/*
 * XREFs of HalpDmaInitEarly @ 0x140B60D2C
 * Callers:
 *     HalpDmaInitSystem @ 0x140A8D4D0 (HalpDmaInitSystem.c)
 * Callees:
 *     HalpDmaAlwaysReserveLogicalAddressRangeInternal @ 0x14037C89C (HalpDmaAlwaysReserveLogicalAddressRangeInternal.c)
 *     HalpDmaInitializeObjectType @ 0x1403982FC (HalpDmaInitializeObjectType.c)
 *     HalpDmaInitializeDomainEarly @ 0x140B60D78 (HalpDmaInitializeDomainEarly.c)
 */

__int64 HalpDmaInitEarly()
{
  __int64 result; // rax

  result = HalpDmaInitializeObjectType();
  if ( (int)result >= 0 )
  {
    HalpDmaHybridPassthroughSupport |= 0x80000000;
    result = HalpDmaAlwaysReserveLogicalAddressRangeInternal(0LL, 0x200000uLL);
    if ( (int)result >= 0 )
    {
      result = HalpDmaAlwaysReserveLogicalAddressRangeInternal(0xFEE00000uLL, 0x100000uLL);
      if ( (int)result >= 0 )
        return HalpDmaInitializeDomainEarly();
    }
  }
  return result;
}
