/*
 * XREFs of ?NotifyInvalidResource@?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@EEAAXPEBVIDeviceResource@@@Z @ 0x1801C2810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 CDeviceResourceTable<CD2DInk,CInk>::NotifyInvalidResource()
{
  return CDeviceResourceTable<CD2DEffect,CFilterEffect>::ReleaseResource();
}
