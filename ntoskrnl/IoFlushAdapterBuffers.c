BOOLEAN __stdcall IoFlushAdapterBuffers(
        PDMA_ADAPTER DmaAdapter,
        PMDL Mdl,
        PVOID MapRegisterBase,
        PVOID CurrentVa,
        ULONG Length,
        BOOLEAN WriteToDevice)
{
  return DmaAdapter->DmaOperations->FlushAdapterBuffers(
           DmaAdapter,
           Mdl,
           MapRegisterBase,
           CurrentVa,
           Length,
           WriteToDevice);
}
