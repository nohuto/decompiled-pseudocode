/*
 * XREFs of HalPutDmaAdapter @ 0x140502FD0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 */

void __stdcall HalPutDmaAdapter(PADAPTER_OBJECT DmaAdapter)
{
  ObfDereferenceObjectWithTag(DmaAdapter, 0x746C6644u);
}
