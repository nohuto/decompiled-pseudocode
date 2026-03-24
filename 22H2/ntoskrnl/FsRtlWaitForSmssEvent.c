/*
 * XREFs of FsRtlWaitForSmssEvent @ 0x1407D5280
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 */

void __fastcall FsRtlWaitForSmssEvent(PADAPTER_OBJECT DmaAdapter)
{
  KeWaitForSingleObject(DmaAdapter, Executive, 0, 0, 0LL);
  FsRtlpVolumeStartupApplicationsComplete = 1;
  HalPutDmaAdapter(DmaAdapter);
}
