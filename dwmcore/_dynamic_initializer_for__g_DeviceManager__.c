int __fastcall dynamic_initializer_for__g_DeviceManager__(CDeviceManager *a1)
{
  CDeviceManager::CDeviceManager(a1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_DeviceManager__);
}
