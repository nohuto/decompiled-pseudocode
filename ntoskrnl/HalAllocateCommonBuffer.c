PVOID __stdcall HalAllocateCommonBuffer(
        PDMA_ADAPTER DmaAdapter,
        ULONG Length,
        PPHYSICAL_ADDRESS LogicalAddress,
        BOOLEAN CacheEnabled)
{
  return DmaAdapter->DmaOperations->AllocateCommonBuffer(DmaAdapter, Length, LogicalAddress, CacheEnabled);
}
