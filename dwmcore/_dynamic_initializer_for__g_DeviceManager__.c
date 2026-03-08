/*
 * XREFs of _dynamic_initializer_for__g_DeviceManager__ @ 0x180003D70
 * Callers:
 *     <none>
 * Callees:
 *     ??0CDeviceManager@@QEAA@XZ @ 0x1801031A4 (--0CDeviceManager@@QEAA@XZ.c)
 */

int __fastcall dynamic_initializer_for__g_DeviceManager__(CDeviceManager *a1)
{
  CDeviceManager::CDeviceManager(a1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_DeviceManager__);
}
