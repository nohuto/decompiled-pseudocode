ULONG __stdcall HalReadDmaCounter(PDMA_ADAPTER DmaAdapter)
{
  return ((__int64 (*)(void))DmaAdapter->DmaOperations->ReadDmaCounter)();
}
