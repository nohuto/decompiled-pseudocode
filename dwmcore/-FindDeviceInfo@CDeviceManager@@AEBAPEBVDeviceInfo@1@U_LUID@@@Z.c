/*
 * XREFs of ?FindDeviceInfo@CDeviceManager@@AEBAPEBVDeviceInfo@1@U_LUID@@@Z @ 0x180034B70
 * Callers:
 *     ?GetAvailableDevice@CDeviceManager@@AEBA?AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180034B20 (-GetAvailableDevice@CDeviceManager@@AEBA-AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     <none>
 */

const struct CDeviceManager::DeviceInfo *__fastcall CDeviceManager::FindDeviceInfo(
        CDeviceManager *this,
        struct _LUID a2)
{
  __int64 v2; // r8
  __int64 v3; // r9

  v2 = *((_QWORD *)this + 7);
  v3 = 0LL;
  while ( v2 != *((_QWORD *)this + 8) )
  {
    if ( a2 == *(_QWORD *)(*(_QWORD *)v2 + 896LL) )
      return (const struct CDeviceManager::DeviceInfo *)v2;
    v2 += 16LL;
  }
  return (const struct CDeviceManager::DeviceInfo *)v3;
}
