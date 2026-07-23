/*
 * XREFs of PspUserApcReserveKernelRoutine @ 0x1405D89E0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 */

void __fastcall PspUserApcReserveKernelRoutine(__int64 a1)
{
  struct _DMA_ADAPTER *v1; // rcx

  v1 = (struct _DMA_ADAPTER *)(a1 - 8);
  *(_DWORD *)&v1->Version = 0;
  HalPutDmaAdapter(v1);
}
