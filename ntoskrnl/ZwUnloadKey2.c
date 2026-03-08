/*
 * XREFs of ZwUnloadKey2 @ 0x140415E10
 * Callers:
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140736258 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpUnloadDifferencingHive @ 0x1407379FC (VrpUnloadDifferencingHive.c)
 *     PiDrvDbUnloadHive @ 0x14086773C (PiDrvDbUnloadHive.c)
 *     PiDrvDbLoadHive @ 0x140867788 (PiDrvDbLoadHive.c)
 *     BiUnloadHiveByName @ 0x140A5A134 (BiUnloadHiveByName.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140B68368 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKey2(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
