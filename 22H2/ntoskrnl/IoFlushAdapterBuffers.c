/*
 * XREFs of IoFlushAdapterBuffers @ 0x1405011A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

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
