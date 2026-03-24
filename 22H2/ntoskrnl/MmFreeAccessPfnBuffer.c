/*
 * XREFs of MmFreeAccessPfnBuffer @ 0x14026E7A0
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140208210 (MiTrimOrAgeWorkingSet.c)
 *     MiQueuePageAccessLog @ 0x14025B88C (MiQueuePageAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x14026EDF8 (PfpReturnAccessBuffer.c)
 *     MiReturnCcAccessLog @ 0x1403215BC (MiReturnCcAccessLog.c)
 *     PfpFlushBuffers @ 0x1406315B0 (PfpFlushBuffers.c)
 *     PfTAccessTracingCleanup @ 0x14099A9EC (PfTAccessTracingCleanup.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x1402C3BD0 (ObDereferenceObjectDeferDelete.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall MmFreeAccessPfnBuffer(_QWORD *P, char a2)
{
  struct _DMA_ADAPTER *v3; // rcx

  if ( !*((_DWORD *)P + 2) )
  {
    v3 = (struct _DMA_ADAPTER *)P[7];
    if ( (unsigned __int64)v3 > 1 )
    {
      if ( a2 )
        ObDereferenceObjectDeferDelete(v3);
      else
        HalPutDmaAdapter(v3);
    }
  }
  ExFreePoolWithTag(P, 0);
}
