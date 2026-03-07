void std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::clear()
{
  _QWORD *v0; // rbx

  v0 = (_QWORD *)CPointerDeviceCache::s_deviceCache;
  std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,DEVICE_INFO>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *>>>(
    (__int64)&CPointerDeviceCache::s_deviceCache,
    (__int64)&CPointerDeviceCache::s_deviceCache,
    *(_QWORD *)(CPointerDeviceCache::s_deviceCache + 8));
  v0[1] = v0;
  *v0 = v0;
  v0[2] = v0;
  *((_QWORD *)&CPointerDeviceCache::s_deviceCache + 1) = 0LL;
}
