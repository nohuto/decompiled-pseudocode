// attributes: thunk
__int64 CDeviceResourceTable<CD2DInk,CInk>::NotifyInvalidResource()
{
  return CDeviceResourceTable<CD2DEffect,CFilterEffect>::ReleaseResource();
}
