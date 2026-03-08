/*
 * XREFs of HalAllocateCommonBuffer @ 0x1404FEFA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

PVOID __stdcall HalAllocateCommonBuffer(
        PDMA_ADAPTER DmaAdapter,
        ULONG Length,
        PPHYSICAL_ADDRESS LogicalAddress,
        BOOLEAN CacheEnabled)
{
  return DmaAdapter->DmaOperations->AllocateCommonBuffer(DmaAdapter, Length, LogicalAddress, CacheEnabled);
}
