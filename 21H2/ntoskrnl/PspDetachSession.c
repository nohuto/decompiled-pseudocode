/*
 * XREFs of PspDetachSession @ 0x1405E44D4
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     MmDetachSession @ 0x140215920 (MmDetachSession.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 */

void __fastcall PspDetachSession(PADAPTER_OBJECT DmaAdapter, __int64 a2)
{
  MmDetachSession((__int64)DmaAdapter, a2);
  HalPutDmaAdapter(DmaAdapter);
}
