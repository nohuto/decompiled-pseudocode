void dynamic_atexit_destructor_for__CPointerDeviceCache::s_deviceCache__()
{
  std::map<void *,DEVICE_INFO>::~map<void *,DEVICE_INFO>((void **)&CPointerDeviceCache::s_deviceCache);
}
