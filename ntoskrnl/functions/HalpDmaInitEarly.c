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
