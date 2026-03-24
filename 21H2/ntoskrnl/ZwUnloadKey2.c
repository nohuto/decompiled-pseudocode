/*
 * XREFs of ZwUnloadKey2 @ 0x1403FDCE0
 * Callers:
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1405D2FAC (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpUnloadDifferencingHive @ 0x1405D6264 (VrpUnloadDifferencingHive.c)
 *     PiDrvDbUnloadHive @ 0x140726048 (PiDrvDbUnloadHive.c)
 *     PiDrvDbLoadHive @ 0x140726094 (PiDrvDbLoadHive.c)
 *     BiUnloadHiveByName @ 0x140779404 (BiUnloadHiveByName.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140A728A8 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKey2(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
