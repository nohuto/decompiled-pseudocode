/*
 * XREFs of ZwUnloadKey2 @ 0x1403FDEC0
 * Callers:
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1405D2FAC (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpUnloadDifferencingHive @ 0x1405D6264 (VrpUnloadDifferencingHive.c)
 *     PiDrvDbUnloadHive @ 0x140726218 (PiDrvDbUnloadHive.c)
 *     PiDrvDbLoadHive @ 0x140726264 (PiDrvDbLoadHive.c)
 *     BiUnloadHiveByName @ 0x1407795C4 (BiUnloadHiveByName.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140A738A8 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
