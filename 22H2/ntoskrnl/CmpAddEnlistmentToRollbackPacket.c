/*
 * XREFs of CmpAddEnlistmentToRollbackPacket @ 0x140874B78
 * Callers:
 *     CmSnapshotRMTxArray @ 0x14066E8B8 (CmSnapshotRMTxArray.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     CmpAddPointerToRollbackPacket @ 0x140874BCC (CmpAddPointerToRollbackPacket.c)
 */

__int64 __fastcall CmpAddEnlistmentToRollbackPacket(__int64 a1, struct _DMA_ADAPTER *a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  ObfReferenceObject(a2);
  v4 = CmpAddPointerToRollbackPacket(a1, a2);
  v5 = v4;
  if ( v4 == -1073740008 )
  {
    v5 = 0;
  }
  else if ( v4 >= 0 )
  {
    return 0;
  }
  HalPutDmaAdapter(a2);
  return v5;
}
