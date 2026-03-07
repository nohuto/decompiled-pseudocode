void __fastcall CWARPDrawListEntry::AddDeviceResourcesToCache(CWARPDrawListEntry *this, struct CDrawListCache *a2)
{
  CDrawListBitmap::AddDeviceResourceToCache((CWARPDrawListEntry *)((char *)this + 48), a2);
  CDrawListBitmap::AddDeviceResourceToCache((CWARPDrawListEntry *)((char *)this + 128), a2);
}
