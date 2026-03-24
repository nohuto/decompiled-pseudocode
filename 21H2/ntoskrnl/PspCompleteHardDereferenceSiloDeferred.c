/*
 * XREFs of PspCompleteHardDereferenceSiloDeferred @ 0x1405D84D0
 * Callers:
 *     <none>
 * Callees:
 *     PspStorageEmptyArrayNonReadonly @ 0x140200C90 (PspStorageEmptyArrayNonReadonly.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 */

void __fastcall PspCompleteHardDereferenceSiloDeferred(PADAPTER_OBJECT DmaAdapter)
{
  _DMA_OPERATIONS *DmaOperations; // rbx
  __int64 BuildScatterGatherListEx; // rcx

  DmaOperations = DmaAdapter[81].DmaOperations;
  if ( DmaOperations )
  {
    PspStorageEmptyArrayNonReadonly((__int64)DmaAdapter[81].DmaOperations, 0x20u);
    BuildScatterGatherListEx = (__int64)DmaOperations[1].BuildScatterGatherListEx;
    if ( BuildScatterGatherListEx )
      PspStorageEmptyArrayNonReadonly(BuildScatterGatherListEx, 0x100u);
  }
  HalPutDmaAdapter(DmaAdapter);
}
