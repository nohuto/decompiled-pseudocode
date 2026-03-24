/*
 * XREFs of RawUnload @ 0x14090F350
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 */

void RawUnload()
{
  HalPutDmaAdapter((PADAPTER_OBJECT)RawDeviceTapeObject);
  HalPutDmaAdapter((PADAPTER_OBJECT)RawDeviceCdRomObject);
  HalPutDmaAdapter((PADAPTER_OBJECT)RawDeviceDiskObject);
}
