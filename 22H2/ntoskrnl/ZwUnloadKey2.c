/*
 * XREFs of ZwUnloadKey2 @ 0x14041E1A0
 * Callers:
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14077ACF8 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpUnloadDifferencingHive @ 0x14077C3DC (VrpUnloadDifferencingHive.c)
 *     PiDrvDbUnloadHive @ 0x1408676EC (PiDrvDbUnloadHive.c)
 *     PiDrvDbLoadHive @ 0x140867738 (PiDrvDbLoadHive.c)
 *     BiUnloadHiveByName @ 0x140A5D60C (BiUnloadHiveByName.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140B6C1F8 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKey2(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
