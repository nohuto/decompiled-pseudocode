/*
 * XREFs of ??0?$map@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@@std@@QEAA@XZ @ 0x1800F7D04
 * Callers:
 *     _dynamic_initializer_for__CPointerDeviceCache::s_deviceCache__ @ 0x180001280 (_dynamic_initializer_for__CPointerDeviceCache--s_deviceCache__.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

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
