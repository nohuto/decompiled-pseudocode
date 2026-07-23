/*
 * XREFs of RawUnload @ 0x14090F460
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 */

void RawUnload()
{
  HalPutDmaAdapter((PADAPTER_OBJECT)RawDeviceTapeObject);
  HalPutDmaAdapter((PADAPTER_OBJECT)RawDeviceCdRomObject);
  HalPutDmaAdapter((PADAPTER_OBJECT)RawDeviceDiskObject);
}
