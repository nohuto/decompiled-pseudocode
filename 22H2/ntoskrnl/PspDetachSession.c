/*
 * XREFs of PspDetachSession @ 0x140660AA4
 * Callers:
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     MmDetachSession @ 0x1402EC090 (MmDetachSession.c)
 */

void __fastcall PspDetachSession(PADAPTER_OBJECT DmaAdapter, __int64 a2)
{
  MmDetachSession((__int64)DmaAdapter, a2);
  HalPutDmaAdapter(DmaAdapter);
}
