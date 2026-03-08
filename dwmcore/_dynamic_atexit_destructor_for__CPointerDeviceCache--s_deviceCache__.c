/*
 * XREFs of _dynamic_atexit_destructor_for__CPointerDeviceCache::s_deviceCache__ @ 0x180120130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__CPointerDeviceCache::s_deviceCache__()
{
  std::map<void *,DEVICE_INFO>::~map<void *,DEVICE_INFO>((void **)&CPointerDeviceCache::s_deviceCache);
}
