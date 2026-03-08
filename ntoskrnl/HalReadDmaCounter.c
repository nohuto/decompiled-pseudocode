/*
 * XREFs of HalReadDmaCounter @ 0x1404FEFF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

ULONG __stdcall HalReadDmaCounter(PDMA_ADAPTER DmaAdapter)
{
  return ((__int64 (*)(void))DmaAdapter->DmaOperations->ReadDmaCounter)();
}
