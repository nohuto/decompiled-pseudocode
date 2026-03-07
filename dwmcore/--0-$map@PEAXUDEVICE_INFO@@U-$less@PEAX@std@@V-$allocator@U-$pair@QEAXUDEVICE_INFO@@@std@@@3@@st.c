__int128 *std::map<void *,DEVICE_INFO>::map<void *,DEVICE_INFO>()
{
  __int64 v0; // rax

  CPointerDeviceCache::s_deviceCache = 0LL;
  v0 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x60uLL);
  *(_QWORD *)v0 = v0;
  *(_QWORD *)(v0 + 8) = v0;
  *(_QWORD *)(v0 + 16) = v0;
  *(_WORD *)(v0 + 24) = 257;
  *(_QWORD *)&CPointerDeviceCache::s_deviceCache = v0;
  return &CPointerDeviceCache::s_deviceCache;
}
